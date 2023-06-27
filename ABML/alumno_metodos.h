#ifndef ALUMNO_METODOS_H_INCLUDED
#define ALUMNO_METODOS_H_INCLUDED





void Alumno::Cargar()
	{
	Persona::Cargar();
	cout<<"INGRESAR EL NUMERO DE LEGAJO: ";
	cin>>legajo;
	cout<<"INGRESAR EL DEPORTE QUE PRACTICA: ";
	cin>>deporte;
	}

void Alumno::Mostrar()
	{
	Persona::Mostrar();
	cout<<"NUMERO DE LEGAJO: ";
	cout<<legajo<<endl;
	cout<<"DEPORTE: ";
	cout<<deporte;
	system("pause>nul");
	cout<<endl;
	cout<<endl;
	cout<<endl;
	}


bool Alumno::grabarEnDisco(){
    FILE *p;
    p=fopen(ARCHIVOS_ALUMNOS,"ab");       // cambiar todos los nombres de los archivos por constantes chars
    if(p==NULL){
        return false;
    }
    bool escribio=fwrite(this, sizeof (Alumno), 1, p);
    fclose(p);
    return escribio;
}

bool Alumno::leerDeDisco(int pos){     // RECIVE LA POSICION DEL REGISTRO QUE QUIERE BUSCAR
    FILE *p;
    p=fopen(ARCHIVOS_ALUMNOS, "rb");
    if(p==NULL) return false;
    fseek(p,pos*sizeof *this ,0);///sizeof *this también puede usarse
    bool leyo=fread(this, sizeof *this , 1, p);
    fclose(p);
    return leyo;
}
bool Alumno::modificarDeDisco(int pos){
    FILE *pa;
    pa=fopen(ARCHIVOS_ALUMNOS,"rb+");
    if(pa==NULL){
        return false;
    }
    fseek(pa,sizeof(Alumno)*pos,0);
    bool escribio=fwrite(this, sizeof (Alumno), 1, pa);
    fclose(pa);
    return escribio;
}




#endif // ALUMNO_METODOS_H_INCLUDED
