/*
 Realiziar el siguiente patron en C/C++
 *
 **
 ***
 ****
 *****
 */

#include<iostream>
using namespace std;

int main()
{
	for(int i = 0; i<5; i++) {
		for(int j = 0; j <= i; j++) {
			
			cout<<"*";
		}
		cout<<endl;
	}
	
	
	return 0;
	
}
