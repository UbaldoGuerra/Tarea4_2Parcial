#include <iostream>
using namespace std; 

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char** argv) {
	int tabla;
	int mult; 
	
	cout<<"\n";
	cout<<" Ingrese que tabla desea ver: ";
	cin>>tabla;
	cout<<"\n";
	cout<<" Tabla del "<<tabla<<endl; 
	cout<<"\n";
	for (int i = 10; i >=0; i--){
		mult = i*tabla;
		
		cout<<tabla<<" x "<<i<<" = "<<mult<<endl; 
	}
	return 0;
}
