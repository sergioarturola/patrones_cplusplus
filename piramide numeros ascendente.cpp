/*
 Generar el siguiente patron
 1
 22
 333
 4444
*/

#include<iostream>
#include<conio.h>
using namespace std;

int main(){
	
	int num = 0;
	
	for(int i = 0; i<6; i++){
		for(int j = 0; j-i; j++){
			cout<<num;
		}
		num++;
		cout<<"\n";
	}
	
	getch();
	return 0;
	
}
