//=================================================================================================================
//           [These sections are for folding control  in Code::Blocks]
//{          [Best viewed with "Fold all on file open" option enabled]             [best screen width is 115 chars]
//=================================================================================================================
//!
//! @file    ZnamenkaLib.h
//! @brief   ���������� ���������� ���������� ���� (��� ������ ���������).
//!
//!         ���� ���� ���� �������(��� ��� ���������) ������ ���������� - ��������, ��� ��� ����� �������.
//!         �������: ��� ���������� ����������.
//!
//}

void drawPiat (int x, int y, double s, COLORREF color, int h);

//{
//! @brief  ������-������� ���
//!         ������ ���������� ������������.
//!         (������������ �� ����� ���� ������, �������� ��� ������������ ���������� ������� � �.�.)
//!
//! @param   x      X-���������� ������� �����
//! @param   y      Y-���������� ������� �����
//! @param   s      �������� �������
//! @param   color  ���� ������
//! @param   h      ����������, ��������� ���������� �� X-��� �������� ������ ����
//!          <b>(�������������, ������������� ������������� �������� ��������� h)</b>
//!
//! @usage @code
//!         drawPiat(400, 100, 2,(RGB(100,100,50)), -5);
//! @endcode
//}

void drawPiat (int x, int y, double s, COLORREF color, int h)
{
    POINT stone[5] = {{x-20*s+h,5*s+y-h},{x,y-5*s-h},{20*s+x,5*s+y-h}, {10*s+x, 25*s+y-h}, {x-10*s, 25*s+y-h}};
    txSetFillColor(color);
    txSetColor(color);
    txPolygon (stone, 5);
}


void drawBird (int x, int y, double s, COLORREF color, COLORREF color1, int h, int k, int sleep_k, int p);

//{
//! @brief  ������ ����������
//!         ������ �����.
//!
//! @param   x        X-���������� ������� �����
//! @param   y        Y-���������� ������� �����
//! @param   s        �������� �������
//! @param   color    ���� ���� � �����
//! @param   color1   ���� �����
//! @param   h        ������/��������� �����(� ���������� ������), ��������� ���������� �� Y-��� ������� �����
//! @param   k        ������/��������� �����(� ���������� ������), ��������� ���������� �� Y-��� ������� �����
//! @param   sleep_k  �������� �����: ��� �������� 1 - ���� ������, 0 - ������
//! @param   p        �������� �������� �����
//!                   <b>(��� ������������� �������� ���������� - ������� ������ ������, ��� ������������� - �����)</b>
//!
//! @usage @code
//!         drawBird(200, 150, 1, (RGB(0, 255, 204)), (RGB(0,51,51)), 10, 10, 1, -1);
//! @endcode
//}

void drawBird (int x, int y, double s, COLORREF color, COLORREF color1, int h, int k, int sleep_k, int p)
{
    txSetFillColor(color);
    txSetColor(color);
    POINT cluv[3] = {{x-55*s*p,y-k}, {x,y-5*s}, {x, y+5*s}};
    txPolygon (cluv, 3);
    txCircle(x+20*s*p, y+8*s, 23*s);

    if (sleep_k)
 {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txCircle(x+25*s*p, y+3*s, 7*s);
        txSetColor(TX_WHITE);
        txSetFillColor(TX_WHITE);
        txCircle(x+27*s*p, y+1*s, 3*s);
}
    else
{
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txLine(x+17*s*p, y+3*s, x+29*s*p, y+3*s);
}
    txSetColor(color);
    txSetFillColor(color);
    txCircle(x+37*s*p, y+60*s, 40*s);
    txSetColor(color1);
    txSetFillColor(color1);
    POINT ckrulo[5] = {{x+40*s*p, y+55*s}, {x+60*s*p, y+70*s}, {x+110*s*p, y+65*s-h}, {x+50*s*p, y+30*s}, {x+35*s*p, y+44*s}};
    txPolygon (ckrulo, 5);


}


void drawSun  (int x, int y, double s, COLORREF color, int k, int q);

//{
//! @brief  ������
//!         ������ ������.
//!
//! @param   x      X-���������� ������� �����
//! @param   y      Y-���������� ������� �����
//! @param   s      �������� �������
//! @param   color  ���� ������
//! @param   k      �������� ����� �����
//! @param   q      �������� ������� ������
//!          <b>(������ ������������  �� 150-q)</b>
//!
//! @usage @code
//!         drawSun(100, 400, 0.5, (RGB(255, 255, 30)), 10, 10);
//! @endcode
//}

void drawSun  (int x, int y, double s, COLORREF color, int k, int q)
{
    txSetColor(color, 4*s);
    txSetFillColor(color);
    txCircle(x,y,(150-q)*s) ;
    txLine(x,y,x,y+300*s+k);
    txLine(x,y,x,y-300*s-k);
    txLine(x,y,x+300*s+k,y);
    txLine(x,y,x-300*s-k,y);
    txLine(x,y,x-200*s-k,y-200*s-k);
    txLine(x,y,x+200*s+k,y+200*s+k);
    txLine(x,y,x-200*s-k,y+200*s+k);
    txLine(x,y,x+200*s+k,y-200*s-k);
 }


