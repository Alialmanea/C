#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ebob(int a,int b)
{
	int mixnum,minnum,i,ebob=0;
	if(a<b)
	{
		mixnum=b;
		minnum=a;
	}
	else
	{
		mixnum=a;
		minnum=b;
	}
	for(i=1;i<mixnum;i++)
	{
		if(a%i==0 &&b%i==0)
		{
			ebob=i;
		}
	}
	return ebob;
}

int main(int argc, char *argv[]) {
	
	int rd=ebob(12,8);
	printf("%d",rd);
	
	
	return 0;
}
