/*Un programa que solicite una edad (un entero) e indique en la salida estandar si la edad
introducida esta en el rango (18-25)*/

#include<iostream>

using namespace std;
int main (){
	
	int edad;
	cout<<"introduce tu edad y verifica si esta en el rango de 18-25: "; cin>>edad;
	
	if ((edad>=18)&&(edad<=25)){
		cout<<"\ntu edad esta en el rango de 18-25";
	}
	else{
		cout<<"tu edad no esta en el rango de 18-25";
	}
	
	
	return 0;
}
