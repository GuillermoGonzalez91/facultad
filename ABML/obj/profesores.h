#ifndef PROFESORES_H_INCLUDED
#define PROFESORES_H_INCLUDED




void alta_profesor(){
 Profesor obj;
 obj.Cargar();
 if(obj.grabarEnDisco()==true)	cout<<"EL REGISTRO SE GRABO CORRECTAMENTE"<<endl;
 else cout<<"NO SE PUDO GRABAR EL REGISTRO"<<endl;
 system("pause");
}





void modificar_profesor(){


// tengo qque hacer toda la uncion de alta


}

void listado_profesor()
{
    Profesor reg;
    FILE *p;
    p=fopen(ARCHIVO_PROFESORES,"rb");
    if(p==NULL)
    {
        cout<<"EL ARCHIVO NO PUDO ABRIRSE"<<endl;
    }

   while(reg.leerDeDisco(pos)){
    {
        reg.Mostrar();
    }
    fclose(p);
}



/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/
/*******************************************************************************************************************************/



bool Profesor::grabarEnDisco(){
    FILE *p;
    p=fopen(ARCHIVO_PROFESORES,"ab");       // cambiar todos los nombres de los archivos por constantes chars
    if(p==NULL){
        return false;
    }
    bool escribio=fwrite(this, sizeof (Persona), 1, p);
    fclose(p);
    return escribio;
}

bool Profesor::leerDeDisco(int pos){
    FILE *p;
    p=fopen(ARCHIVO_PROFESORES, "rb");
    if(p==NULL) return false;
    fseek(p,pos*sizeof(Profesor),0);///sizeof *this también puede usarse
    bool leyo=fread(this, sizeof(Profesor), 1, p);
    fclose(p);
    return leyo;
}
bool Profesor::modificarDeDisco(int pos){
    FILE *pa;
    pa=fopen(ARCHIVO_PROFESORES,"rb+");        // cambiar todos los archivos por constantes char
    if(pa==NULL){
        return false;
    }
    fseek(pa,sizeof(Profesor)*pos,0);
    bool escribio=fwrite(this, sizeof (Profesor), 1, pa);
    fclose(pa);
    return escribio;
}




int buscarProfesor(int legajo){
    Profesor reg;
    int pos=0;
    while(reg.leerDeDisco(pos)){
        if(reg.getLegajo()==legajo){
        return pos;
        }
        pos++;
    }
    return -1;
}


bool leerArchivoProfesores(){
    Profesor x;
    int pos=0;
    while(x.leerDeDisco(pos)==true){
        x.Mostrar();
        cout<<endl;
        pos++;
    }
   return true;
}



void baja_profesor(){
    Profesor reg;
    int legajo, pos=0;
    system("pause");
    cout<<endl;
    cout<<endl;
    cout<<endl;
    cout<<"INGRESE EL LEGAJO DEL PROFESOR A ELIMINAR:";
    cin>>legajo;
    pos=buscarProfesor(legajo);
    if(pos==-1){
      cout<<"NO EXISTE EL ALUMNO"<<endl;
      system("pause");
      return;
    }
    reg.leerDeDisco(pos);
    reg.setActivo(false);
    if(reg.modificarDeDisco(pos)==true){
        cout<<"BAJA REALIZADA"<<endl;
        system("pause");
    }
    else{
        cout<<"NO SE PUDO DAR LA BAJA"<<endl;
        system("pause");
    }
}














#endif // PROFESORES_H_INCLUDED
