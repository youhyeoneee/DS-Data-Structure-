#include "Calc.h"

int main(void)
{
	Calc<int>cal1;
	Calc<double>cal2;

	cout << "정수 계산"<<cal1.Add(3, 4)<<" "<< cal1.Sub(3, 4);
	cout << endl;
	cout << "실수 계산"<< cal2.Add(7.2, 2.7)<< " " << cal2.Sub(7.2, 2.7);
	cout << endl;
	cout << "둘다 계산" << cal2.Add(3, 4.4) << " " << cal2.Sub(3, 4.4);
	cout << endl;
}