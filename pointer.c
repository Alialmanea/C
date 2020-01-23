
#include <math.h>
#include <conio.h>



void dosomething(int*a,int*b,int*c){
*a-=++*a* *a;
*b+=++*b;
*c*=--*c;
}

// driver code
int main()
{
    int a=3,b=2,c=5;
    int pa,pb,pc;
    pa=&a;pb=&b;pc=&c;
    dosomething(&a,&b,&c);
    printf("a=%d  b=%d  c=%d \n",a,b,c);
    dosomething(pa,pb,pc);
    printf("a=%d  b=%d  c=%d",a,b,c);








    return 0;
}
