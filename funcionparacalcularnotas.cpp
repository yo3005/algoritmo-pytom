#include <iostream>

using namespace std;


void notaAlumno(float nota){
	
	if (nota >=18 && nota<=20){
		cout<<"tu nota es: A";
	}
	else if(nota>=15 && nota<=18){
		
		cout<<"tu nota es: B";
	}
		
	else if(nota>=12 && nota <=15){
		cout<<"tu nota es: C";
			
	}				
	
	else if(nota>=9 && nota <=12){
		
		cout<<"tu nota es: D";
		
	}
	else if(nota >=1 && nota<=9){
		cout<<"tu nota es: E";
	}
		
}



int main(){

	float nota;
	do{
		cout<<"ingrese su nota ";
	cin>>nota;
	}while(nota >0);
	cout<<"ingrese su nota ";
	cin>>nota;
	
	notaAlumno(nota);
	
	
	return 0;
}