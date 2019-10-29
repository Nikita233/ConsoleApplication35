#include "pch.h"
#include <iostream>
using namespace std;

class Warehause
{
	double latitude;
	double londitude;
public:
	Warehause *next;
	Warehause() {
		cout << "creatd empty" << endl;
		this->latitude = 0;
		this->londitude = 0;
		this->next = NULL;
	}
	Warehause(double a, double o) {
		this->latitude = a;
		this->londitude = o;
		this->next = NULL;
		cout << "created warehause coordinates" << endl;
		cout << "latitude = " << a << endl;
		cout << "londitude = " << o << endl;
	}
	~Warehause() {
		cout << "Destructor is workind" << endl;
	}
	int getLA(Warehause *X)
	{
		if (X == NULL) {
			cout << "Incorrect " << endl;
			return 0;
		}
		else return X->latitude;
	}
	int getLO(Warehause *X)
	{
		if (X == NULL) {
			cout << "Incorrect " << endl;
			return 0;
		}
		else return X->londitude;
	}
	void setLA(Warehause *X, int A)
	{
		if (X == NULL) {
			cout << "Error" << endl; return;
		}
		else {
			X->latitude = A;
			cout << "New Latitude" << A << getLA(X) << endl;
		}
	}
	void setLO(Warehause *X, int O)
	{
		if (X == NULL) {
			cout << "Error" << endl; return;
		}
		else {
			X->latitude = O;
			cout << "New Londitude" << O << getLO(X) << endl;
		};
	}
	Warehause* mekeYard(int Y);
	void show(Warehause *X);
	void deletelist(Warehause *X);
}WW;
