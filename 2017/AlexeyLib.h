//=================================================================================================================
//      [Help AlexeyLib.h]
//{
//=================================================================================================================
///
/// @file    AlexeyLib.h
/// @brief   ���������� ��������� ������� 8"�" (Alexey Library, AlexeyLib).
/// @warning ��� ����� � �������� ����, ��� scale=1!
//           $Copyright: (C) Niklaev Alexey ( �������� ������� ) $
//-----------------------------------------------------------------------------------------------------------------
/// @defgroup �����
/// @defgroup �����_��������
/// @defgroup ������
/// @defgroup ������
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    ��������� ����
//=================================================================================================================
/// @{
//{------------------------------------------------------------------------------------------------------------------
/// @ingroup �����
/// @brief ������ �����
///
//! @param   x    x-����� ���������� ������ ����� ����� ��������, �������� � ��������� �����, �� ��� ������� � 75.
//! @param   y    y-�������� ������ �����, �������� ������ ��������, �������� � ��������� �����.
//! @param   scale    scale-���������� ������� ����� � �� ������������.
//! @param   color    color-���� ������� ��������, �������� � ��������� �����.
//! @param   qcolor    qcolor-���� ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   fcolor    fcolor-���� ������� �����, �������� ������ ��������, �������� � ��������� �����.
//! @param   hcolor    hcolor-���� �����, �������� ������ ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   ccolor    ccolor-���� ������� "�����", ����������� ����� ��������, �������� � ��������� �����.
//! @param   e    e-�������� ������� ������� "�����", ����������� ����� ��������, �������� � ��������� ����� � 20.
//! @param   z    z-�������� ������� ������� �����, �������� ������ ��������, �������� � ��������� ����� � 20.
//! @param   r    r-�������� ������� �����, �������� ������ ��������, �������� � ��������� ����� � 50.
//! @param   a    a-�������� [�������� �������� "�����", ����������� ����� ��������, �������� � ��������� ����� � 100] � y.
//! @param   n    n-�������� [�������� {����� �������� ������ ����� ��������, �������� � ��������� ����� � 140} � a] � y.
/// @warning ( e-n-��� scale=1)
/// @usage @code
///          drawShlapia(175,200,1, TX_GREEN, TX_LIGHTCYAN, TX_BLUE, TX_BLUE, TX_MAGENTA, 0, 0, 0, 0, 0);
/// ���
///          drawShlapia(275,100,0.5, TX_YELLOW, TX_YELLOW, TX_WHITE, TX_BLUE, TX_BLACK, 4, -10, 20, 20, 38);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawShlapia (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n);

void drawShlapia (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n)
{
//x0=175,y0=200
    txSetColor (color, 8);
    txSetFillColor (qcolor);
    POINT shlapia[5] = {{x - 75 * scale, y + (100 + a)* scale}, {x + 125 * scale, y + (100 + a)* scale}, {x + 125 * scale, y - (100 + a)* scale}, {x + 25 * scale, y - (140 + a + n)* scale}, {x - 75 * scale, y - (100 + a)* scale}};
    txPolygon (shlapia, 5);

    txSetFillColor (TX_LIGHTBLUE);

    txSetColor (fcolor, (20 + z) *scale);
    txSetFillColor (hcolor);
    txCircle (x + 25 * scale, y, (50 + r) *scale);

    txSetColor (ccolor, (20 + e) *scale);
    txSetFillColor (TX_LIGHTBLUE);
    txLine (x - 150 * scale, y + (100 + a) *scale, x + 200 * scale, y + (100 + a) *scale);
}

