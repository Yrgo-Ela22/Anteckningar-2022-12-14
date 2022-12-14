# Anteckningar 2022-12-14
Drivrutiner för seriell överföring samt temperaturmätning med temperatursensor TMP36.

Filer "serial.h" samt "serial.c" innehåller drivrutiner för seriell överföring med USART.

Filen "tmp36.h" innehåller drivrutiner för temperatursensor TMP36.

I filen "main.c" initierar systemet för temperaturmätning med temperatursensor TMP36, ansluten till
analog pin A0 (PORTC0), vilket sker kontinuerligt var 10:e sekund.