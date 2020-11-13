#include <iostream>
#include <string>
class Cuentacorriente{
	private:
		string NombreEmpresa,Correoelectronico,Numerodecuenta,password;
	    int Fondos;
	    
	    
	    
	public:
	    Datospersonales{}: NombreEmpresa(""), Correoelectronico(""), Numerodecuenta("0000 0000 0000 0000 0000 0000"), Fondos(11781.50),Password("******"){}; // Valores por default
		Datospersonales(string NomEmp, string Corr, Numerodecuenta, string password, int Fondos): NombreEmpresa(Nom), Correoelectronico(Corr),Numerodecuenta(num), Fondos(Fond){};
			
		void setNombre(string Nom);
		void setCorreo(string Corr);
		void setNombreEmpresa(string nom);
		void setFondos(int fond);
		void setPassword(string pass);
};
