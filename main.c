/********************************************************************************
* main.c: Demonstration av temperatursensor TMP36 f�r m�tning samt utskrift
*         av rumstemperaturen.
********************************************************************************/
#include "tmp36.h"

/********************************************************************************
* main: Ansluter temperatursensor TMP36 till analog pin A2. Rumstemperaturen
*       m�ts och skrivs ut i ansluten seriell terminal var 10:e sekund.
********************************************************************************/
int main(void)
{
   struct tmp36 temp1;
   tmp36_init(&temp1, A2);

   while (1)
   {
      tmp36_print_temperature(&temp1);
      delay_ms(10000);
   }

   return 0;
}

