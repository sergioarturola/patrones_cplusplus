#include<iostream>
using namespace std;

void escalera (int numero);

int main(){
	
	int numero;
	cout<<"Digita numero: "; cin>>numero;
	escalera(numero);	
}


void escalera(int numero){
	
	int filas = numero, columnas = numero;
	char piso = '_';
	char alt = '|';
		
	if(numero > 0){
		
		for(int i = 0; i<=numero; i++){
	    	for(int j = 0; j<=numero; j++){
			
			if((i+j) == (filas-1)){
				
			   cout<<piso<<alt;	
			if(i == 0 && j == 4){
				cout<<piso;
			}
			 
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<"\n";
	 }
	
    }
	
	
    if(numero < 0){
      
      numero = numero*-1;
		for(int i = 0; i<numero; i++){
		 for(int j = 0; j<numero; j++){
			
			if(i == j ){
			  cout<<alt<<piso;	
			}
			else{
				cout<<" ";
			}
			
		}
		cout<<"\n";
	}
	
  }
  
  
  if(numero == 0){
  	cout<<piso<<piso;
  }
		
}