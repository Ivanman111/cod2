#include "TXLib.h"

int main()
    {
    txCreateWindow (800, 600);









while (1)
                  {

                  txTextOut (100, 100, "нажми M или мышкой в любом месте");

                  if (txGetAsyncKeyState ('M'))      txCircle (160, 160, 120);
                   if (txMouseButtons()==1)      txCircle (160, 160, 120);

                  txSleep (20);





                  if (txGetAsyncKeyState ('N'))      txSetFillColor (TX_BLUE);

                  txSleep (20);

                   }
                   }
