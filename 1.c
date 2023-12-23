#include <iostream>
// Graphics Library for C++
#include <graphics.h>
#include <conio.h>
#include <dos.h>
using namespace std;
int main()
{   
    int gd = DETECT, gm;
    initgraph(&gd, &gm, "");

    putpixel(50, 100, YELLOW);
    outtextxy(35, 55, "PIXEL");

    line(120, 90, 170, 170);
    outtextxy(130, 55, "LINE");

    circle(240, 120, 40);
    outtextxy(215, 55, "CIRCLE");

    rectangle(300, 90, 400, 140);
    outtextxy(310, 55, "RECTANGLE");

    ellipse(500, 120, 0, 360, 70, 35);
    outtextxy(470, 55, "ELLIPSE");
    getch();
    closegraph();

    return 0;
}