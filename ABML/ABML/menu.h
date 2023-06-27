#ifndef MENU_H_INCLUDED
#define MENU_H_INCLUDED

void menu_principal()            // menu pricipal ue llama a los otros submenus
{
    bool salir = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char *titulo = "MENU PRINCIPAL";    // LAS OPCIONES EN EL MENU MELAS MUESTRA LA UNCION MENU,Y LE PASO LOS DATOS POR REERENCIA
    const char *opciones[] = {"PROFESORES", "ALUMNOS","DEPORTES", "MODIFICACIONES", "LISTADOS", "SALIR"};  // PARA CAMBIAR LAS OPCIONES DEL MENU HAY QUE CAMBIAR ESTO DE ACA
    int n = 6;  // NUMERO DE OPCIONES QUE TIENE CADA SUBMENU

    while(salir)    // MIENTAS NO SE INGRESE ENTER EL PROGRAMA SE UEDA DANDO VUELTAS EN EL WHILE
    {
        opcion = menu(titulo, opciones, n);

        switch (opcion)
        {
        case 1:
           menu_profesores();
            break;


        case 2:
           menu_alumnos();
            break;

        case 3:
            menu_deportes();
            break;

        case 4:
            //LLAMAR A OTRO SUBMENU();
            break;
            case 5:
            //LLAMAR A OTRO SUBMENU();
            break;

        case 6:
            system("cls");
            gotoxy(30,7); cout <<"*****  EL PROGGRAMA HA INALIZADO EXITOSAMENTE *****" << endl;
            salir = false;
            system("pause>nul");   //PARA QUE NO MUESTRE "pulse una tecla para continuar"
            break;
        }
    }

}


void menu_profesores()            // menu profesores
{
    bool salir = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char *titulo = "MENU PROFESORES";    // LAS OPCIONES EN EL MENU MELAS MUESTRA LA UNCION MENU,Y LE PASO LOS DATOS POR REERENCIA
    const char *opciones[] = {"ALTAS", "BAJAS", "MODIFICACIONES", "LISTADOS", "SALIR"};  // PARA CAMBIAR LAS OPCIONES DEL MENU HAY QUE CAMBIAR ESTO DE ACA
    int n = 5;  // NUMERO DE OPCIONES QUE TIENE CADA SUBMENU

    while(salir)    // MIENTAS NO SE INGRESE ENTER EL PROGRAMA SE UEDA DANDO VUELTAS EN EL WHILE
    {
        opcion = menu(titulo, opciones, n);

        switch (opcion)
        {
        case 1:
            alta_profesor();
            break;


        case 2:
             baja_profesor();
            break;

        case 3:
            modificar_profesor();
            break;

        case 4:
             listado_profesor();
            break;

        case 5:
            system("cls");
            gotoxy(30,7); cout <<"*****VOLVIENDO AL MENU ANTERIOR*****" << endl;
            salir = false;
            system("pause>nul");   //PARA QUE NO MUESTRE "pulse una tecla para continuar"
            break;
        }
    }

}

/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
void menu_alumnos()            // MENU ALUMNOS
{
    bool salir = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char *titulo = "MENU ALUMNOS";    // LAS OPCIONES EN EL MENU MELAS MUESTRA LA UNCION MENU,Y LE PASO LOS DATOS POR REERENCIA
    const char *opciones[] = {"ALTAS", "BAJAS", "MODIFICACIONES", "LISTADOS", "SALIR"};  // PARA CAMBIAR LAS OPCIONES DEL MENU HAY QUE CAMBIAR ESTO DE ACA
    int n = 5;  // NUMERO DE OPCIONES QUE TIENE CADA SUBMENU

    while(salir)    // MIENTAS NO SE INGRESE ENTER EL PROGRAMA SE UEDA DANDO VUELTAS EN EL WHILE
    {
        opcion = menu(titulo, opciones, n);

        switch (opcion)
        {
        case 1:
            alta_alumno();
            break;


        case 2:
             baja_alumno();
            break;

        case 3:
            modificar_alumno();
            break;

        case 4:
             listado_alumno();
            break;

        case 5:
            system("cls");
            gotoxy(30,7); cout <<"*****VOLVIENDO AL MENU ANTERIOR*****" << endl;
            salir = false;
            system("pause>nul");   //PARA QUE NO MUESTRE "pulse una tecla para continuar"
            break;
        }
    }

}

