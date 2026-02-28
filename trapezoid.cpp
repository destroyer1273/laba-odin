#include <iostream>	//parte introductoria
#include <cmath>
#include <limits>	//4 numeric_limits!!1!
using namespace std;

int main() {
	double baseTop, baseBottom, sideLeft, sideRight, perimeter, midLine, area;	//main valuables declaration w/o initialization
	double abPwrd, cPwrd, dPwrd, exp1, exp1Pwrd, exp2, exp2Sqrd;	//valuables for area calculation (pwrd - powered, sqrd - squared, exp - expression)
	char ans;	//char for "menu"

	do {
		cout << "\n\nenter a paremeters of your trapezoid in the next order:\n"
			<< "top base, bottom base, left side, right side\n"
			<< "every number must be >0\n"
			<< "bases must be non-equal\n";
		cin >> baseTop >> baseBottom >> sideLeft >> sideRight;	//first initialization of side valuables
		while(baseTop<=0 || baseBottom<=0 || sideLeft<=0 || sideRight<=0 || baseTop == baseBottom) {	//if user entered parameters of non-existent trapezoid it won't pass
			cin.clear();	//RESET CIN ERROR FLAGS
			cin.ignore(numeric_limits<streamsize>::max(), '\n');	//CLEARING INPUT BUFFER
			cout << "something's wrong, try again\n";
			cin >> baseTop >> baseBottom >> sideLeft >> sideRight;
		};

		perimeter = baseTop+baseBottom+sideLeft+sideRight;
		midLine = (baseTop+baseBottom)/2;

		abPwrd = pow(baseBottom-baseTop, 2);
		cPwrd = pow(sideLeft, 2);
		dPwrd = pow(sideRight, 2);
		exp1 = (abPwrd+cPwrd-dPwrd)/(2*(baseBottom-baseTop));
		exp1Pwrd = pow(exp1, 2);
		exp2 = cPwrd-exp1Pwrd;
		exp2Sqrd = sqrt(exp2);
		area = (baseBottom+baseTop)/2*exp2Sqrd;

		cout << "resultados:"	//parte final
			<< "\n perimeter: " << perimeter
			<< "\n area: " << area
			<< "\n middle line: " << midLine
			//<< "\ndebug for area: " << abPwrd << " " << cPwrd << " " << dPwrd << " " << exp1 << " " << exp1Pwrd << " " << exp2 << " " << exp2Sqrd
			<< "\n\none more? (y/any): ";
		cin >> ans;
	} while(ans=='y');
	cout << "\nviva la UTEN\n";	//Universidad Técnica Estatal de Novosibirsk
	return 0;
}
