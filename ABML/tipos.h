#ifndef TIPOS_H_INCLUDED
#define TIPOS_H_INCLUDED

/***********************************************************************************************/
const char ARCHIVO_PROFESORES[]="profesores.dat";
const char ARCHIVOS_ALUMNOS[]="alumnos.dat";
const char ARCHIVOS_PERSONAS[]="personas.dat";
const char ARCHIVOS_INSCRIPCIONES[]="inscripciones.dat";
const char ARCHIVOS_DEPORTES[]="deportes.dat";

/***********************************************************************************************/
const char ARCHIVO_PROFESORES_BAK[]="profesores.bak";
const char ARCHIVOS_ALUMNOS_BAK[]="alumnos.bak";
const char ARCHIVOS_PERSONAS_BAK[]="personas.bak";
//const char ARCHIVOS_INSCRIPCIONES[]="inscripciones.bak";
//const char ARCHIVOS_DEPORTES[]="deportes.bak";
/***********************************************************************************************/
const char ARCHICOS_DE_INICIO_MUSICOS [] = "musicos.ini";
const char ARCHICOS_DE_INICIO_SESIONES [] = "sesiones.ini";
const char ARCHICOS_DE_INICIO_INSCRIPCIONES [] = "inscripciones.ini";



class Persona{
    protected:
        char nombre[30];
        char apellido[30];
        int dni;
        int telefono;
        class fechaNac;///fechaNac.dia; fechaNac.mes;///fechaNac.anio
        char email[30];
        bool activo;
        Fecha fecha_nac;
    public:
        void Cargar();
        void Mostrar();
        const char *getApellido(){return apellido;}
        void setFecha_nac(Fecha f){fecha_nac=f;}

};


class Profesor : public Persona
	{
	 private:
		int legajo;
		int deporte;
		bool activo=true;
	 public:
		void Cargar();
		void Mostrar();
		bool grabarEnDisco();
		bool leerDeDisco(int pos);
		bool modificarDeDisco(int pos);
		int getLegajo(){return legajo;}
		int getDeporte(){return deporte;}    // DEVUELVE EL NUMERO DE DEPORTE
        bool getEstado(){return activo;}     // DEVUELVE EL VALOR DE ESTADO
		class Fecha getFecha(){return fecha_nac;}
		int settelefono(int tel){telefono=tel;}
        void setActivo(bool a){activo=a;}

	 };



class Alumno:public Persona
	{
	  private:
		int legajo;
		int deporte;
		bool activo=true;
	 public:
		void Cargar();
		void Mostrar();
		bool grabarEnDisco();
		bool leerDeDisco(int pos);
		bool modificarDeDisco(int pos);
		int getLegajo(){return legajo;}
		int getDeporte(){return deporte;}    // DEVUELVE EL NUMERO DE DEPORTE
        bool getEstado(){return activo;}     // DEVUELVE EL VALOR DE ESTADO
		class Fecha getFecha(){return fecha_nac;}
		int settelefono(int tel){telefono=tel;}
        void setActivo(bool a){activo=a;}
	 };


void Persona::Cargar(){
  system("cls");
  cout<<"INGRESE EL NOMBRE:";
  cin>>nombre;
  cout<<"INGRESE EL APELLIDO:";
  cin>>apellido;
  cout<<"INGRESAR DNI"<<endl;
  cin>>dni;
  cout<<"INGRESAR TELEFONO"<<endl;
  cin>>telefono;
  cout<<"INGRESE LA FECHA DE NACIMIENTO: (D/M/A): "<<endl;
 cin>>fecha_nac;
  cout<<"INGRESE EL EMAIL:";
  cin>>email;

}

void Persona::Mostrar()
	{

	cout<<"NOMBRE: ";
	cout<<nombre<<endl;
	cout<<"APELLIDO: ";
	cout<<apellido<<endl;
	cout<<"FECHA DE NACIMIENTO: "<<endl;
	cout<<fecha_nac;
	cout<<"DOCUMENTO: ";
	cout<<dni<<endl;
	cout<<"TELEFONO: ";
	cout<<telefono<<endl;
	}

/*class Deporte()
{
private:
    int n_deporte;// (1 fútbol, 2 basquet, 3 tenis, 4 natación, 5 hockey )
public:
    void Mostrar();
    void Cargar();
    int getDeporte(){return n_deporte;}


};*/




#endif // TIPOS_H_INCLUDED
