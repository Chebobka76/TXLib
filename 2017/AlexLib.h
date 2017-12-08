/// @file AlexLib.h
///@warning ������!!! �������� ������ � TXLib.h
/*!
@brief ������ �������
@param x         �����
@param y         �����
@param s         ����� ������
@param r         ������ ��������� ������
@param color     ���� �������
@param �color1   1 ��� 0.���� �����
@param var1      0 ��� 1. �������� ����������
*/

void drawLogo(int x,int y,double s,double r,COLORREF color,int color1, int var1);
/*!
@brief ������ ��������
@param x         �����
@param y         �����
@param s         ����� ������
@param l         ����� �����
@param color     ���� �������
@param color     ���� �����
@param var1      ����
*/
void drawSun(int x,int y,double s,double l,COLORREF color,COLORREF color1,int sun_on);
/*!
@brief ������ ���
@param x         �����
@param y         �����
@param s         ����� ������
@param color     ���� ���� ����
@param color2    ���� �������
@param color3    ���� ����
@param light_off 0 ��� 1. ����
*/
void drawHouse(int x,int y,double s,COLORREF color,COLORREF color2,COLORREF color3,int light_off);
/*!
@brief ������ �������
@param x         �����
@param y         �����
@param s         ����� ������
@param c         ������ ����
@param color     ���� ���� ��� � �������
@param norm      1 ��� 0. ���� ������: ���� int green=1, �� ������, ���� = 0, �� �����, ��� �������
*/
void drawSmiley(int x,int y,double s,double c,COLORREF color,int norm,int green);
/*!
@brief �� ��������
*/
void drawCar(int x,int y,double s,COLORREF color,COLORREF color1,COLORREF color2,int light_on);
void drawTrawa(int x,int y);
void drawOblaco(int x,int y);

void drawLogo(int x,int y,double s,double r,COLORREF color,int color1,int var1)
{
    txSetColor(color);

    if(color1)
        txSetFillColor(TX_BLUE);
    else
        txSetFillColor(TX_RED);

    txCircle(x,y,200*s);
    txSetColor(color,5*s);

    if(var1)
    {
        txCircle(x, y-100*s,100*s*r);
        txCircle(x,y+100*s,100*s*r);
        txCircle(x-100*s,y,100*s*r);
        txCircle(x+100*s,y,100*s*r);
    }
    else
    {
        txCircle(x-100*s,y,100*s*r);
        txCircle(x+100*s,y,100*s*r);
        txCircle(x,y,100*s*r);
    }
}

void drawSun(int x,int y,double s,double l,COLORREF color,COLORREF color1,int sun_on)
{
    txSetColor(color,5*s);
    txSetFillColor(color1);
    txCircle(x,y,50*s);
    txSetColor(color1,5*s);

    if(sun_on)
    {
        txLine(x,y, x-150*s*l,y        );
        txLine(x,y, x-125*s*l,y+ 50*s*l);
        txLine(x,y, x-150*s*l,y+ 60*s*l);
        txLine(x,y, x-100*s*l,y+ 75*s*l);
        txLine(x,y, x- 50*s*l,y+100*s*l);
        txLine(x,y, x        ,y+150*s*l);
    }

}

void drawHouse(int x,int y,double s,COLORREF color,COLORREF color2,COLORREF color3,int light_off)
{
    txSetColor(color2,5*s);
    txSetFillColor(color3);
    POINT house[7] = {{x+50*s,y-50*s},{x+50*s,y+50*s},{x-50*s,y+50*s},{x-50*s,y-50*s},{x+50*s,y-50*s},{x,y-100*s},{x-50*s,y-50*s}};
    txPolygon (house, 7);
    txSetColor(color,3*s);

    if(light_off)
        txSetFillColor(TX_BLUE);
    else
        txSetFillColor(TX_YELLOW);

    txCircle(x,y,20*s);
    txLine(x,y-20*s,x,y+20*s);
    txLine(x-20*s,y,x+20*s,y);
}

void drawSmiley(int x,int y,double s,double c,COLORREF color,int norm,int green)
{
    txSetColor(color,5*s);

    if(norm)
    {
        if(green)
            txSetFillColor(TX_GREEN);
        else
            txSetFillColor(TX_YELLOW);
    }
    else
        txSetFillColor(TX_RED);

    txCircle(x,y,100*s);
    txSetFillColor(color);
    txSetColor(color,10*s);
    txCircle(x+40*s,y-50*s,20*s*c);
    txCircle(x-40*s,y-50*s,20*s*c);
    txLine(x-40*s,y+50*s,x+40*s,y+50*s);
}

void drawCar(int x,int y,double s,COLORREF color,COLORREF color1,COLORREF color2,int light_on)
{
    txSetColor(color,5*s);
    txSetFillColor(color1);
    POINT car[6] = {{x,y},{x,y-100*s},{x+200*s,y-100*s},{x+200*s,y-50*s},{x+300*s,y-50*s},{x+300*s,y}};
    txPolygon (car,6);
    txSetColor(color,15*s);
    txSetFillColor(color2);
    txCircle(x+25*s,y,40*s);
    txCircle(x+250*s,y,40*s);

    if(light_on)
        txSetFillColor(TX_BLUE);
    else
        txSetFillColor(TX_YELLOW);

    txSetColor(color,3*s);
    txCircle(x+175*s,y-75*s,20*s);
}

void drawTrawa(int x,int y)
{
    txSetColor(RGB(173,255,47));
    txSetFillColor(RGB(173,255,47));
    POINT trawa[4] = {{x,y},{x,y-300},{x-1500,y-300},{x-1500,y}};
    txPolygon (trawa,4);
}

void drawOblaco(int x,int y)
{
    txSetFillColor(TX_WHITE);
    txSetColor(TX_WHITE);
    txCircle(x,y,100);
    txCircle(x+100,y,50);
    txCircle(x-100,y,50);
}
