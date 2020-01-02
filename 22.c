#include <stdio.h>
#include <math.h>


int main(int argc, const char * argv[]) {
    
    int x=0,y=0,area;
    y=-2*x+100;
    area=x*y;
    area=-2*x*x+100; //We make it to equal zero by derivative it
    //-4*x+100=0;
    
    // We find the value of zero
    
    for (int i=0;i<10000;i++){
        if((-4*i)+100==0){
            x=i;
            break;
        }
    }
    //we found x here
    y=(-2*x)+100; //we will found y here
    area=x*y; //than Calculate the maximum area of Rectangle in Triangle
    
    printf("Maximum Area of Rectangle inside a Triangle is : %d\n",area);
    
    
    return 0;
}
