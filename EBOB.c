#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
int ebob(int a,int b)
{
	int mixnum,minnum;
	if(a<b)
	{
		mixnum=a;
		minnum=b;
	}
	else
	{
		mixnum=b;
		minnum=a;
	}
	int bolen=minnum;
	while(a%bolen!=0||b%bolen!=0)
	{
		bolen--;
	}
	return bolen;
}

int main(int argc, char *argv[]) {
	
	int rd=ebob(75,60);
	printf("%d",rd);
	
	
	return 0;
}
