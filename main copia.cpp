/*Diego Reséndiz fernández
Matricula: A01708017
Aqui en el main vamos a simular una aplicacion para crear una cuenta de banco
1.paso escoger el tipo de cuenta
2.paso crear la cuenta
3.paso ingresar el numero de cuenta y la contraseña para ingresar a la cuenta
4.paso seleccionar la opcion que quieras

apartir de aqui el usuario puede elegir hacer transacciones y demas cosas que una aplicacacion de banco puede ofrecer

#Correcciones:
1.Las correcciones hechas fueron el disminuir el numero de tipo de cuentas debido a la complejidad al momneto de programar el main
2.tambien se agrego una clase almacenamiento para que los administradores puedan ver las cuentas creadas y sus datos y todo eso esta almacenado en un 
array
3.se implemento agregacion entre los objetos de las clases y la clase Almacenador

#Consideraciones:
1. Este programam solo puede ser corrido en la consola
2. Esta hecho en el lenjuage C++ y fue programador con el codificador y el IDE de DevC++
3. Corre en todo los sistemas operativos debido a que esta hecho en C++
*/
#include <iostream>
#include <string>
#include <stdlib.h>
#include <time.h>
#include "CuentaEmpresarial.h"
#include "almacenador.h"
using namespace std;
   main() {
   	float _fondos, f, aux2;
 	string _Nombre, _password, _sede,p, aux;
 	int _edad,x,_NumeroCuenta,c, y, posicion=0;
    //Aqui le pedimos al usuario que nos digite que tipo de cuenta quiere hacer
 	cout<<"Hola buen dia"<<endl;
    cout<<"Veo que no tienes una cuenta... asi que creemos una"<<endl;
    cout<<"1. Cuenta Corriente"<<endl;
    cout<<"2. Cuenta Empresarial"<<endl;
    cout<<"Selecciona el numero del tipo de cuenta que deseas crear: "<<endl;
    cin>>x;
    //bulce en caso de que se equivoque al digitar el dato
    while((x<=0) or (x>=3)){
        cout<<"1. Cuenta Corriente"<<endl;
    	cout<<"2. Cuenta Empresarial"<<endl;
        cout<<"Selecciona el numero del tipo de cuenta que deseas crear y asegurate en digitar el numero correspondiente"<<endl;
        cin>>x;
        }
    //despues en base a su desicion se muestran mensajes para pedirle los datos necesarios para crear la cuenta
    switch(x){
        case 1:{
        	cout<<"Digite su nombre"<<endl;
            cin>>_Nombre;
            cout<<""<<endl;
            cout<<"Digite su edad: "<<endl;
            cin>>_edad;
            cout<<""<<endl;
            cout<<"Digite Su contraseña: "<<endl;
            cin>>_password;
            cout<<""<<endl;
            srand(time(NULL));
	        _NumeroCuenta= rand() % (1000000000000000000001-100000000000000000000); //Creamos un numero de cuenta aleatorio
            Cuenta Cuenta1 (_Nombre,_password,0,_NumeroCuenta); //Y creamos un onjeto a partir de los datos que nos digitó
            posicion=posicion+1;
            cout<<"Felicidades has creado tu cuenta Corriente"<<endl; 
            cout<<""<<endl;
            cout<<"Tu Nombre es: "<<Cuenta1.get_Nombre()<<endl;
            cout<<""<<endl;
            cout<<"Su edad es: "<<_edad<<endl;
            cout<<""<<endl;
            cout<<"La contraseña que generaste es: "<<Cuenta1.get_Password()<<endl;
            cout<<""<<endl;
            cout<<" Su Numero de Cuenta es: "<<Cuenta1.get_NumeroCuenta()<<endl;
			break;
		}  
		//despues en base a su desicion se muestran mensajes para pedirle los datos necesarios para crear la cuenta y en este caso es una cuenta empresarial  
        case 2:{
        	cout<<"Digite el Nombre de la Empresa: "<<endl;
            cin>>_Nombre;
            cout<<""<<endl;
            cout<<"Digite la Contraseña Empresarial: "<<endl;
            cin>>_password;
            cout<<""<<endl;
            cout<<"Digite el pais en donde se tiene la Sede de la Empresa: "<<endl;
            cin>>_sede;
            cout<<""<<endl;
            srand(time(NULL));
	        _NumeroCuenta= rand()%(1000000000000000000001-100000000000000000000);//Creamos un numero de cuenta aleatorio
            CuentaEmpresarial Empresa1 (_Nombre,_password, 0, _NumeroCuenta, _sede);//Y creamos un onjeto a partir de los datos que nos digitó
            cout<<"Felicidades has creado tu cuenta Empresarial"<<endl;
            cout<<""<<endl;
            cout<<"El Nombre de su Empresa es: "<<Empresa1.get_Nombre()<<endl;
            cout<<""<<endl;
            cout<<"La contraseña que generaste es: "<<Empresa1.get_Password()<<endl;
            cout<<""<<endl;
            cout<<" Su Numero de Cuenta es: "<<Empresa1.get_NumeroCuenta()<<endl;
			break;
		} 
	}	
	//Ya teniendo una cuenta le pedimos al usuario que digite el numero de la cuenta y su contraseña para ingresar
	cout<<""<<endl;
	cout<<"Ahora que tienes una cuenta ingresa a ella con tu contraseña "<<endl;
	cout<<""<<endl;
    cout<<"Digita el numero de cuenta: "<<endl;
    cin>>c;
    cout<<""<<endl;
    cout<<"Digita la contraseña de la cuenta: "<<endl;
    cin>>p;
    cout<<""<<endl;
    //bulce en caso de que se equivoque al digitar el dato
	while((p!=_password) and (c!=_NumeroCuenta)){
		cout<<"Error. por favor asegurate que el Numero de Cuenta sea correcto y la Contraseña corresponda con la del Numero de Cuenta ingresado "<<endl;
		cout<<""<<endl;
        cout<<"Digita el numero de cuenta: "<<endl;
        cin>>c;
        cout<<""<<endl;
        cout<<"Digita la contraseña de la cuenta: "<<endl;
        cin>>p;
        cout<<""<<endl;
	}
	bool d=true;
	while(d=true){
		cout<<"1.Transferir"<<endl;
        cout<<""<<endl;
        cout<<"2.Solicitar contraseña"<<endl;
        cout<<""<<endl;
        cout<<"3.Solicitar Datos"<<endl;
        cout<<""<<endl;
        cout<<"4.Cambiar contraseña"<<endl;
        cout<<""<<endl;
        cout<<"5.Agregar fondos"<<endl;
        cout<<""<<endl;
        cout<<"6.Salir"<<endl;
        cout<<""<<endl;
        cout<<"Hola. por favor digita el numero de la opcion que quieres llevar acabo: "<<endl;
        cin>>y;
    
	   bool Continuar=true;
       switch(y){
    	    case 1:{
    		    cout<<"Digite el Monto de dinero que va a transferir: ";
    		    cin>>f;
    		    while(Continuar=true){
    			    if (_fondos>f){
    			    	cout<<"Transaccion exitosa"<<endl;
    			    	_fondos=_fondos-f;
		                Continuar=false;
		                break;
					} 
	               if (f>_fondos){
	               	cout<<"No posee el saldo sufieciente para transferir"<<endl;
		                Continuar=false;
		                break;
				   }
				cout<<""<<endl;
				   break;
				
			   }
	                
	                Cuenta Cuenta1 (_Nombre,_password,0,_NumeroCuenta);
	                if (x=1){
	                	Cuenta1.set_Fondos(_fondos);
						cout<<""<<endl;	
					}
	                else{
	                	CuentaEmpresarial Empresa1 (_Nombre,_password,0,_NumeroCuenta,_sede);
	                	Empresa1.set_Fondos(_fondos);
	                	cout<<""<<endl;
					}
					cout<<""<<endl;
	                break;	
		           }
		    case 2:{
			        if(x=2){
			        	CuentaEmpresarial Empresa1 (_Nombre,_password,0,_NumeroCuenta,_sede);
			    	    cout<<"Tu Contraseña es: "<<Empresa1.get_Password()<<endl;
				   }
				   else{
				   	    
				   	    Cuenta Cuenta1 (_Nombre,_password,0,_NumeroCuenta);
					    cout<<"Tu Contraseña es: "<<Cuenta1.get_Password()<<endl;
					     cout<<""<<endl;
				   }
				   cout<<""<<endl; 
			break;
		    }
		
		    case 3:{
			        if(x==1){
			        	Cuenta Cuenta1 (_Nombre,_password,0,_NumeroCuenta);
			    	    cout<<"Tu Nombre es: "<<Cuenta1.get_Nombre()<<endl;
                        cout<<""<<endl;
                        cout<<"Su edad es: "<<_edad<<endl;
                        cout<<""<<endl;
                        cout<<" Su Numero de Cuenta es: "<<Cuenta1.get_NumeroCuenta()<<endl;
                        cout<<""<<endl;
				   }
                    else{
                    	CuentaEmpresarial Empresa1 (_Nombre,_password,0,_NumeroCuenta,_sede);
                	    cout<<"El Nombre de su Empresa es: "<<Empresa1.get_Nombre()<<endl;
                        cout<<""<<endl;
                        cout<<" Su Numero de Cuenta es: "<<Empresa1.get_NumeroCuenta()<<endl;
                        cout<<""<<endl;
				   }
                   cout<<""<<endl;
			break;
		    }
		    case 4:{
			    cout<<"Digita la nueva Constraseña: "<<endl;
			    cin>>aux;
			    _password=aux;
			    if(x=1){
			    	Cuenta Cuenta1 (_Nombre,_password,0,_NumeroCuenta);
			    	Cuenta1.set_Password(_password);
			    	cout<<"Su nueva contraseña es: "<<Cuenta1.get_Password()<<endl;
			    	cout<<""<<endl;
				}
			    else{
			    	CuentaEmpresarial Empresa1 (_Nombre,_password,0,_NumeroCuenta,_sede);
			    	Empresa1.set_Password(_password);
			        cout<<"Su nueva contraseña es: "<<Empresa1.get_Password()<<endl;
			        cout<<""<<endl;
				}
			    cout<<""<<endl;      
			break;
		}
	        case 5:{
	        	cout<<"Digite el saldo que va a depositar: "<<endl;
	        	cin>>aux2;
	        	if(x=1){
	        		Cuenta Cuenta1 (_Nombre,_password,0,_NumeroCuenta);
	        		_fondos=_fondos+aux2;
	        		Cuenta1.set_Fondos(_fondos);
	        		cout<<"Su salo actual es de: "<<Cuenta1.get_Fondos()<<endl;
	        		cout<<""<<endl;
				}
	        	else{
	        		CuentaEmpresarial Empresa1 (_Nombre,_password,0,_NumeroCuenta,_sede);
	        		Empresa1.set_Fondos(_fondos);
	        		cout<<"Su salo actual es de: "<<Empresa1.get_Fondos()<<endl;
	        		cout<<""<<endl;
	        		
				}
				cout<<""<<endl;
				break;
			}
			case 6:{
				cout<<"Adios"<<endl;
				d=false;
				Continuar=false;
				break;
				//Dependiendo de la eleccion en x almacenamos la cuenta en un array especial en la clase Almacenador
				//En esta parte dependiendo de la eleccion de la cuenta es
				if(x=1){
		            Almacenador almacen1;
		            posicion=posicion+1;
                    almacen1.agregaCuenta(_Nombre,_password,0,_NumeroCuenta, posicion);
                	}
	                else{
		                Almacenador almacen1;
		                posicion=posicion+1;
                         almacen1.agregaEmpresa(_Nombre,_password,0,_NumeroCuenta, _sede, posicion);
	               }
			}
	}
		   
}
return 0; 
}

			
			
			
