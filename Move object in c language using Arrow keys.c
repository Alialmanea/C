#include <stdio.h>
#include <stdlib.h>
#include<conio.h>
#include<windows.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int gotoxy(int x,int y)
{
    COORD coord = {x,y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);
}

int gotoxy(int,int);

int main(){
	
	int a,b,c,i;
	char obj;
	
	a=5;
	b=6;
	
  printf("Enter the object : ");
  scanf("%c",&obj);
	
    system("cls");
    gotoxy(a,b);
    printf("%c",obj);

while(1)
{
	if(kbhit())
	{
	c=getch();
		if(c==77)
		a++;
		
		if(c==75)
		a--;
		
		if(c==72)
		b--;
			
		if(c==80)
		b++;
   //system("cls");             /*Showing just The new movement*/ 
     gotoxy(a,b);
     printf("%c",obj);

	 }	
}	
   getch();
}
