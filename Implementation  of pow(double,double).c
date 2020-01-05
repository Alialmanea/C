#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>  //For Test our functions

int fac(int n){
    if(n==1||n==0)
        return 1;
    return n*fac(n-1);
}

double powi(int x,int n){
        int i;     /* Variable used in loop counter */
        double reslut = 1;
        
        for (i = 0; i < n; i++)
            reslut *= x;
    
        return reslut;
}



double exponential(double x,int cut_off){   //  E x/n! = 1+x+x^2/!2+x^2/!2+x^3/!3+....
    double reslut=x+1;
    for(int i=2;i<cut_off;i++)
        reslut=reslut+(pow(x,i)/fac(i));
    
    return reslut;
}


double ln(double x){     //ln=> y=(x-1)/(x+1)  y=2y(1+(1/3+y^2 + (1/5+y^4 + (1/7+y^6 +(1/9+y^8)
    double old_sum=0.0;
    double y=(x-1)/(x+1);
    double y_2=y*y;
    double denom=1.0;
    double frac=y;
    double term=frac;
    double sum=term;
    
    while (old_sum!=sum) {
        old_sum=sum;
        denom+=2.0;
        frac*=y_2;
        sum+=frac/denom;
    }
    
    return sum*2 ;
}

double log10(double lnx){
    return ln(lnx)/ln(10);
}


double Pow(double x,double y){
    double X =ln(x)*y;
    return exponential(X,10);
}




int main(int argc, const char * argv[]) {
    
    printf("exponential function of math x=%d e=%f\n",10,exp(1));//exponential of math
    printf("our exponential function     x=%d e=%f\n",10,exponential(1,10)); //our exponential
    printf("\n");
    printf("function ln() of math x=%d ln=%f\n",10,ln(10));//ln of math
    printf("Our function ln()     x=%d ln=%f\n",10,log(10)); //my ln
    printf("\n");
    printf("function pow()of math pow(%f,%f)=%f\n",3.4,1.3,pow(3.4,1.3));//pow of math
    printf("Our function pow()    pow(%f,%f)=%f\n",3.4,1.3,Pow(3.4,1.3)); //my pow
    double n=Pow(2.3,2.5);
    
    
    return 0;
}
