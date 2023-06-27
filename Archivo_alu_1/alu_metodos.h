#ifndef ALU_METODOS_H_INCLUDED
#define ALU_METODOS_H_INCLUDED

void Alumno::Cargar()
{
  Persona::Cargar();
  cout<<"INGRESE EL LEGAJO:";
  cin>>legajo;
  cout<<"INGRESE EL CODIGO DE CARRERA:";
  cin>>codigoCarrera;
 }

void Alumno::Mostrar()
{
    Persona::Mostrar();
    cout<<"LEGAJO:";
    cout<<this->legajo<<endl;
    cout<<"CODIGO DE CARRERA:";
    cout<<codigoCarrera<<endl;
    system("pause>nul");
}

///PUNTERO this: CONTIENE LA DIRECCION DEL OBJETO QUE LLAMA
/// SOLO EXISTE DENTRO DE LA CLASE
bool Alumno::grabarEnDisco(){
    FILE *pa;
    pa=fopen("alumnos.dat","ab");
    if(pa==NULL){
        return false;
    }
    bool escribio=fwrite(this, sizeof (Alumno), 1, pa);
    fclose(pa);
    return escribio;
}


bool Alumno::leerDeDisco(int pos){
    FILE *p;
    p=fopen("alumnos.dat", "rb");
    if(p==NULL) return false;
    fseek(p,pos*sizeof(Alumno),0);///sizeof *this también puede usarse
    bool leyo=fread(this, sizeof(Alumno), 1, p);
    fclose(p);
    return leyo;
}
bool Alumno::modificarDeDisco(int pos){
    FILE *pa;
    pa=fopen("alumnos.dat","rb+");
    if(pa==NULL){
        return false;
    }
    fseek(pa,sizeof(Alumno)*pos,0);
    bool escribio=fwrite(this, sizeof (Alumno), 1, pa);
    fclose(pa);
    return escribio;
}

#endif // ALU_METODOS_H_INCLUDED
