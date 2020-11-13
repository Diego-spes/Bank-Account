#include <iostream>
#include <string>
class CuentaAhorro{
	private:
	    string Nombre,Correoelectronico,Residencia,sexo,Numerodecuenta,password;
	    int edad,Fondos;
	    
	public:
	    Datospersonales{}: Nombre(""), edad(0), Correoelectronico(""), sexo(""),Residencia(""), Numerodecuenta("0000 0000 0000 0000 0000 0000"), Fondos(0),Password("******"){}; // Valores por default
		Datospersonales(string Nom, int ed, string Res, string Corr, string sex, string Num, string password, int Fondos): Nombre(Nom), edad(ed), Residencia(Res),Correoelectronico(Corr), sexo(sex),Numerodecuenta(num), Fondos(Fond),Password(pass){};
		//setters	
		void set_Nombre(string Nombre);
		void set_Edad(int edad);
		void set_Residencia(string Residencia);
		void set_Correo(string Correoelectronico);
		void set_Sexo(string sexo);
		void set_Numero(string Numerodecuenta);
		void set_Fondos(int Fondos);
		void set_Password(string password);
		//Getters	
		void get_Nombre();
		void get_Edad();
		void get_Residencia();
		void get_Correo();
		void get_Sexo();
		void get_Numero();
		void get_Fondos();
		void get_Password();
};

//Setter
void CuentaAhorro::set_Correo(string Correoelectronico){
	Corr=Correoelectronico;
}
void CuentaAhorro::set_Edad(int edad){
	edad=ed;
}
void CuentaAhorro::set_Nombre(string Nombre){
	Nom=Nombre;
}
void CuentaAhorro::set_Residencia(string Residencia){
	Res=Residencia;
}
void CuentaAhorro::set_Sexo(string sexo){
	sex=sexo;
}
void CuentaAhorro::set_Fondos(int Fondos){
	Fond=Fondos;
}
void CuentaAhorro::set_Password(string password){
	pass=Password;
}
void CuentaAhorro::set_Numerodecuenta(string Numerodecuenta){
	Num=Numerodecuenta;
}
//Getter
string CuentaAhorro::get_Correo(){
	return Corr
}
int CuentaAhorro::get_edad(){
	return ed;
}
string CuentaAhorro::get_Nombre(){
	return Nom:
}
string CuentaAhorro::get_Residencia(){
	return Res;
}
string CuentaAhorro::get_Numerodecuenta(){
	return Num;
}
string CuentaAhorro::get_Sexo(){
	return sex;
}
string CuentaAhorro::get_Password(){
	return pass;
}
int CuentaAhorro::get_Fondos(){
	return Fond;
}
