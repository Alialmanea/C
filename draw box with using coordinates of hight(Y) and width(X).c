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

void box(int,int);


int  main(void){

/*int hight,width;

printf("enter the hight of your square: ");
scanf("%d",&hight);

printf("enter the width of your square: ");
scanf("%d",&width);*/


box(20,60);//box(hight,width)

	getch();

}


void box(int x,int y)
{	
	int hight=x,width=y,startpointleft=1,top=1,i;

system("cls");
gotoxy(startpointleft,top);
printf("%c",218);
for(i=0;i<width-startpointleft-1;i++){
	printf("%c",196);
}
printf("%c",191);

for(i=1;i<hight-top;i++)
{
gotoxy(startpointleft,top+i);printf("%c",179);
gotoxy(width,top+i);printf("%c",179);
}


gotoxy(startpointleft,hight);
printf("%c",192);

for(i=0;i<width-startpointleft-1;i++){
	printf("%c",196);
}

printf("%c",217);	
	
}



