#include <stdio.h>

int Rand(){

int static Random_Number=3512;
//int static Random_Number=0xACE1u;                   /*FOr Using  Linear Feedback shift Register to  generate random number;*/

Random_Number=((Random_Number*Random_Number)/100)%10000;

return Random_Number;
}

int Rand_NextIn(int from,int to)
{
    return (Random()%((to-from)+1)+from);
}

int Random(int to)
{
    return (Rand()%((to)+1));
}

int main(void)
{
int i,n;

for(i=1;i<=10;i++)
{
    int n=Rand_NextIn(-2,2);
    printf("%d\n",n);
}

getch();
}
