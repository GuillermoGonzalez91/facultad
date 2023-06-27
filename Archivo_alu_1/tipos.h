#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

struct fecha{
  int dia, mes, anio;
};
///cambiar por una clase

class Persona{
    protected:
        char nombre[30];
        char apellido[30];
        struct fecha fechaNac;///fechaNac.dia; fechaNac.mes;///fechaNac.anio
        char email[30];
        bool activo;
    public:
        void Cargar();
        void Mostrar();
        const char *getApellido(){return apellido;}
        void setActivo(bool a){activo=a;}

};



class Alumno: public Persona{
    private:
        int legajo;
        int codigoCarrera;
    public:
        void Cargar();
        void Mostrar();
        int getLegajo(){return legajo;}

        bool grabarEnDisco();
        bool modificarDeDisco(int);
        bool leerDeDisco(int );
        void MostrarThis(){
            cout<<this<<endl;
            cout<<sizeof this<<endl;
            cout<<sizeof *this<<endl;
            }

};

void Persona::Cargar(){
  system("cls");
  cout<<"INGRESE EL NOMBRE:";
  cin>>nombre;
  cout<<"INGRESE EL APELLIDO:";
  cin>>apellido;
  cout<<"INGRESE LA FECHA DE NACIMIENTO: (D/M/A): "<<endl;
  cin>>fechaNac.dia;
  cin>>fechaNac.mes;
  cin>>fechaNac.anio;
  cout<<"INGRESE EL EMAIL:";
  cin>>email;
  activo=true;
}

void Persona::Mostrar(){
    //if(activo==true){
        system("cls");
        cout<<"NOMBRE:";
        cout<<nombre<<endl;
        cout<<"APELLIDO:";
        cout<<apellido<<endl;
        cout<<"FECHA DE NACIMIENTO: ";
        cout<<fechaNac.dia<<"/";
        cout<<fechaNac.mes<<"/";
        cout<<fechaNac.anio<<endl;
        cout<<"EMAIL:";
        cout<<email<<endl;
}



#endif // TIPOS_H_INCLUDED
