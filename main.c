/********************************************************************************
* main.c: Demonstration av temperatursensor TMP36 för mätning samt utskrift
*         av rumstemperaturen.
********************************************************************************/
#include "tmp36.h"

/********************************************************************************
* main: Ansluter temperatursensor TMP36 till analog pin A2. Rumstemperaturen
*       mäts och skrivs ut i ansluten seriell terminal var femte sekund.
********************************************************************************/
int main(void)
{
   struct tmp36 temp1;
   tmp36_init(&temp1, A2);

   while (1)
   {
      tmp36_print_temperature(&temp1);
      delay_ms(5000);
   }

   return 0;
}

