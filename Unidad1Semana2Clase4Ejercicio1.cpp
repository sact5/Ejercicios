#include<iostream>
using namespace std;

int main(){
	double calificacion;
	cout << "Ingrese la calificacion: ";
	cin >> calificacion;
	
	if( calificacion >= 90 ) // 90 o mas recibe una "A"
	cout << "A";
	else if( calificacion >= 80 ) // 80 o 89 recibe una "B"
	cout << "B";
	else if( calificacion >= 70 ) // 70 o 79 recibe una "C"
	cout << "C";
	else if( calificacion >= 60 ) // 60 o 69 recibe una "D"
	cout << "D";
	else // menos de 60 recibe "F"
	cout << "F";
}
