#include <iostream>
#include <cstdlib>
#include <cstdio>
#include <cstring>
#include <windows.h>

#define ARRIBA 'i'
#define ABAJO 'k'
#define ENTER 13

using namespace std;

#include "tipos.h"

#include "prototipos.h"

#include "funciones.h"
#include "alu_metodos.h"


int main(){
   int opc;
    Alumno reg;
    while(true){
      system("cls");
      cout << "---------------------------MENU DE ALUMNOS-----" << endl;
      cout << "-----------------------------------------------" << endl;
      cout << "         1. ALTA DE ALUMNO" << endl;
      cout << "         2. BAJA DE ALUMNO" << endl;
      cout << "         3. LISTADO DE ALUMNOS" << endl;
      cout << "         4. LISTADO DE ALUMNO POR APELLIDO" << endl;
      cout << "         5. LISTADO ORDENADO POR APELLIDO" << endl;
      cout << "         6. FIN DEL PROGRAMA" << endl;
      cout << "         - SELECCIONE UNA OPCION: - " << endl;
      cout << "------------------------------------------------" << endl;
      cin>>opc;
     // opc=menu(6);
            //system("cls");
      switch(opc){
        case 1: reg.Cargar();
                if(reg.grabarEnDisco()==true) cout<<"EL REGISTRO SE GRABO CORRECTAMENTE"<<endl;
                else cout<<"NO SE PUDO GRABAR EL REGISTRO"<<endl;
                break;

        case 2: bajaLogica();
                break;
        case 3: //mostrarAlumno(reg);
                if(leerArchivoAlumnos()==false) cout<<"NO SE PUDO LEER EL ARCHIVO"<<endl;
                break;
        case 4: mostrarAlumnoPorApellido();
                break;
        case 5: mostrarOrdenadoPorApellido();
                break;
        case 0: return 0;
                break;
        default:cout<<" OPCION INCORRECTA"<<endl;
                break;
      }
      system("pause");
    }
    return 0;
}




