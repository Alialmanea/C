#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

#define C 40
#define R 20


int main(){
	int i,j,x;
	
	for(i=1;i<=C;i++){
		if(i==1)
		printf("%c",201);
		else if(i==C)
		printf("%c",187);
		else
		printf("%c",205);
	}
	
	printf("\n");

    
	for(j=1;j<=R;j++){
		printf("%c",186);
		for(x=1;x<C;x++)
		{
			if(x==C-1)
			printf("%c\n",186);
			else
			printf(" ");
		}
	}

	for(i=1;i<=C;i++){
		if(i==1)
		printf("%c",200);
		else if(i==C)
		printf("%c",188);
		else
		printf("%c",205);
	}
	
getch();				
	
	return 0;

}
