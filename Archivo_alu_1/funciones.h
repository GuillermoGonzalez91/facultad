#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED
///Funciones

bool leerArchivoAlumnos(){
    Alumno x;
    int pos=0;
    while(x.leerDeDisco(pos)==true){
        x.Mostrar();
        cout<<endl;
        pos++;
    }
   return true;
}



void bajaLogica(){
    Alumno reg;
    int legajo, pos=0;
    cout<<"INGRESE EL LEGAJO DEL ALUMNO A ELIMINAR:";
    cin>>legajo;
    pos=buscarAlumno(legajo);
    if(pos==-1){
      cout<<"NO EXISTE EL ALUMNO"<<endl;
      return;
    }
    reg.leerDeDisco(pos);
    reg.setActivo(false);
    if(reg.modificarDeDisco(pos)==true){
        cout<<"BAJA REALIZADA"<<endl;
    }
    else{
        cout<<"NO SE PUDO DAR LA BAJA"<<endl;
    }
}


int buscarAlumno(int legajo){
    Alumno reg;
    int pos=0;
    while(reg.leerDeDisco(pos)){
        if(reg.getLegajo()==legajo){
        return pos;
        }
        pos++;
    }
    return -1;
}

int buscarApellidoAlumno(char *ape){
    int pos=0;
    Alumno reg;
    while(reg.leerDeDisco(pos)){
    if(strcmp(reg.getApellido(),ape)==0){
        return pos;
        }
    pos++;
    }
    return -1;
}


void mostrarAlumnoPorApellido(){
   char ape[30];
   cout<<"APELLIDO: ";
   cin>>ape;
   int pos=buscarApellidoAlumno(ape);
   if(pos==-1){
    cout<<"NO EXISTE EL ALUMNO"<<endl;
    return;
   }
   Alumno reg;
   reg.leerDeDisco(pos);
   reg.Mostrar();
}


void mostrarOrdenadoPorApellido(){
/**    Contar registros de alumnos
    Hacer un vector de alumnos (dinámico)
    Copiar el archivo en el vector
    Ordenar el vector
    Mostrar el vector
    Devolver la memoria del vector

*/
    int cantReg=5;
    ///cantReg=contarRegistros();
    Alumno *vAlu;
    vAlu=new Alumno[cantReg];
    if(vAlu==NULL){
        cout<<"NO SE PUDO ASIGNAR MEMORIA"<<endl;
        return;
    }
    int i;
    for(i=0;i<cantReg;i++){
        vAlu[i].leerDeDisco(i);
    }
    ///ordenar el vector
    for(i=0;i<cantReg;i++){
        vAlu[i].Mostrar();
    }
    delete vAlu;
}


#endif // FUNCIONES_H_INCLUDED
