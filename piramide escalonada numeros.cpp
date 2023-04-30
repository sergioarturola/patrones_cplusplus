/*
 Crear el siguiente patron 
 3
 32
 321
*/

#include<iostream>
using namespace std;


int main(){
  
  int numero = 6;
  
  for(int i = 6; i>=1; i--){
  	for(int j= 6; j>=i; j--){
  		
  		cout<<j;
	  }
  	cout<<"\n";
  }	

return 0;	
}