//{----------------------------------------------------------------------------------------------------------------
/// @ingroup �����
/// @brief ������ �����
///
//! @param   x    x-����� ���������� ������ ����� ����� ��������, �������� � ��������� �����, �� ��� ������� � 75.
//! @param   y    y-�������� ������ �����, �������� ������ ��������, �������� � ��������� �����.
//! @param   scale    scale-���������� ������� ����� � �� ������������.
//! @param   color    color-���� ������� ��������, �������� � ��������� �����.
//! @param   qcolor    qcolor-��������� (�����. era) ���� ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   fcolor    fcolor-���� ������� �����, �������� ������ ��������, �������� � ��������� �����.
//! @param   hcolor    hcolor-���� �����, �������� ������ ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   ccolor    ccolor-���� ������� "�����", ����������� ����� ��������, �������� � ��������� �����.
//! @param   eracolor    eracolor-��������� (�����. era) ���� ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   teracolor    teracolr-��������� (�����. era) ���� ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   e    e-�������� ������� ������� "�����", ����������� ����� ��������, �������� � ��������� ����� � 20.
//! @param   z    z-�������� ������� ������� �����, �������� ������ ��������, �������� � ��������� ����� � 20.
//! @param   r    r-�������� ������� �����, �������� ������ ��������, �������� � ��������� ����� � 50.
//! @param   a    a-�������� [�������� �������� "�����", ����������� ����� ��������, �������� � ��������� ����� � 100] � y.
//! @param   n    n-�������� [�������� {����� �������� ������ ����� ��������, �������� � ��������� ����� � 140} � a] � y.
/// @param   era    era-��������, ���������� �� �������/��������� "�����", ����������� ����� ��������, �������� � ��������� ����� ( ��� era=0, ����� ��������, � ��� ������ ��������-��� ).
/// ����� �� ������� ��������� ������� ���� ��������, �������� � ��������� ����� ( ��� ������� ) ( era<200-qcolor; 200<era<350-eracolor, era=/>350-teracolor).
/// @warning ( e-n-��� scale=1)
/// @note ������� ������� �� �����������-��������� ��������.
/// @usage @code
///          drawShlapia2(175,200,1, TX_GREEN, TX_LIGHTCYAN, TX_BLUE, TX_BLUE, TX_MAGENTA, TX_BLACK, TX_WHITE, 5, -14, 22, 18, 40, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------

void drawShlapia2 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, COLORREF eracolor, COLORREF teracolor, int e, int z, int r, int a, int n, int era);

void drawShlapia2 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, COLORREF eracolor, COLORREF teracolor, int e, int z, int r, int a, int n, int era)
{
//x0=175,y0=200
    txSetColor (color, 8);

    if (era < 200)
        txSetFillColor (qcolor);
    else
        {
        if (era < 350)
            txSetFillColor (eracolor);
        else
            txSetFillColor (teracolor);
        }

    POINT shlapia[5] = {{x - 75 * scale, y + (100 + a)* scale}, {x + 125 * scale, y + (100 + a)* scale}, {x + 125 * scale, y - (100 + a)* scale}, {x + 25 * scale, y - (140 + a + n)* scale}, {x - 75 * scale, y - (100 + a)* scale}};
    txPolygon (shlapia, 5);

    txSetFillColor (TX_LIGHTBLUE);

    txSetColor (fcolor, (20 + z) *scale);
    txSetFillColor (hcolor);
    txCircle (x + 25 * scale, y, (50 + r) *scale);

    if (era == 0)
        {
        txSetColor (ccolor, (20 + e) *scale);
        txSetFillColor (TX_LIGHTBLUE);
        txLine (x - 150 * scale, y + (100 + a) *scale, x + 200 * scale, y + (100 + a) *scale);
        }
    else
        txSleep (10);
}

