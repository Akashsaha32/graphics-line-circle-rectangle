#include <iostream>
#include <graphics.h>
#include <conio.h>

using namespace std;

int main()
{
    int gd = DETECT, gm;
    initgraph(&gd,&gm,"");

    //line
    line(100,100,200,200);

    //circle
    int x1 = getmaxx();
    int y1 = getmaxy();
    int x = x1/2;
    int y = y1/2;
    setfillstyle(SOLID_FILL,RED);
    circle(x,y,75);
    floodfill(x,y,WHITE);

    setfillstyle(SOLID_FILL,BLUE);
    line(x-200,y+100,x+200,y+100);
    line(x-200,y+100,x-200,y-100);
    line(x-200,y-100,x+200,y-100);
    line(x+200,y-100,x+200,y+100);
    floodfill(x-190,y-90,WHITE);
    line(x-200,y-100,x-200,y+300);
    line(x-210,y-100,x-210,y+300);
    line(x-200,y-100,x-210,y-100);

    //rectangle

    setfillstyle(SOLID_FILL,BLUE);
    line(400,100,600,100);
    line(400,100,400,200);
    line(400,200,600,200);
    line(600,200,600,100);
    floodfill(401,110,WHITE);

    getch();

    return 0;
}
