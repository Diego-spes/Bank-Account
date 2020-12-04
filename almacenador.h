/*Diego Reséndiz fernández
Matricula: A01708017
este es la calse almacenador y lo que hace es almacenar las cuentas ue se crean*/
#ifndef ALMACENADOR_H_
#define ALMACENADOR_H_
#include "Cuenta.h"
#include "CuentaEmpresarial.h"
using namespace std;
class Almacenador{
	private:
		
		CuentaEmpresarial empresas[0];
		Cuenta cuenta[0];
		 
	public:
		Almacenador(){
		}
		//constructor
		//Cabeceras metodos
		void agregaCuenta(string, string, float, int, int);
		void agregaEmpresa(string, string,float,int,string,int);
};
//metodos
void Almacenador::agregaCuenta(string _Nombre, string _password, float _fondos, int _NumeroCuenta, int posicion){
	cuenta [posicion] = Cuenta (_Nombre, _password, _fondos, _NumeroCuenta);
}
void Almacenador::agregaEmpresa(string _Nombre, string _password, float _fondos, int _NumeroCuenta, string _sede, int posicion){
	empresas [posicion] = CuentaEmpresarial (_Nombre, _password, _fondos, _NumeroCuenta, _sede);
}
#endif
