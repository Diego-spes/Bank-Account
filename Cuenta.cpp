 class Cuenta{
 	private:
 		string Nombre,password;
	    int edad,Fondos,Numerodecuenta;
	
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
////////
void Cuenta::set_Edad(int edad){
	edad=ed;
}
void Cuenta::set_Nombre(string Nombre){
	Nom=Nombre;
}


void Cuenta::set_Fondos(int Fondos){
	Fond=Fondos;
}
void Cuenta::set_Password(string password){
	pass=Password;
}
void Cuenta::set_Numerodecuenta(int Numerodecuenta){
	Num=Numerodecuenta;
}
//Gette
}
int Cuenta::get_edad(){
	return ed;
}
string Cuenta::get_Nombre(){
	return Nom:
}

int Cuenta::get_Numerodecuenta(){
	return Num;
}


string Cuenta::get_Password(){
	return pass;
}
int CuentaAhorro::get_Fondos(){
	return Fond;
 }
