#ifndef CUENTA_H_
#define CUENTA_H_
/*Diego Reséndiz fernández
Matricula: A01708017
Eesta es nuetra clase padre. es la clase de la cual se crearan otras subclases, en este caso, la clase Cuenta es la clase "Molde" de la cual las demas clases
es decir, los demas tipo de cuenta se basaran en esta clase. */
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
using namespace std;
/*Para declarar una clase primero se introduce el comando class y seguido del nombre de la clase*/
class Cuenta{
/*En el apratado de private se introducen los atributos de la clase, es decir, se incializan variables que seran carateristica de la clase*/
 	//Atributos
 	private: 
	    int NumeroCuenta;
	    float fondos;
	    string password;
		string Nombre;
	/*En el apartado de public se ponen los metodos. Los metodos son un conjunto de funciones que permiten que tu clase obtenga
	los datos para darle un valor a sus atributos para construir el objeto y ademas para que ese objeto tenga interactividad con otro objeto o con el usuario
	en este caso en los metodos tengo un metodo para construir el objeto y ademas metodos para interactuar con el objeto */
	//Metodos
	public:
		//Constructor
		Cuenta(string _Nombre, string _password, float _fondos, int _NumeroCuenta){
			Nombre=_Nombre;
			password=_password;
			fondos=_fondos;
			NumeroCuenta=_NumeroCuenta;
	     }
		//setters	
		void set_Fondos(float _fondos){
			fondos = _fondos;
			}
		void set_Password(string _password){
				password = _password;
		}
		
		//Getters	
		string get_Nombre();
		int get_NumeroCuenta();
		float get_Fondos();
		string get_Password();
	};
////////////////////////////////////////////////////////////////////////////////////////////////

//Getters
int Cuenta::get_NumeroCuenta(){
	return NumeroCuenta;
}
string Cuenta::get_Password(){
	return password;
}

float Cuenta::get_Fondos(){
	return fondos;
 }
 string Cuenta::get_Nombre(){
	return Nombre;
}
#endif
