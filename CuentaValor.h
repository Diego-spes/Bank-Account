#include <iostream>
#include <string>
class CuentaValor{
	private:
	    string Nombre,Correoelectronico,sexo,Numerodecuenta,password,Acciones,Bonos;
	    int edad,Fondos, cantAcciones,CantBonos;
	    
	    
	public:
	    Datospersonales{}: Nombre(""), edad(0), Correoelectronico(""), sexo(""), Numerodecuenta("0000 0000 0000 0000 0000 0000"), Fondos(0),Password("******"), Acciones(""), Bonos(""), CantAcciones(0), CantBonos(0) {}; // Valores por default
		Datospersonales(string Nom, int ed, string Res, string Corr, string sex, Numerodecuenta, string password,string Acciones, string Bonos, CantAcciones, CantBonos): Nombre(Nom), edad(ed), Residencia(Res),Correoelectronico(Corr), sexo(sex),Numerodecuenta(num), Fondos(Fond), Acciones(Ac), Bonos(Bon),CantAcciones(CA), CantBonos(CB) {};
			
		void setNombre(string Nom);
		void setEdad(int ed);
		void setResidencia(string Res);
		void setCorreo(string Corr);
		void setSexo(string sex);
		void setNumero(string nom);
		void setFondos(int fond);
		void setPassword(string pass);
		void setAcciones(string Ac);
		void setBonos(string Bon);
		void setCantAcciones(CA);
		void setCantBonos(CB);
};