void drawHouse(int x, int y, double s, COLORREF color, COLORREF color1, COLORREF color2, int light_on, int h, int t, int l, COLORREF color3, COLORREF color4, int k);

//{
//! @brief  ���
//!         ������ ���.
//!
//! @param   x         X-���������� ������� �����
//! @param   y         Y-���������� ������� �����
//! @param   s         �������� �������
//! @param   color     ���� �����
//! @param   color1    ���� ���� ����
//! @param   color2    ���� ���� ����, ����� ����� � ����� �����
//! @param   light_on  �������� ����� ����� � ����: ��� �������� 1 - color3, 0 - color4
//! @param   h         ������� ������ �����
//! @param   t         �������� ������ ����
//!                    <b>(����� �� �����)</b>
//!                    <b>(�� ���������� �����)</b>
//! @param   l         �������� ��������� �����
//! @param   color3    ���� ����� � ���� ��� �������� light_on 1
//! @param   color4    ���� ����� � ���� ��� �������� light_on 0
//! @param   k         �������� ������� �����: �.�. ����������� ������ ����� ����� �� X-���
//!                    <b>(��� ������������� �������� ��������� - ������, ��� ������������� - �����)</b>
//!
//! @warning            <b>������� ������������ �������� ���������� l (�������� ��������� �����) � �������� 0 <= l <= 100.</b>
//!
//! @usage @code
//!         drawHouse(100, 600, 0.5, (RGB (178, 34, 34)), (RGB (140, 80, 50)), (TX_BLACK), 1, 10, 20, 40, (TX_YELLOW), (TX_BLUE), -50);
//! @endcode
//}

void drawHouse(int x, int y, double s, COLORREF color, COLORREF color1, COLORREF color2, int light_on, int h, int t, int l, COLORREF color3, COLORREF color4, int k)
{

    txSetColor(color);
    txSetFillColor(color);
    POINT roof[3] = {{x-k,y-325*s-h}, {x-150*s-t, y-125*s}, {x+150*s+t,  y-125*s}};
    txPolygon (roof, 3);
    txSetColor(color1);
    txSetFillColor(color1);
    POINT house[4] = {{x-150*s-t,y-125*s}, {x-150*s-t, y+225*s}, {x+150*s+t, y+225*s}, {x+150*s+t, y-125*s}};
    txPolygon (house, 4);
    if(light_on)
        txSetFillColor(color3);
    else
        txSetFillColor(color4);
    txRectangle(x-120*s-t,y-75*s,x-20*s+t,y+75*s);
    txSetColor(TX_BLACK, 4);
    txSetFillColor(TX_BLACK);
    txLine(x-70*s,y-75*s,x-70*s,y+75*s);
    txLine(x-120*s-t,y-25*s,x-20*s+t,y-25*s);

    if(light_on)
        txSetFillColor(color3);
    else
        txSetFillColor(color4);

    txRectangle(x+10*s+t,y-25*s,x+110*s+t,y+225*s);

    txSetColor(TX_BLACK, 4);
    txSetFillColor(TX_BLACK);
    txRectangle(x+10*s+t+l,y-25*s,x+110*s+t,y+225*s);
    txSetColor(color2);
    txSetFillColor(color2);
    //txCircle(x+25*s+t+l,y+100*s,10*s);

}


void drawKrone(int x, int y, double s, COLORREF color, COLORREF color1,int t, int p);

//{
//! @brief  �������
//!         ������ 7-�������� �����-�������.
//!
//! @param   x         X-���������� ������� �����
//! @param   y         Y-���������� ������� �����
//! @param   s         �������� �������
//! @param   color     ���� �������
//! @param   color1    ���� ����������������� ��������������� �� �������
//! @param   t         �������� ������ ������� ������� ������� �������
//! @param   p         �������� ������ �������� ������
//!
//! @usage @code
//!         drawKrone(200, 300, 2, (RGB (255, 128, 25)), (RGB (204, 20, 102)), 100, 40);
//! @endcode
//}

void drawKrone(int x, int y, double s, COLORREF color, COLORREF color1, int t, int p)
{
    txSetColor(color);
    txSetFillColor(color);
    POINT king[7] = {{x-20*s, y}, {x+20*s, y}, {x+40*s+t, y-75*s}, {x+20*s, y-25*s}, {x, y-75*s-p*s}, {x-20*s, y-25*s}, {x-40*s-t, y-75*s}};
    txPolygon (king, 7);
    txSetColor(color1);
    txSetFillColor(color1);
    POINT diamond[4] = {{x, y-60*s-p*s}, {x+10*s, y-20*s}, {x, y-5*s}, {x-10*s, y-20*s}};
    txPolygon (diamond, 4);

}
