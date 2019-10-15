#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
# include<windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gotoxy(int x,int y)
{
    COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}


int main() {
	
	int x,y,i,j;
	printf("Enter the x :");
	scanf("%d", &x);
	printf("Enter the :");
	scanf("%d", &y);
	
	
	system("cls");
	
	
	for(i=1;i<x;i++){//x
		 gotoxy(i,y-1);
		 printf(".");
		for(j=x;j<y;j++){//y
		    gotoxy(x-1,j);
			printf(".");
			
		}	
		 
	}
	
	
		
	for(i=1;i<x;i++){//x
		 gotoxy(x,i);
		 printf(".");
		for(j=1;j<y;j++){//y
		    gotoxy(j,y);
			printf(".");
			
		}	
		 
	}
	

	
   getch();
}
