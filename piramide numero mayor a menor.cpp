/*
 Generar el siguiente patron en C/C++
 321
 21
 1
*/

#include<iostream>
using namespace std;

int main(){
  
  int numero = 6;
  
  for(int i = 6; i>=1; i--){
  	for(int j = i-1; j>=1; j--){
  	     cout<<j;	
	  }
	  cout<<"\n";
  	
  }
  
  
  return 0;
  
}
