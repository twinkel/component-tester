/*
Mit dem Define SWUART_INVERT kann festgelegt werden, ob der Software-UART normal oder invertiert sendet.
In der normalen Betriebsart sendet der UART in der �blichen Logik (Low = 0; High = 1).
Das ist der Standardfall und dient zum Anschluss an einen anderen �C, einen USB=>Seriell-Wandler-Chip
oder an einen Pegelwandler wie den MAX232.

In der invertierten Betriebsart sendet der UART in umgekehrter Logik, also Hihg = 0 und Low = 1
Das entspricht der Logik der RS232-Schnittstelle von Standard-PCs.
In den meisten F�llen kann der TxD des Software-UART somit direkt mit dem RxD des PCs verbunden werden.
Laut Spezifikation ist das unzul�ssig, weil f�r eine RS232-Schnittstelle Pegel von -3V...3V undefiniert sind.
An den meisten PCs funktioniert es aber trotzdem ohne Probleme.
Das ist eine einfache, aber etwas unsaubere L�sung...

Ist SWUART_INVERT definiert, arbeitet der UART in invertierter Betriebsart.
*/
//#define SWUART_INVERT

#define TxD PC3	//TxD-Pin des Software-UART; muss an Port C sein!

