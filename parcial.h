/*#ifndef PARCIAL_H_INCLUDED
#define PARCIAL_H_INCLUDED


class Fecha{
    private:
        int dia, mes, anio;
    public:
        int getDia(){return dia;}
};


class Guias{

private:
        int dni;
        char nombre[50];
        char apellido[50];
        int codigo_nacionalidad;
        int nivel;
        Fecha fecha_nac;
public:
        int getCodigo_nacionalidad(){return codigo_nacionalidad;}
        int getDni(){return dni;}
        int nivel(){return nivel;}
        const char *getNombre(){return nombre;}
        const char *getApellido(){return apellido;}
        bool leerDeDisco(int pos);


};


class Ascensos{

private:
        int dni;
        int codigo_montaña;  // 1 al 100
        int nivel;           //inicial 1; intermedio 2; cumbre: 3
        int cantidad_integrantes;
public:
        int getDni(){return dni;}
        int getNivel(){return nivel;}
        int getCantidad_integrantes(){return cantidad_integrantes;}
        bool leerDeDisco(int pos);

};

bool Guias::leerDeDisco(int pos){
    FILE *p;
    p=fopen("guias.dat", "rb");
    if(p==NULL) return false;
    fseek(p, sizeof(Guias)*pos, 0);
    bool leyo=fread(this, sizeof(Guias),1,p);
    fclose(p);
    return leyo;
}


bool Ascensos::leerDeDisco(int pos){
    FILE *p;
    p=fopen("ascensos.dat", "rb");
    if(p==NULL) return false;
    fseek(p, sizeof(ascensos)*pos, 0);
    bool leyo=fread(this, sizeof(Ascensos),1,p);
    fclose(p);
    return leyo;
}

class Subidas_2019{
   private:
       int dni;
        char nombre[50];
        char apellido[50];
        int codigo_nacionalidad;
        int nivel;
        Fecha fecha_nac;
public:
        void setDni(int n){dni=n;}
        void setNombre(const char *n){strcpy(nombre,n);}
        void setApellido(const char *n){strcpy(apellido,n);}
        void setCodigo_nac(int n){codigo_nacionalidad=n;}
        void setNivel(int n){nivel=n;}
        bool grabarEnDisco();

};

bool Subidas_2019::grabarEnDisco(){
    FILE *p;
    p=fopen("subidas_0", "rb");
    if(p==NULL) return false;
    bool grabo=fwrite(this, sizeof(Subidas_2019),1,p);
    fclose(p);
    return grabo;
}




int main()
{
    puntoA();
    puntoB();
    return 0;
}



void puntoA(){
    int pos=0;
    Guias obj;
    subidas_2019 aux;
    while(obj.leerDeDisco(pos++)){    // lee el archivo de guias
        bool ascendio=buscar_ascensos(obj.getDni);    // manda a llamar a la funcion buscar_ascenso
        if(ascendio==true)
            {
            aux.setApellido(obj.getApellido());
            aux.setCodigo_nac(obj.getCodigo_nacionalidad());
            aux.setDni(obj.getDni());
            aux.setNombre(obj.nombre());
            aux.setNivel(obj.nivel());
            aux.grabarEnDisco();
        }
     }
}

bool buscar_ascensos(int dni){
    ascensos reg;
    int pos=0;
    while(reg.leerDeDisco(pos++)){    // lee el archivo
        if(reg.getDni==dni){           // compara el dni que recive con el dni del objeto
                if(reg.getNivel==1)    // pregunta si el nuivel es 1
                {
                     return true;     // retorna true si es 1
                }
        }
    }
}



void puntoB(){




    Ascensos obj;
    int pos=0;
    while(obj.leerDeDisco(pos++)){

    }
    mostrarVector(cat);
}




#endif // PARCIAL_H_INCLUDED
*/
