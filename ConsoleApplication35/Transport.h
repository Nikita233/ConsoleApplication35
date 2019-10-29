#include "pch.h"
#include <iostream>
using namespace std;

class Transport
{
	char type; //collection??????
	int number;
	int capacity;
	int maxweight;
	int velocity;

public:
	int emptyspace;
	int emptyweight;
	int loading;
	int uploading;
	routlist *rout;




	Transport() {
		cout << "creatd empty" << endl;
		this->number = 0;
		this->capacity = 0; this->emptyspace = 0;

		this->maxweight = 0; this->emptyweight = 0;
		this->type = 0;
		this->rout = NULL;
	}

	Transport(char t, int n, int c, int m, int v, int l, int u) {
		this->type = t;
		this->number = n;

		this->capacity = c; this->emptyspace = c;
		this->maxweight = m; this->emptyweight = m;
		this->velocity = v;
		this->loading = l; this->unloading = u;
		this->rout = NULL;
		cout << "created transport options" << endl;
		cout << "type = " << t << endl;
		cout << "number = " << n << endl;
		cout << "capacity = " << c << endl;
		cout << "maxweight = " << m << endl;

	}

	~Transport() {
		cout << "Destructor of “ <<this->number<<” is workind" << endl;
	}
	// Завантажити  вантаж С на транспорт Х в момент часу Т 
	// на складі W
	void load(Transport *X, cargo *C, int T, warehouse *W);

	// Розвантажити ….. 

	void upload(Transport *X, cargo *C, int T, warehouse *W);


	// 
	void starttime(Transport *X); void stoptime(Transport *X);
}
TT;
