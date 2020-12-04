/*Diego Reséndiz fernández
Matricula: A01708017

esta es la cuenta empresarial que es hija de la clase cuenta*/
#include <iostream>
#include <string>
#include "Cuenta.h"
#ifndef CUENTAEMPRESARIAL_H_
#define CUENTAEMPRESARIAL_H_
using namespace std;
/*Aqui se crea una subclase que es un hijo de la clase Cuenta y hereda todos sus atributos mas los suyso propios.*/
class CuentaEmpresarial : public Cuenta{ //se coloca de esta manera para indicar que esta clase tiene acceso a todos los metodos de la clase padre
	private:
		string sede;
		
	public:
		//La diferencia es que esta clase incluye un elemento mas
		//Constructor
		CuentaEmpresarial(string _Nombre, string _password,  float _fondos, int _NumeroCuenta, string _sede) : Cuenta(_Nombre, _password, _fondos, _NumeroCuenta){
			
			sede = _sede;
		}
		//Cabecera metdos
	    void set_sede(string _sede);
	
	     string get_sede();
};
//metodos
void CuentaEmpresarial::set_sede(string _sede){
			sede = _sede;
}
string CuentaEmpresarial::get_sede(){
	return sede;
}
#endif
