
#include <iostream>
#include <cstdlib>
#include <conio.h>

using namespace std;

/*
	Source by Programiz (https://www.programiz.com)
	Modified For Learn by RK
	I.D.E : VS2022
*/

int main() {
	char numberString[] = "-32.40";
	double numberInDouble;

	cout << "Number in  String = " << numberString << endl;

	numberInDouble = atof(numberString);
	cout << "Number in Double = " << numberInDouble;

	_getch();
	return 0;
}