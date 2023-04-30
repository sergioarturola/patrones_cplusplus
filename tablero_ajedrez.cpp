/*
 imprimir el siguiente patron 
 * * * * * *
  * * * * * *
 * * * * * *
  * * * * * *
*/

#include<iostream>
using namespace std;

int main(){
	
	int n = 10;
	
	for(int i = 0; i<n; i++){
		for(int j = 0; j<n; j++){
			
			if(i%2== 0){
				if(j%2 != 0){
					cout<<" ";
				}
				else{
					cout<<"*";
				}
			}
			
			
			if(i%2 != 0){
				if(j%2 != 0){
					cout<<"*";
				}
				else{
					cout<<" ";
				}
			}
			
		}
		
		cout<<"\n";
	}


} //(i%2 == 0) && (j%2 != 0)
		