void alta_alumno(){


// tengo qque hacer toda la uncion de alta


}
void baja_alumno(){


// tengo qque hacer toda la uncion de alta


}

void modificar_alumno(){


// tengo qque hacer toda la uncion de alta


}

void listado_alumno(){


// tengo qque hacer toda la uncion de alta


}
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
/**************************************************************************************************************************/
void menu_deportes()            // MENU ALUMNOS
{
    bool salir = true;
    int opcion;

    // Titulo del menú y nombres de las opciones
    const char *titulo = "MENU DEPORTES";    // LAS OPCIONES EN EL MENU MELAS MUESTRA LA UNCION MENU,Y LE PASO LOS DATOS POR REERENCIA
    const char *opciones[] = {"ALTAS", "BAJAS", "MODIFICACIONES", "LISTADOS", "SALIR"};  // PARA CAMBIAR LAS OPCIONES DEL MENU HAY QUE CAMBIAR ESTO DE ACA
    int n = 5;  // NUMERO DE OPCIONES QUE TIENE CADA SUBMENU

    while(salir)    // MIENTAS NO SE INGRESE ENTER EL PROGRAMA SE UEDA DANDO VUELTAS EN EL WHILE
    {
        opcion = menu(titulo, opciones, n);

        switch (opcion)
        {
        case 1:
            alta_deporte();
            break;


        case 2:
             baja_deporte();
            break;

        case 3:
            modificar_deporte();
            break;

        case 4:
             listado_deporte();
            break;

        case 5:
            system("cls");
            gotoxy(30,7); cout <<"*****VOLVIENDO AL MENU ANTERIOR*****" << endl;
            salir = false;
            system("pause>nul");   //PARA QUE NO MUESTRE "pulse una tecla para continuar"
            break;
        }
    }

}

void alta_deporte(){


// tengo qque hacer toda la uncion de alta


}
void baja_deporte(){


// tengo qque hacer toda la uncion de alta


}

void modificar_deporte(){


// tengo qque hacer toda la uncion de alta


}

void listado_deporte(){


// tengo qque hacer toda la uncion de alta


}


// funcion para manipular el posisionador de los menues

int menu(const char titulo[], const char *opciones[], int n)
{
   int opcionSeleccionada = 1;  // Indica la opcionSeleccionada

   int tecla;

   bool repite = true; // controla el bucle para regresar a la rutina que lo llamo, al presionar ENTER

   do {
      system("cls");
    //  system("color 1e");
      gotoxy(5, 3 + opcionSeleccionada); cout << "==>" << endl;

      // Imprime el título del menú
      gotoxy(15, 2); cout << titulo;

      // Imprime las opciones del menú
      for (int i = 0; i < n; ++i) {
         gotoxy(10, 4 + i); cout << i + 1 << ") " << opciones[i];
      }

      // Solo permite que se ingrese ARRIBA, ABAJO o ENTER

      do {
         tecla = getch2();
         // gotoxy(15, 15); cout << "tecla presionada: " << (char)tecla << " = " << tecla;
      } while (tecla != ARRIBA && tecla != ABAJO && tecla != ENTER);

      switch (tecla) {

         case ARRIBA:   // En caso que se presione ARRIBA

            opcionSeleccionada--;

            if (opcionSeleccionada < 1) {
               opcionSeleccionada = n;
            }

            break;

         case ABAJO:
            opcionSeleccionada++;

            if (opcionSeleccionada > n) {
               opcionSeleccionada = 1;
            }

            break;

         case ENTER:
            repite = false;
            break;
      }

   } while (repite);

   return opcionSeleccionada;
}




#endif // MENU_H_INCLUDED
