#ifndef ALUMNOS_H_INCLUDED
#define ALUMNOS_H_INCLUDED


void alta_alumno()        // REALIZA LA CARGA DE UN PROFESOR
{
    bool grabo;
    Alumno obj;
    obj.Cargar();
    grabo=obj.grabarEnDisco();
    if(grabo==true)
    {
        cout<<"EL REGISTRO SE GRABO CORRECTAMENTE"<<endl;

    }
    else cout<<"NO SE PUDO GRABAR EL REGISTRO"<<endl;
    system("pause");
}





void listado_alumno_todos()
{
    system("cls");
    Alumno reg;
    int pos=0;     // empiezo con la posicion en 0
    while(reg.leerDeDisco(pos))    // manda a leer del archivo cada pocicion
    {
        reg.Mostrar();
        pos++;// se incrementa con cada vuelta del while
    }

}

void listado_alumno_eliminados()
{
    system("cls");
    Alumno reg;
    int pos=0;     // empiezo con la posicion en 0
    while(reg.leerDeDisco(pos))    // manda a leer del archivo cada pocicion
    {
        if(reg.getEstado()==false)
        {
            reg.Mostrar();
        }

        pos++;
    }
    // se incrementa con cada vuelta del while
}

void listado_alumno_activos()
{
    system("cls");
    Alumno reg;
    int pos=0;     // empiezo con la posicion en 0
    while(reg.leerDeDisco(pos))    // manda a leer del archivo cada pocicion
    {
        if(reg.getEstado()==true)
        {
            reg.Mostrar();
        }
        pos++;
    }
    // se incrementa con cada vuelta del while
}


/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/







int buscarAlumno(int legajo)
{
    Alumno reg;     // creo el objeto reg
    int pos=0;     // empiezo con la posicion en 0
    while(reg.leerDeDisco(pos))    // manda a leer del archivo cada pocicion
    {
        if(reg.getLegajo()==legajo)    // compara el legajo con el legajo que le paso por parametro
        {
            return pos;    // retorna la posicion encontrada
        }
        pos++;    // se incrementa con cada vuelta del while
    }
    return -1;   // si no encuentro nada +, devuelvo menos 1
}


bool leerArchivoAlumno()
{
    Alumno reg;
    int pos=0;
    while(reg.leerDeDisco(pos)==true)
    {
        reg.Mostrar();
        cout<<endl;
        pos++;
    }
    return true;
}



void baja_alumno()
{
    system("cls");
    Alumno reg;     // CREO UN OBJETO PROFESOR
    int legajo;       // LEGAJO QUE VOY A BUSCAR
    int pos=0;
    cout<<"INGRESE EL LEGAJO DEL ALUMNO A ELIMINAR:";    // modificar para hacer que elimine por dni tambien
    cin>>legajo;
    pos=buscarAlumno(legajo);           // PRIMERO BUSCA LA POSICION EN DONDE ESTA ESE REGISTRO
    if(pos==-1)       // SI ME DEVOLVIO MENO 1 ES POR QUE NO EXISTE ESE REGISTRO
    {
        cout<<"NO EXISTE EL PROFESOR, POR FAVOR INGRESAR UN LEGAJO VALIDO"<<endl;
        system("pause");
        return;
    }
    reg.leerDeDisco(pos);    // grabo en reg, la lectura de ese archivo, y le paso la posicion delarchivo en donde lo encuentro
    reg.setActivo(false);    //CAMBIO EL VALOR DEL ESTADO, ATRAVEZ DE LA FUNCION SET ACTIVO
    if(reg.modificarDeDisco(pos)==true)     //RECIVE LA POSICION DEL REGISTRO EN DNDE QQUIERO HACER LA MODIFICACION
    {
        cout<<"BAJA REALIZADA DEL REGISTRO DEL ALUMNO"<<endl;
        system("pause");
    }
    else
    {
        cout<<"NO SE PUDO DAR LA BAJA DEL ALUMNO SELECCIONADO"<<endl;
        system("pause");
    }
}











void modificar_alumno()
{

    system("cls");
    Alumno reg;     // CREO UN OBJETO PROFESOR
    int legajo;       // LEGAJO QUE VOY A BUSCAR
    int pos=0;
    int telefono;
    cout<<"INGRESE EL LEGAJO DEL ALUMNO A MODIFICAR:";    // modificar para hacer que elimine por dni tambien
    cin>>legajo;
    pos=buscarAlumno(legajo);           // PRIMERO BUSCA LA POSICION EN DONDE ESTA ESE REGISTRO
    if(pos==-1)       // SI ME DEVOLVIO MENO 1 ES POR QUE NO EXISTE ESE REGISTRO
    {
        cout<<"NO EXISTE EL ALUMNO, POR FAVOR INGRESAR UN LEGAJO VALIDO"<<endl;
        system("pause");
        return;
    }
    cout<<"INGRESE EL TELEFONO A MODIFICAR:";    // modificar para hacer que elimine por dni tambien
    cin>>telefono;
    reg.leerDeDisco(pos);    // grabo en reg, la lectura de ese archivo, y le paso la posicion delarchivo en donde lo encuentro
    reg.settelefono(telefono);    //CAMBIO EL VALOR DEL ESTADO, ATRAVEZ DE LA FUNCION SET ACTIVO
    if(reg.modificarDeDisco(pos)==true)     //RECIVE LA POSICION DEL REGISTRO EN DNDE QQUIERO HACER LA MODIFICACION
    {
        cout<<"MODIFICACION REALIZADA CORRECTAMENTE"<<endl;
        system("pause");
    }
    else
    {
        cout<<"NO SE PUDO REALIZARLA MODIFICACION CORRECTAMENTE"<<endl;
        system("pause");
    }
}










#endif // ALUMNOS_H_INCLUDED
