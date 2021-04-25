#pragma once
#include "Number.h"
#include "BadExeption.h"
#include <iostream>
#include <string>
#include <sstream>
using namespace std;

class Real
{
public:
	Number l;
	double y1, y2;
public:
	double getStepin1() const { return y1; }
	double getStepin2() const { return y2; }
	Number get_l() const { return l; }

	void setStepin1(double value) { y1 = value; }
	void setStepin2(double value) { y2 = value; }
	void set_l(Number value) { l = value; }

	Real();
	Real(double, double);
	operator string() const;

	friend ostream& operator << (ostream&, const Real&);
	friend istream& operator >> (istream&, Real&) throw (BadException, const char*);

	void Step1();
	void Step2();
	void Log1();
	void Log2();

};

