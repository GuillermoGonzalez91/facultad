#ifndef PROFESORES_METODOS_H_INCLUDED
#define PROFESORES_METODOS_H_INCLUDED

void Profesor::Cargar()
	{
	Persona::Cargar();
	cout<<"INGRESAR EL NUMERO DE LEGAJO: ";
	cin>>legajo;
	cout<<"INGRESAR EL DEPORTE QUE PRACTICA: ";
	cin>>deporte;

	}

void Profesor::Mostrar()
	{
	Persona::Mostrar();
	cout<<"NUMERO DE LEGAJO: ";
	cout<<legajo<<endl;
	cout<<"DEPORTE: ";
	cout<<deporte;
	system("pause");
	cout<<endl;
	}




bool Profesor::grabarEnDisco(){
    FILE *p;
    p=fopen(ARCHIVO_PROFESORES,"ab");       // cambiar todos los nombres de los archivos por constantes chars
    if(p==NULL){
        return false;
    }
    bool escribio=fwrite(this, sizeof (Profesor), 1, p);
    fclose(p);
    return escribio;
}

bool Profesor::leerDeDisco(int pos){     // RECIVE LA POSICION DEL REGISTRO QUE QUIERE BUSCAR
    FILE *p;
    p=fopen(ARCHIVO_PROFESORES, "rb");
    if(p==NULL) return false;
    fseek(p,pos*sizeof *this ,0);///sizeof *this también puede usarse
    bool leyo=fread(this, sizeof *this , 1, p);
    fclose(p);
    return leyo;
}
bool Profesor::modificarDeDisco(int pos){
    FILE *pa;
    pa=fopen(ARCHIVO_PROFESORES,"rb+");
    if(pa==NULL){
        return false;
    }
    fseek(pa,sizeof(Profesor)*pos,0);
    bool escribio=fwrite(this, sizeof (Profesor), 1, pa);
    fclose(pa);
    return escribio;
}


#endif // PROFESORES_METODOS_H_INCLUDED
