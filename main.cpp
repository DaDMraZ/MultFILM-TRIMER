
#include "TXLib.h"

void drawSky(int R, int G, int B)
{
    txSetColor (RGB(R, G, B));
    txSetFillColor(RGB(R, G, B));
    txRectangle (0, 0, 800, 800);

}

void drawLand()

{
    txSetColor (RGB(128,255,0));
    txSetFillColor(RGB(128,255,0));
    txRectangle (0, 350, 800, 600);
}
void drawBobr()
{
    txSetColor (RGB(255,128,0));
    txSetFillColor(RGB(255,128,0));
    txCircle (255, 400, 100);
    txSetColor (RGB(255,0,0));
    txSetFillColor(RGB(255,0,0));
    POINT star[4] = {{171, 348}, {339, 348}, {352, 389},{155, 389},};
    txPolygon (star, 4);
    txSetColor (RGB(255,128,0));
    txSetFillColor(RGB(255,128,0));
    txEllipse (484, 250, 300, 200);

}


void drawHotel()
{
    txSetColor (RGB(255,128,0));
    txSetFillColor(TX_YELLOW);
    txRectangle (555, 180, 790, 400);
    POINT star[3] = {{555, 180}, {680, 105}, {790, 180},};
    txSetColor (RGB(255,0,0));
    txSetFillColor(TX_RED);
    txPolygon (star, 3);
    txSetColor (RGB(255,255,0));
    txSetFillColor(RGB(255,255,0));
    txRectangle (627, 278, 710, 350);

}

void drawSun(int x,int y)
{
    txSetColor (TX_YELLOW);
    txSetFillColor(TX_YELLOW);
    txCircle(x,y,50);
}
void drawCloud(int x)
{
    txSetColor (RGB(200,250,252));
    txSetFillColor(RGB(200,250,252));
    txEllipse (x + 360 - 360, 60, x + 510 - 360, 130);
    txEllipse (x + 440 - 360, 40, x + 600 - 360, 120);
    txEllipse (x + 540 - 360, 50, x + 690 - 360, 120);

}

int main()
    {
    txCreateWindow (800, 600);

    int xSun =100;
    int ySun = 100;
    int xCloud = 360;
    int RSky = 63;
    int GSky = 241;
    int BSky = 233;


    while(GSky>0)
{


    txBegin();

    drawSky(RSky, GSky, BSky);
    drawSun(xSun,ySun);
    drawLand();
    drawCloud(xCloud);
    drawBobr();
    drawHotel();


    xSun = xSun + 2;
    ySun = ySun + 2;
    GSky = GSky - 1;


    txEnd();

    txSleep(40);

}
 while(xCloud>-500)
{


    txBegin();

    drawSky(RSky,GSky,BSky);
    drawSun(xSun,ySun);
    drawLand();
    drawCloud(xCloud);
    drawBobr();
    drawHotel();



    xCloud = xCloud - 2;

    txEnd();

    txSleep(30);

}


    txTextCursor (false);
    return 0;
        }

