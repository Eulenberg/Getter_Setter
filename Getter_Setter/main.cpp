#include "Int_Werte.h"
#include <iostream>

using namespace std;


int main()
{

	Int_Werte Zahlen{ 1, 2 };

	cout << "Erste Zahl ist: " << Zahlen.get_intA() << " " << "Zweite Zahl ist: " << Zahlen.get_intB() << endl;


	Zahlen.set_intA(5);
	Zahlen.set_intB(10);

	cout << "Erste Zahl ist: " << Zahlen.get_intA() << " " << "Zweite Zahl ist: " << Zahlen.get_intB() << endl;






	
	return 0;
}