#include <iostream>
#include <string>
class CuentaAhorro{
	private:
	    string Nombre,Correoelectronico,Residencia,sexo,Numerodecuenta,password;
	    int edad,Fondos;
	    
	public:
	    Datospersonales{}: Nombre(""), edad(0), Correoelectronico(""), sexo(""),Residencia(""), Numerodecuenta("0000 0000 0000 0000 0000 0000"), Fondos(0),Password("******"){}; // Valores por default
		Datospersonales(string Nom, int ed, string Res, string Corr, string sex, Numerodecuenta, string password, int Fondos): Nombre(Nom), edad(ed), Residencia(Res),Correoelectronico(Corr), sexo(sex),Numerodecuenta(num), Fondos(Fond){};
			
		void setNombre(string Nom);
		void setEdad(int ed);
		void setResidencia(string Res);
		void setCorreo(string Corr);
		void setSexo(string sex);
		void setNumero(string nom);
		void setFondos(int fond);
		void setPassword(string pass);
};
