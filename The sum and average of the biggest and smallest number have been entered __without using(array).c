#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(){
	
	int mixnum,minnum,sum,n,i,adet;double ave;
	bool fristnum=true;
	
	printf("Please Enter how many numbers will be: ");
        scanf("%d",&adet);
	
	for(i=0;i<adet;i++)             
	{
		printf("Please enter an integer: ");
        scanf("%d",&n);
		if(fristnum==true)
		{
			fristnum=false;
			mixnum=n;
			minnum=n;
		}
		if(mixnum<n)
			mixnum=n;	
		else if(minnum>n)
		minnum=n;
	}
	
	printf("Mix number is: %d\n",mixnum);
	printf("Min number is: %d\n",minnum);
	
	 sum=minnum+mixnum;
	 ave=sum/adet;
	 
	    printf("\n");
		printf("The Sum of the biggest and smallest number have been entered is: %d",sum);
		printf("\n");
		printf("The Average of the biggest and smallest number have been entered is: %f",ave);

	getch();
}
