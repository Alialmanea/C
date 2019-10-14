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
	
	int a,b,c;
	char ch;
   a=5;
   b=6;
   ch = getch();
   
   system("cls");
    
   gotoxy(a,b);
   
   printf("%c",ch);


	while(1){
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
				
				if(c==27)
				break;
				
				//system("cls");           //To clear what have been pressed 
				gotoxy(a,b);
				printf("%c",ch);
				
		}
		
	}

	getch();
   
}
