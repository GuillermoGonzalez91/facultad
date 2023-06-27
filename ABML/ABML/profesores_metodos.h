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
	}






#endif // PROFESORES_METODOS_H_INCLUDED
