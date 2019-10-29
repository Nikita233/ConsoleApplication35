#include "pch.h"
#include <iostream>
using namespace std;

class Cargo
{
	int number, weight, volume;
public:
	static int counter = 1;
	Cargo(int w, int v) {
		this->weight = w;
		this->volume = v;
		this->number = counter;
		counter++;
		cout << "created cargo number " << this->number << endl;
		cout << "weight = " << w << "volume = " << v << endl;

	}
	~Cargo() {
		cout << "Destructor is workind" << endl;
	}
	int getWE(Cargo *X)
	{
		if (X == NULL) {
			cout << "Incorrect " << endl;
			return 0;
		}
		else return X->weight;
	}
	int getVO(Cargo *X)
	{
		if (X == NULL) {
			cout << "Incorrect " << endl;
			return 0;
		}
		else return X->volume;
	}
	void setWE(Cargo *X, int W)
	{
		if (X == NULL) {
			cout << "Error" << endl; return;
		}
		else {
			X->weight = W;
			cout << "New weight" << W << getWE(X) << endl;
		}
	}
	void setVO(Cargo *X, int V)
	{
		if (X == NULL) {
			cout << "Error" << endl; return;
		}
		else {
			X->volume = V;
			cout << "New volume" << V << getVO(X) << endl;
		};
		void setNU(Cargo *X, int N);
		void getNU(Cargo *X, int N);


	}

	void show(Cargo *X);

}CC;
