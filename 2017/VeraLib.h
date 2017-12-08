//=================================================================================================================
//           [These sections are for folding control  in Code::Blocks]
//{          [Best viewed with "Fold all on file open" option enabled]             [best screen width is 115 chars]
//=================================================================================================================
//! @file    VeraLib.h
//! @brief   ���������� �����-�� ���������� (The Dumb Artist Library, TX Library, TXLib).
//-----------------------------------------------------------------------------------------------------------------
//}
//=================================================================================================================


//-----------------------------------------------------------------------------------------------------------------
//{
//! @brief ������ �������
//!
//! @param   x        X-����������
//! @param   y        Y-����������
//! @param   paruse   �������� ������
//! @param   z        �������� �����
//! @param   c        �������� ������
//! @param   f        �������� �����
//! @param   j        �������� �����
//! @param   scale    �������� �������
//! @param   color    �������� �����
//! @warning  �� ���� ������ �������� j ������� ������� ����� �� ��������� �����. �� ���� ������ ������ �������� ��������� ����� � ������ ����� ����� ������������������ ��������.
//!
//! @usage @code
//!
//!@endcode
//}
void drawship(int x,int y,int paruse,int z,int c,int f,int j,double scale,COLORREF color);
//-----------------------------------------------------------------------------------------------------------------
void drawtree(   int ,int, int q, int w, int e,int a,int d,double scale, COLORREF color);
//{
//! @brief ������ ������
//!
//! @param   x        X-����������
//! @param   y        Y-����������
//! @param   scale    �������� �������
//! @param   d        �������� �����
//! @param   e        �������� ��������� �����
//! @param   w        �������� ��������� �����
//! @param   q        �������� ������� �����
//! @param   a        �������� �����
//! @param   color    �������� �����
//!
//!
//!@warning  �� ����� ������� �������� ������ ��������� ����� ������ ����� �� ������������ � ������������������.
//! @usage @code
//!
//!@endcode
//}
//-----------------------------------------------------------------------------------------------------------------
void drawsmile(  int ,int, double scale, COLORREF color,int oz,int ob,int br,int rt,int cg);
//{
//! @brief ������ ��������_���������
//!
//! @param   x        X-����������
//! @param   y        Y-����������
//! @param   scale    �������� �������
//! @param   oz       �������� �������
//! @param   ob       �������� ������
//! @param   br       �������� ������
//! @param   rt       �������� ���
//! @param   cg       �������� �����
//! @param   color    �������� �����
//!
//!@warning  �� ����� ������� �������� ������ ��������� ����� ��� ����� �� ������������ � ������������������.
//!
//! @usage @code
//!
//!@endcode
//}
//-----------------------------------------------------------------------------------------------------------------
void drawpyramid(int ,int, int s,int h,int u,int m,int k,double scale, COLORREF color);
//{
//! @brief ������ ���������
//!
//! @param   x        X-����������
//! @param   y        Y-����������
//! @param   scale    �������� �������
//! @param   s        �������� ������ �������
//! @param   h        �������� �������� �������
//! @param   u        �������� ����� ������
//! @param   m        �������� ������ �������
//! @param   k        �������� ����� �� �������� �������
//! @param   color    �������� �����
//!
//! @usage @code
//!
//!@endcode
//}
//-----------------------------------------------------------------------------------------------------------------
void drawhouse(  int ,int, int g,int r,int t,int n,int l,double scale, COLORREF color);
//{
//! @brief ������ �����
//!
//! @param   x        X-����������
//! @param   y        Y-����������
//! @param   scale    �������� �������
//! @param   g       ��������  ����
//! @param   r       ��������  �����
//! @param   t       ��������  �����
//! @param   n       ��������  �����
//! @param   l       ��������  �����
//! @param   color    �������� �����
//!
//! @usage @code
//!
//!@endcode
//}
//-----------------------------------------------------------------------------------------------------------------
//-----------------------------------------------------------------------------------------------------------------
void drawpyramid(int x,int y,int s,int h,int u,int m,int k,double scale,COLORREF color )
{

    if(scale < 1.0)
    {
        txSetColor(TX_BLACK);
        txLine(x,y,x,y-20);
    }
    txSetColor(TX_BLACK);
    txSetFillColor(RGB(255,228,15));
    POINT one[3] = {{x,y+s*scale},{x-90*scale+h*scale,y+100*scale},{x+60*scale+u*scale,y+100*scale}};
    txPolygon(one,3);

    txSetFillColor(color); ;
    POINT two[3] = {{x,y+s*scale},{x+75*scale+m*scale,y+70*scale},{x+60*scale+u*scale,y+100*scale}};
    txPolygon(two,3);

    if (k > 1)
    {
        txSetFillColor(TX_BLACK);
        txCircle(x,y+50*scale,20*scale);
    }

}
//-----------------------------------------------------------------------------------------------------------------
void drawship(int x,int y,int paruse,int z,int c,int f,int j,double scale,COLORREF color)
{

    if(f<1)
    {
        txSetFillColor(color);
        POINT Y [4] = {{x+50*scale,y-130*scale},{x-(65-50+paruse)*scale,y-70*scale},{x+47*scale,y},{x+40*scale,y-25*scale}};
        txPolygon(Y, 4);
        txSetColor(TX_BLACK,3);
        txLine(x+50*scale,y,x+50*scale,y-130*scale);
    }

    txSetColor(TX_BLACK,3);
    txLine(x,y,x,y-130*scale);

    txSetFillColor(RGB(178,137,166));
    txSetColor(RGB(178,137,166));

    POINT X [4] = {{x+50*scale,y+30*scale+z*scale},{x-50*scale,y+30*scale+z*scale},{x-75*scale+c*scale,y},{x+75*scale+c*scale,y}};
    txPolygon(X, 4);

    txSetFillColor(color);
    POINT Y [4] = {{x,y-130*scale},{x+(65+paruse)*scale,y-70*scale},{x-7*scale,y},{x+10*scale,y-25*scale}};
    txPolygon(Y, 4);

    if(j>1)
    {
        txSetColor(TX_BLACK);
        txSetFillColor(TX_BLACK);
        txEllipse(x-50*scale,y+20*scale,x+50*scale,y+30*scale);

    }

}
//-----------------------------------------------------------------------------------------------------------------
void drawtree(int x,int y,int q,int w,int e,int a,int d,double scale,COLORREF color)
{
    txSetFillColor(color);
    txSetColor(color);

    if(d > 1)
    {
        txSetFillColor(TX_RED);
    }

    txCircle(x,y,100*scale+q*scale);

    if (a > 1)
    {
        txSetFillColor(TX_YELLOW);
    }

    txCircle(x+120*scale,y+110*scale+e*scale,50*scale+w*scale);

    txSetColor(RGB(139,69,19),35*scale);
    txLine(x,y+100*scale,x,         y+320*scale);
    txLine(x,y+220*scale,x+90*scale,y+150*scale+e*scale);
}
//-----------------------------------------------------------------------------------------------------------------
void drawhouse(int x,int y,int g,int r,int t,int n,int l,double scale,COLORREF rcolor)
{
    txSetColor(TX_BLACK);
    if (n<4)
    {
        txSetFillColor(TX_PINK);
    }
    else
    {
        txSetFillColor(rcolor);
    }
    POINT A [3] = {{x,y},{x+50*scale,y+50*scale},{x-50*scale,y+50*scale}};
    txPolygon(A, 3);//�����
    if(l==5)
    {
        txSetFillColor(TX_BLACK);
    }
    else
    {
        txSetFillColor(RGB(205,154,149));
    }
    POINT B [4] = {{x+50*scale,y+50*scale},{x+50*scale,y+135*scale},{x-50*scale,y+135*scale},{x-50*scale,y+50*scale}};
    txPolygon(B, 4); //���

    POINT C [4] = {{x+16*scale,y+16*scale},{x+32*scale,y+32*scale},{x+32*scale,y+(2+r)*scale},{x+16*scale,y+(2+r)*scale}};
    txPolygon(C, 4); // �����

    if (t > 2)
    {
        txSetFillColor(TX_YELLOW);
    }
    else
    {
        txSetFillColor(RGB(194,222,242));
    }

    POINT D [4] = {{x-17*scale+g*scale,y+78*scale+g*scale},{x-17*scale+g*scale,y+111*scale+g*scale},{x+16*scale+g*scale,y+111*scale+g*scale},{x+16*scale+g*scale,y+78*scale+g*scale}};
    txPolygon(D, 4); // ����

}
//-----------------------------------------------------------------------------------------------------------------
void drawsmile(int x,int y,double scale,COLORREF color,int oz,int ob,int br,int rt,int cg)
//{
    txSetColor(TX_BLACK);
    txSetFillColor(TX_YELLOW);

    txCircle(x,y,110*scale);

    txSetColor(TX_BLACK,5*scale);

    txLine(x-50*scale,y+(50+rt)*scale,x+50*scale,y+(50+rt)*scale);

    txSetColor(TX_BLACK,1*scale);

    txSetFillColor(color);

    if(cg==5)
    {
        txSetFillColor(TX_GREEN);
    }
    else
    {
        txSetFillColor(TX_BLUE);
    }

    txCircle(x-45*scale,y-20*scale,(30+ob)*scale);
    txCircle(x+45*scale,y-20*scale,(30+ob)*scale);

    txSetFillColor(TX_BLACK);        //������
    txCircle(x-45*scale,y-20*scale,(5+oz)*scale);
    txCircle(x+45*scale,y-20*scale,(5+oz)*scale);

    txSetColor(TX_BLACK,3*scale);  //�����
    txLine(x-75*scale,y-(70-br)*scale,x-15*scale,y-(80-br)*scale);
    txLine(x+15*scale,y-(80-br)*scale,x+75*scale,y-(70-br)*scale);
}

