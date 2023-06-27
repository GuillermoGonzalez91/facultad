#include <iostream>
#include <string.h>
#include <cstdio>
#include <ctime>

using namespace std;
#include "fecha.h"
#include "direccion.h"
#include "persona.h"


int main()
{
   Alumno a;
   a.Cargar();
   a.Mostrar();
   return 0;
}
