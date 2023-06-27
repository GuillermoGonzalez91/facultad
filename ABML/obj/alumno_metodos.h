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
	}





#endif // ALUMNO_METODOS_H_INCLUDED
