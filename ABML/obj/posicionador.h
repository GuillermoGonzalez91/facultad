#ifndef POSICIONADOR_H_INCLUDED
#define POSICIONADOR_H_INCLUDED


char getch2 ()   // FUNCION PARA MANIPUAR LAS LETRAS Y EL ENTER
{
   char c=0;
   DWORD modo, contador;
   HANDLE ih = GetStdHandle(STD_INPUT_HANDLE);

   // Desactivamos escritura en terminal
   SetConsoleMode (ih, modo & ~(ENABLE_ECHO_INPUT | ENABLE_LINE_INPUT));
   ReadConsoleA (ih, &c, 1, &contador, NULL);

   if (c == 0) {
      ReadConsoleA (ih, &c, 1, &contador, NULL);
   }

   SetConsoleMode (ih, modo); // Devolvemos control normal

   return c;
}


int gotoxy(USHORT x,USHORT y) {          //  FUNCION GOTOXI PARA LAS COORDENADAS
   COORD cp = {x,y};
   SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), cp);
 }
#endif // POSICIONADOR_H_INCLUDED
