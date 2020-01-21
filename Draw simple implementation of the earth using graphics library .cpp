
// C Implementation for drawing circle
#include <graphics.h>
#include <math.h>
#include <conio.h>


void drawEllipse(int cx,int cy,int rx,int ry
                 ,int color){
    double px,py,pi=3.14;
    setcolor(12);
for(int i=1;i<360;i++){
    px=cx+rx*cos(i*pi/180);
    py=cy+ry*sin(i*pi/180);
    putpixel(px,py,color);
}
}



// driver code
int main()
{
    // gm is Graphics mode which is
    // a computer display mode that
    // generates image using pixels.
    // DETECT is a macro defined in
    // "graphics.h" header file
    int gd = DETECT, gm, color;

    // initgraph initializes the
    // graphics system by loading a
    // graphics driver from disk
    initgraph(&gd, &gm, "");

     int maxx = getmaxx();

    // maximum Y-coordinate for the window
    int maxy = getmaxy();
drawEllipse(maxx/2,maxy/2,150,50,15);
drawEllipse(maxx/2,maxy/2,80,80,15);
drawEllipse(150+maxx/2,maxy/2,15,15,15);

    getch();

    // closegraph function closes the
    // graphics mode and deallocates
    // all memory allocated by
    // graphics system .
    closegraph();

    return 0;
}