//{----------------------------------------------------------------------------------------------------------------
/// @ingroup �����
/// @brief ������ �����
///
//! @param   x    x-����� ���������� ������ ����� ����� ��������, �������� � ��������� �����, �� ��� ������� � 75.
//! @param   y    y-�������� ������ �����, �������� ������ ��������, �������� � ��������� �����.
//! @param   scale    scale-���������� ������� ����� � �� ������������.
//! @param   color    color-���� ������� ��������, �������� � ��������� �����.
//! @param   qcolor    qcolor-��������� (�����. era) ���� ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   fcolor    fcolor-���� ������� �����, �������� ������ ��������, �������� � ��������� �����.
//! @param   hcolor    hcolor-���� �����, �������� ������ ��������, �������� � ��������� ����� ( ��� ������� ).
//! @param   ccolor    ccolor-���� ������� "�����", ����������� ����� ��������, �������� � ��������� �����.
//! @param   e    e-�������� ������� ������� "�����", ����������� ����� ��������, �������� � ��������� ����� � 20.
//! @param   z    z-�������� ������� ������� �����, �������� ������ ��������, �������� � ��������� ����� � 20.
//! @param   r    r-�������� ������� �����, �������� ������ ��������, �������� � ��������� ����� � 50.
//! @param   a    a-�������� [�������� �������� "�����", ����������� ����� ��������, �������� � ��������� ����� � 100] � y.
//! @param   n    n-�������� [�������� {����� �������� ������ ����� ��������, �������� � ��������� ����� � 140} � a] � y.
/// @param   era    era-��������, ���������� �� �������/��������� "�����", ����������� ����� ��������, �������� � ��������� ����� ( ��� era=0, ����� ��������, � ��� ������ ��������-��� ).
///����� �� ������� ��������� ������� ���� ��������, �������� � ��������� ����� ( ��� ������� ) ( era<200-qcolor; 200<era<350-eracolor, era=/>350-teracolor).
/// @warning ( e-n-��� scale=1)
/// @note ������� ������� �� �����������-������� ���������� ���������.
/// @usage @code
///          drawShlapia3(175,200,1, TX_GREEN, TX_LIGHTCYAN, TX_BLUE, TX_BLUE, TX_MAGENTA, 5, -14, 22, 18, 40, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawShlapia3 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n, int era);
void drawShlapia3 (int x, int y, double scale, COLORREF color, COLORREF hcolor, COLORREF fcolor, COLORREF ccolor, COLORREF qcolor, int e, int z, int r, int a, int n, int era)
{
//x0=175,y0=200
    txSetColor (color, 8);
    txSetFillColor (qcolor);
    POINT shlapia[5] = {{x - 75 * scale, y + (100 + a)* scale}, {x + 125 * scale, y + (100 + a)* scale}, {x + 125 * scale, y - (100 + a)* scale}, {x + 25 * scale, y - (140 + a + n)* scale}, {x - 75 * scale, y - (100 + a)* scale}};
    txPolygon (shlapia, 5);

    txSetFillColor (TX_LIGHTBLUE);

    txSetColor (fcolor, (20 + z) *scale);
    txSetFillColor (hcolor);
    txCircle (x + 25 * scale, y, (50 + r) *scale);

    if (era == 0)
        {
        txSetColor (ccolor, (20 + e) *scale);
        txSetFillColor (TX_LIGHTBLUE);
        txLine (x - 150 * scale, y + (100 + a) *scale, x + 200 * scale, y + (100 + a) *scale);
        }
    else
        txSleep (10);
}
//! @}
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    ��������� �����
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup ������
/// @brief ������ ������
///
//! @param   x    x-�������� ������ ����� ( ������ ).
//! @param   y    y-�������� ������ ����� ( ������ ).
//! @param   scale    scale-���������� ������� ������ � ��� ������������.
//! @param   color    color-���� ����� ( ������ ) � ��� ����� ( ��������� ).
//! @param   colorb    colorb-������� �����, �������� ������ ����� ( ������ ).
//! @param   colorn    colorn-���� �����, �������� ������ ����� ( ������ ) ( ��� ������� ).
//! @param   colorv    colorv-���� ������� �����, �������� ������ �����, �������� ������ ����� ( ������ ).
//! @param   colorc    colorc-���� �����, �������� ������ �����, �������� ������ ����� ( ������ ) ( ��� ������� ).
//! @param   colora    colorp-���� �����, ������ �������� ����� ���� ( ������ ) ( ��� ������� ).
//! @param   colora    colorp-���� ������� ����� ������, �������� ����� ���� ( ������ ).
//! @param   e    e-�������� �������� ������� ������� ���� ������ � 50.
//! @param   t    t-������� ������� �����, ������ �������� ����� ���� ( ������ ) � scale.
//! @param   c    c-������� ������� �����, �������� ������ ����� ( ������ ) � scale.
//! @param   f    f-������� ������� �����, �������� ������ �����, �������� ������ ����� ( ������ ).
//! @param   s    s-������� ������� ����� ( ������ ).
//! @param   ra    ra-��������, ������� ������ ���� ����� ( ������ ) � ����� �� �������, � ���� ����� ������ �������� ����� ���� ( ������ ) - �� ������, ��� ��� �������� ������ 15.
/// @warning (e, s, f ��� scale=1)
/// @usage @code
///          drawColnce(500,500,1, TX_YELLOW, TX_BROWN, TX_MAGENTA, TX_LIGHTCYAN, TX_BLACK, TX_BLUE, TX_BLUE, 0, 0, 0, 1, 1, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawColnce (int x, int y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra);

