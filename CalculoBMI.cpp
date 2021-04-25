#include<iostream>
#include<iomanip>
using namespace std;

int main()
{
    
    double peso = 0.0, altura = 0.0, BMI = 0.0;
    int centinela =0; 
    
    cout << "   -----------------------"<<endl;
    
    cout << "     CALCULADORA DE BMI"<<endl;
    cout << "   -----------------------"<<endl;
    cout <<endl;
    
    //Ciclo while que permite repetir el proceso las veces que el usuario desee.
    while(centinela == 0){
    	cout << "Ingrese su peso en libras: ";
    	cin>>peso;
    	cout << "Ingrese su altura en pulgadas: ";
    	cin>>altura;
    	cout<<endl;
    
    	BMI = (peso * 703)/(altura * altura);
    
        //Validacion del Indice de Masa Corporal
    	if(BMI < 18.5){
      		cout<<"Su BMI es: "<<fixed<<setprecision(2)<<BMI;
      
    		}else if(BMI >=18.5 && BMI <= 24.9){
      			cout<<"Su BMI es: "<<fixed<<setprecision(2)<<BMI;
      
    			}else if(BMI>=25 && BMI<=29.9){
      				cout<<"Su BMI es:"<<fixed<<setprecision(2)<<BMI;
      
    				}else if(BMI > 30){
      					cout<<"Su BMI es: "<<fixed<<setprecision(2)<<BMI;
    					}
    
					    cout<<"\n   ____________________________"<<endl;
					    cout<<"  |       Valores de BMI       |"<<endl;
					    cout<<"  |                            |"<<endl;
					    cout<<"  | Peso bajo  : menos de 18.5 |"<<endl;
					    cout<<"  | Peso Normal: 18.5 - 24.9   |"<<endl;
					    cout<<"  | Sobrepeso  : 25 - 29.9     |"<<endl;
					    cout<<"  | Obesidad   : 30 o mayor    |"<<endl;
					    cout<<"  ------------------------------"<<endl;	
					    
					    cout<<"Desea Realizar otro calculo?  Si = 0      No = 1: ";
					    cin>>centinela;
					    cout<<endl;
	}
   
    return 0;
}
