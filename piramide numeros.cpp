#include<iostream>
using namespace std;

int main(){
	
	int numero;
	
	cout<<"De que valor quieres la piramide?"; cin>>numero;
	
	for(int i = 1; i<= numero; i++){
		for(int j = 1; j<i; j++){
			cout<<j;
			
		}
		
		cout<<"\n";
	}
	
	return 0;
}