void drawColnce (int x, int y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra)
{
    txSetColor (color , 10);
//x0= 500,y0= 500

    if (ra == 15)
        {
        txSetColor (TX_BLACK, s);
        txSetFillColor (TX_BLACK);
        }
    else
        {
        txSetColor (colorp, s);
        txSetFillColor (colora);
        }

    txCircle (x, y, (125 + e) *t * scale);

    if (ra == 15)
        {
        txSetColor (TX_RED, 10);
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetColor (color, 10);
        txSetFillColor (color);
        }

    txCircle (x, y, 50 * scale);

    txLine (x + (50 + e) *scale, y + (50 + e) *scale, x + (75 + e) *scale, y + (75 + e) *scale);
    txLine (x - (50 + e) *scale, y - (50 + e) *scale, x - (75 + e) *scale, y - (75 + e) *scale);
    txLine (x - (50 + e) *scale, y + (50 + e) *scale, x - (75 + e) *scale, y + (75 + e) *scale);
    txLine (x + (50 + e) *scale, y - (50 + e) *scale, x + (75 + e) *scale, y - (75 + e) *scale);
    txLine (x + (75 + e) *scale, y, x + (100 + e) *scale, y);
    txLine (x, y - (75 + e) *scale, x, y - (100 + e) *scale);
    txLine (x, y + (100 + e) *scale, x, y + (75 + e) *scale);
    txLine (x - (75 + e) *scale, y, x - (100 + e) *scale, y);

    txSetColor (colorb, 10);
    txSetFillColor (colorn);
    txCircle (x, y, c * scale);

    txSetColor (colorv, f);
    txSetFillColor (colorc);
    txCircle (x - (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);
    txCircle (x + (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);

}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup ������
/// @brief ������ ������
///
//! @param   x    x-�������� ������ ����� ( ������ ).
//! @param   y    y-�������� ������ ����� ( ������ ).
//! @param   scale    scale-���������� ������� ������ � ��� ������������.
//! @param   color    color-���� ����� ( ������ ) � ��� ����� ( ��������� ).
//! @param   colorb    colorb-������� �����, �������� ������ ����� ( ������ ).
//! @param   colorn    colorn-���� �����, �������� ������ ����� ( ������ ) ( ��� ������� ).
//! @param   colorv    colorv-���� ������� �����, �������� ������ �����, �������� ������ ����� ( ������ ).
//! @param   colorc    colorc-���� �����, �������� ������ �����, �������� ������ ����� ( ������ ) ( ��� ������� ).
//! @param   colora    colora-���� ����� ������, �������� ����� ���� ( ������ ) ( ��� ������� ).
//! @param   colorp    colorp-���� ������� �����, ������ �������� ����� ���� ( ������ ).
//! @param   e    e-�������� �������� ������� ������� ���� ������ � 50.
//! @param   t    t-������� ������� �����, ������ �������� ����� ���� ( ������ ) � scale.
//! @param   c    c-������� ������� �����, �������� ������ ����� ( ������ ) � scale.
//! @param   f    f-������� ������� �����, �������� ������ �����, �������� ������ ����� ( ������ ).
//! @param   s    s-������� ������� �����, ������ �������� ����� ���� ( ������ ) ( ������ ).
//! @param   ra    ra-��������, ������� ������ ���� ����� ( ������ ) � ����� �� �������, � ���� ����� ������ �������� ����� ���� ( ������ ) - �� ������, ��� ����� �������� ������ 0.
/// @warning (e, s, f ��� scale=1)
/// @usage @code
///          drawColnce2(300,400,0.5, TX_YELLOW, TX_BROWN, TX_MAGENTA, TX_LIGHTCYAN, TX_BLACK, TX_BLUE, TX_BLUE, 1, 1, 50, 1, 1, 0);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawColnce2 (double x, double y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra);

void drawColnce2 (double x, double y, double scale, COLORREF color, COLORREF colorb, COLORREF colorn, COLORREF colorv, COLORREF colorc, COLORREF colora, COLORREF colorp, double e, double t, int c, double f, int s, int ra)
{
    txSetColor (color , 10);
//x0= 500,y0= 500

    if (ra == 00)
        {
        txSetColor (TX_BLACK, s);
        txSetFillColor (TX_BLACK);
        }
    else
        {
        txSetColor (colorp, s);
        txSetFillColor (colora);
        }

    txCircle (x, y, (125 + e) *t * scale);

    if (ra == 0)
        {
        txSetColor (TX_RED, 10);
        txSetFillColor (TX_RED);
        }
    else
        {
        txSetColor (color, 10);
        txSetFillColor (color);
        }

    txCircle (x, y, 50 * scale);

    txLine (x + (50 + e) *scale, y + (50 + e) *scale, x + (75 + e) *scale, y + (75 + e) *scale);
    txLine (x - (50 + e) *scale, y - (50 + e) *scale, x - (75 + e) *scale, y - (75 + e) *scale);
    txLine (x - (50 + e) *scale, y + (50 + e) *scale, x - (75 + e) *scale, y + (75 + e) *scale);
    txLine (x + (50 + e) *scale, y - (50 + e) *scale, x + (75 + e) *scale, y - (75 + e) *scale);
    txLine (x + (75 + e) *scale, y, x + (100 + e) *scale, y);
    txLine (x, y - (75 + e) *scale, x, y - (100 + e) *scale);
    txLine (x, y + (100 + e) *scale, x, y + (75 + e) *scale);
    txLine (x - (75 + e) *scale, y, x - (100 + e) *scale, y);

    txSetColor (colorb, 10);
    txSetFillColor (colorn);
    txCircle (x, y, c * scale);

    txSetColor (colorv, f);
    txSetFillColor (colorc);
    txCircle (x - (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);
    txCircle (x + (c / 2) *scale, y - (c / 4) *scale, (c / 8) *scale);

}
//! @}
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    ��������� �����/���������.
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup �����_��������
/// @brief ������ �����
///
//! @param   x    x-�������� ������ ����� ( ����� ).
//! @param   y    y-�������� ������ ����� ( ����� ).
//! @param   scale    scale-���������� ������� �����.
//! @param   colore    colore-���� ����� ( ����� ) ( ��� ������� ).
//! @param   v    v-�������� ������� ����� ( ����� ) � 90, ��� scale=1.
/// @usage @code
///          drawOzero(500,500,1, TX_BLUE, 30);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawOzero (int x, int y, double scale, COLORREF colore, int v);

void drawOzero (int x, int y, double scale, COLORREF colore, int v)
{
    txSetColor (TX_BROWN, 10);
    txSetFillColor (colore);
    txCircle (x, y, (90 + v) *scale);
}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup �����_��������
/// @brief ������ ��������
///
//! @param   x    x-�������� ������� ����� ��������� ( ������, ������������ 4 �������������� ).
//! @param   y    y-����� �������� ����� ����� ����� ��������� ( ������, ������������ 4 �������������� ) � 75.
//! @param   scale    scale-���������� ������� ��������� ����� ��������� ( ������, ������������ 4 �������������� ).
//! @param   color    color-���� ��������� ( ������, ������������ 4 �������������� ) ( ��������� ).
//! @param   u    u-�������� y � ����� �������� ������� ����� ��������� ( ������, ������������ 4 �������������� ) � 99, ��� scale=1. u>=0
//! @param   h    h-�������� x � ����� �������� ����� ����� ����� ��������� ( ������, ������������ 4 �������������� ) � 50, ��� scale=1. h>=0
//! @param   m    m-�������� �������� ����� ������ ����� ��������� ( ������, ������������ 4 �������������� ) � ����� x � 50, ��� scale=1. m>=0
/// @usage @code
///          drawKorablik (300, 300, 1, TX_BROWN, 20, 10, 30);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawKorablik (int x, int y, double scale, COLORREF color, int u, int h, int m);

void drawKorablik (int x, int y, double scale, COLORREF color, int u, int h, int m)
{
    txSetColor (color , 10);
    txSetFillColor (color);
    POINT v1[3] = {{x + (50 + m)* scale, y - 75 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v1, 3);
    POINT v2[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v2, 3);
    POINT v3[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x - (50 + h)* scale, y - 75 * scale}};
    txPolygon (v3, 3);
    POINT v4[3] = {{x + 25 * scale, y - 75 * scale}, {x - 25 * scale, y - 75 * scale}, {x, y - (99 + u)* scale}};
    txPolygon (v4, 3);
}

//{----------------------------------------------------------------------------------------------------------------
/// @ingroup �����_��������
/// @brief ������ �����
///
//! @param   x    x-�������� ������ ����� ( ����� ).
//! @param   y    y-�������� ������ ����� ( ����� ).
//! @param   scale    scale-���������� ������� ����� � ���������.
//! @param   colore    colore-���� ����� ( ����� ) ( ��� ������� ).
//! @param   color    color-���� ��������� ( ������, ������������ 4 �������������� ) ( ��������� ).
//! @param   v    v-�������� y � ����� �������� ������� ����� ��������� ( ������, ������������ 4 �������������� ) � 99, ��� scale=1. u>=0
//! @param   u    u-�������� ������� ����� ( ����� ) � 90, ��� scale=1.
//! @param   h    h-�������� x � ����� �������� ����� ����� ����� ��������� ( ������, ������������ 4 �������������� ) � 50, ��� scale=1. h>=0
//! @param   m    m-�������� �������� ����� ������ ����� ��������� ( ������, ������������ 4 �������������� ) � ����� x � 50, ��� scale=1. m>=0
//! @param   a    a-�������� �������� ������� ����� ��������� ( ������, ������������ 4 �������������� ) � x, ��� scale=1.
//! @param   b    b-�������� [����� �������� ����� ����� ����� ��������� ( ������, ������������ 4 �������������� ) � 75] � y, ��� scale=1.
/// @usage @code
///          drawOzero_korablik(425,200,0.5, TX_YELLOW, TX_LIGHTGRAY, 50, 50, 75, 55, 30, 40) ;
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawOzero_korablik (int x, int y, double scale, COLORREF color, COLORREF colore, int v, int u, int h, int m, int a, int b);

void drawOzero_korablik (int x, int y, double scale, COLORREF color, COLORREF colore, int v, int u, int h, int m, int a, int b)
{
    drawOzero (x, y, scale, colore, u);
    drawKorablik (x + a, y + b, scale, color, v, h, m);
//x0=525 ,y0=100 ���������� ����
//ozero_korablik
}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup �����_��������
/// @brief ������ ��������
///
//! @param   x    x-�������� ������� ����� ��������� ( ������, ������������ 4 �������������� ) ( �������� �������).
//! @param   y    y-����� �������� ����� ����� ����� ��������� ( ������, ������������ 4 �������������� ) � 75 ( �������� ������� ).
//! @param   scale    scale-���������� ������� ��������� ����� ��������� ( ������, ������������ 4 �������������� ).
//! @param   color    color-���� ��������� ( ������, ������������ 4 �������������� ) ( ��������� ).
//! @param   u    u-�������� y � ����� �������� ������� ����� ��������� ( ������, ������������ 4 �������������� ) � 99, ��� scale=1. u>=0
//! @param   h    h-�������� x � ����� �������� ����� ����� ����� ��������� ( ������, ������������ 4 �������������� ) � 50, ��� scale=1. h>=0
//! @param   m    m-�������� �������� ����� ������ ����� ��������� ( ������, ������������ 4 �������������� ) � ����� x � 50, ��� scale=1. m>=0
/// @usage @code
///          drawKorablik2 (300.5, 456.56, 1, TX_BROWN, 10, 30, 20);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawKorablik2 (double x, double y, double scale, COLORREF color, int u, int h, int m);

void drawKorablik2 (double x, double y, double scale, COLORREF color, int u, int h, int m)
{
    txSetColor (color , 10);
    txSetFillColor (color);
    POINT v1[3] = {{x + (50 + m)* scale, y - 75 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v1, 3);
    POINT v2[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x + 25 * scale, y - 50 * scale}};
    txPolygon (v2, 3);
    POINT v3[3] = {{x - 25 * scale, y - 50 * scale}, {x, y - 75 * scale}, {x - (50 + h)* scale, y - 75 * scale}};
    txPolygon (v3, 3);
    POINT v4[3] = {{x + 25 * scale, y - 75 * scale}, {x - 25 * scale, y - 75 * scale}, {x, y - (99 + u)* scale}};
    txPolygon (v4, 3);
}
//! @}
//}
//=================================================================================================================

//=================================================================================================================
//{
//! @name    ��������� �������/�������.
//=================================================================================================================
//! @{
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup ������
/// @brief ������ �������
///
//! @param   x    x-�������� ������ �����, �������� ������ �������� ( ������� ).
//! @param   y    y-�������� �������� ������� ������ ���� �������� ( ������� ) � 100.
//! @param   scale    scale-���������� ������� ������� � �� ������������.
//! @param   color    color-��������� ���� �������� ( ������� ) ( ��������� ) ( �����. t ).
//! @param   colort    colort-���� �����, ������ �������� ����� ����, ������� ������ �������� ( ������� ) ( ��� ������� ) ( �� ��� ).
//! @param   colorte    colorte-���� ������� �����, ������ �������� ����� ����, ������� ������ ��������( �� ��� ).
//! @param   colorn    colorn-��������� ���� �������� ( ������� ) ( ��������� ) ( �����. t ).
//! @param   l    l-������ �����, ������ �������� ����� ����, ������� ������ �������� ( ������� ) ( �� ��� ), ��� scale=1.
//! @param   q    q-�������� �������� �����, ���������� ������ ������ ( ��� {q, p, z}=0 ) ����� ( �� ����, ������ �� �������� �����), ������ ������ ������� ������� ����� �����, �������� ������ �������� ( ������� ) � [����� x � 5] , ��� scale=1.
//! @param   p    p-�������� �������� �����, ���������� ������ ������� ( ��� {q, p, z}=0 ) ����� ( �� ����, ������ �� �������� �����), ������ ������ ������� ������� ����� �����, �������� ������ �������� ( ������� ) � x , ��� scale=1.
//! @param   g    g-������� ������� �����, ������ �������� ����� ����, ������� ������ �������� ( ������� ) ( �� ��� ).
//! @param   w    w-�������� y � [����� �������� ������ ����� �������� ( ������� ) � {����� 50 � z}] , ��� scale=1.
//! @param   z    z-�������� y � �������� ������� ������ ����� �������� ( ������� ), ��� scale=1.
//! @param   t    t-��������, ��� �������� �������� ������ 1000, ���� �������� ( ������� ) ����������� colorn, � ��� ������ �������� - color.
/// @note x0=325,y0=500
/// @warning �����:
/// @warning -6<q<6;
/// @warning -6<p<6.
/// @usage @code
///          drawChasovnia(425,400,0.5, TX_BROWN, TX_YELLOW, TX_BLACK, TX_GREEN, 30, 5, -3, 2, 10, 10, 2);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawChasovnia (int x, int y, double scale, COLORREF color, COLORREF colort, COLORREF colorte, COLORREF colorn, int l, int q, int p, int g, int w, int z, int t);

void drawChasovnia (int x, int y, double scale, COLORREF color, COLORREF colort, COLORREF colorte, COLORREF colorn, int l, int q, int p, int g, int w, int z, int t)
{


    if (t < 1000)
        {
        txSetFillColor (colorn);
        txSetColor (colorn , 10);
        }
    else
        {
        txSetFillColor (color);
        txSetColor (color , 10);
        }

    POINT dom[5] = {{x - 25 * scale, y - z * scale}, {x - 25 * scale, y + 100 * scale}, {x + 25 * scale, y + 100 * scale}, {x + 25 * scale, y - z * scale}, {x, y - (50 + w + z)* scale}};
    txPolygon (dom, 5);

    txSetColor (colorte , 1 * g);
    txSetFillColor (colort);
    txCircle (x, y - z * scale, l * scale);

    txSetFillColor (TX_LIGHTCYAN);
    txCircle (x, y - z * scale, 20 * scale);
    txSetColor (TX_BLACK, 5 * scale);
    txLine (x, y - z * scale, x + p * scale, y - (10 + z) *scale);
    txLine (x, y - z * scale, x + (5 + q) *scale, y + (5 - q - z) *scale);

}
//{----------------------------------------------------------------------------------------------------------------
/// @ingroup ������
/// @brief ������ �������
///
//! @param   x    x-�������� ������� ����� ��������.
//! @param   y    y-�������� ������� ����� ��������.
//! @param   scale    scale-���������� ������� ������� � ��� ������������.
//! @param   color    color-���� �������� ( ��������� ).
//! @param   colori    colori-���� �����, ������ �������� ����� ���� � �������, ������� �������� ����� � ����������� x,y, ��� s<50.
//! @param   colora    colora-���� ����� ( ����� ����������� ����� � ��������� ).
//! @param   coloru   coloru-���� ������� ����� ( ��� ������� ).
//! @param   e    e-������ �����, ������ �������� ����� ���� � �������, ������� �������� ����� � ����������� x,y, ��� s<50, ��� scale=1.
//! @param   d    d-������� ������� ������� �����, ��� scale=1.
//! @param   w    w-�������� x � [����� �������� �����, ���������� ������� � �������� ������ ������ ���� � 75], ��� scale=1.
//! @param   j    j-�������� ������� �����, ������ �������� ����� ���� � �������, ������� �������� ����� � ����������� x,y, ��� s<50 � 50, ��� scale=1.
//! @param   s    s-�������� ������� �����, ������� ����� ������ ����� � �������, ������� �������� ����� � ����������� x,y, ��� s<50 � j, ��� scale=1.
//! @param   f    f-�������� ��� ������ �������� ��������, ��� ��������� ������ ������� ����� �������� ����� x � f, � ��� �������� - ��������.
/// @usage @code
///          drawKolpak(250,400,0.5, TX_GREEN, TX_LIGHTCYAN, TX_BLACK, TX_WHITE, 20, 5, 10, -30, 60, 8);
//! @endcode
//}----------------------------------------------------------------------------------------------------------------
void drawKolpak (int x, int y, double scale, COLORREF color, COLORREF colori, COLORREF colora,  COLORREF coloru, int e, int d, int w, int j, int s, int f);

void drawKolpak (int x, int y, double scale, COLORREF color, COLORREF colori, COLORREF colora, COLORREF coloru, int e, int d, int w, int j, int s, int f)
{
//x0=150 ,y0=500
//s>j
    //kolpak
    txSetColor (TX_BLACK, d * scale);
    txSetFillColor (coloru);

    if (f % 2 == 1)
        txCircle (x - f, y + 100 * scale, e * scale);
    else
        txCircle (x + f, y + 100 * scale, e * scale);

    txSetColor (color, 10 * scale);
    txSetFillColor (color);

    if (f % 2 == 1)
        {
        POINT kolpak[3] = {{x, y}, {x - (50 + 2 * f)* scale, y + 100 * scale}, {x + (50 - 2 * f)* scale, y + 100 * scale}};
        txPolygon (kolpak, 3);
        }
    else
        {
        POINT kolpak[3] = {{x, y}, {x - (50 - 2 * f)* scale, y + 100 * scale}, {x + (50 + 2 * f)* scale, y + 100 * scale}};
        txPolygon (kolpak, 3);
        }

    txSetColor (color, 10 * scale);
    txSetFillColor (colori);
    txCircle (x, y, (50 + j) *scale);
    txSetColor (colora, 10);
    txLine (x - (75 + w) *scale, y, x - (125 + w) *scale, y);
    txLine (x + (75 + w) *scale, y, x + (125 + w) *scale, y);
    txLine (x, y - (75 + w) *scale, x, y - (125 + w) *scale);
    txSetColor (color, d * scale);
    txSetFillColor (coloru);
    txCircle (x, y, (s + j) *scale);
}
//! @}
//}
//=================================================================================================================

