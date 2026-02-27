#include <iostream>
#include <cmath>
using namespace std;

int main() {
	double baseTop, baseBottom, sideLeft, sideRight, perimeter, area, midLine, baseTri, halfPer, height;	//valuables declaration
	cout << "type proportions of trapezoid in the next order:\n"	//manifiesto
		<< "top base, bottom base, left side and right side\n"
		<< "conditions must be met:\n"
		<< "values are Natural and >0\n";
	cin >> baseTop >> baseBottom >> sideLeft >> sideRight;	//inputs of trapezoid
	while(baseTop<=0 || baseBottom<=0 || sideLeft<=0 || sideRight<=0) {	//double check
		cout << "something's wrong, try again\n";
		cin >> baseTop >> baseBottom >> sideLeft >> sideRight;
	};	//less getit

	perimeter = baseTop+baseBottom+sideLeft+sideRight;
	midLine = (baseTop+baseBottom)/2;
	baseTri = fabs(baseTop-baseBottom);
	halfPer = (baseTri+sideLeft+sideRight)/2;
	height = sqrt(halfPer*(halfPer-baseTri)*(halfPer-sideLeft)*(halfPer-sideRight))/baseTri;
	area = midLine*height;
	area = midLine * sqrt(pow(sideLeft,2) - pow(pow(fabs(baseBottom-baseTop),2)+pow(sideLeft,2)-pow(sideRight,2),2) / (2*(baseBottom-baseTop)));

	cout << "resultados:"	//parte final
		<< "\n perimeter: " << perimeter
		<< "\n area: " << area
		<< "\n middle line: " << midLine;
	return 0;
}
