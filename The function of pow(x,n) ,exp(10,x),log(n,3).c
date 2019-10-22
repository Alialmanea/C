#include <stdio.h>
#include <stdlib.h>
#include <math.h> /* only used for testing */


float exponential(int n, float x) 
{ 
int i;
	float sum = 1.0f; // initialize sum of series 

	for ( i = n - 1; i > 0; --i ) 
		sum = 1 + x * sum / i; 

	return sum; 
} 



/*float logn(float n,int r)
{
	return(n >r - 1 )?1+logn(n/r,r):0;
}*/


float mylog(float y)
{
 float x = (y - 1)/(y + 1);
 double sum = x, term = x;
 /* used for power */
 double j = 3;
 
 /* sums terms up to x^1200/1200 */
 while(j < 1200)
 {
  j += 2;
  
  /* starts at term^3 */
  term = (term * x * x);
  
  /* calcs term + term^3 to start */
  sum = sum + (term / j);
 }
 
 /* finishes calc sum by multiplying by 2 */
 sum = sum * 2;
 
 /* if y is <= 0.0 return 0 */
 if(y <= 0.0)
 {
  sum = 0;
 }
 
 return sum;
}



/* calculates power using previous function */
/*pow(x,p)=e^log(x)*p  */   
float mypow(float x, float p)
{
 float result, k, answer;
    
 k = mylog(x,3);
 result = p * k;
 answer = exponential(10,result);
    
 return answer;
}

int main()
{
 double x, p;
 
 
 printf("Actual e^x: %lf\n", exp(1));
 printf("My e^x: %f\n", exponential(10,1));

 
 printf("Actual log(x): %f\n", log(2.7));
 printf("My log(x): %f\n", logn(2.7,3));
   
 printf("Actual pow(x,p): %f\n", pow(2.3,1.5));
 printf("My pow(x,p): %f\n", mypow(2.3,1.5));
 
 return 0;
}
