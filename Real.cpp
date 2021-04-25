#include "Real.h"
#include "Number.h"
#include "BadExeption.h"
#include <iostream>
#include <math.h>
#include <string>
#include <sstream>

using namespace std;

Real::Real()
{
	y1 = 0;
	y2 = 0;
}
Real::Real(double stepin1, double stepin2)
{
	y1 = stepin1;
	y2 = stepin2;
}
istream& operator >>(istream& in, Real& p)
{
	cout << "vvedit stepin do yakoho treba pidnesty pershe chyslo:"; in >> p.y1;
	cout << "vvedit stepin do yakoho treba pidnesty druhe chyslo:"; in >> p.y2;
	if (p.y1 == 0)
		throw "pry pidnesenny do sttepennia otrymaemo 1";
	if (p.y2 == 0)
		throw BadException("pry piddenesenni do stepennia otrymaemo 1");
	return in;
}
ostream& operator <<(ostream& out, const Real& p)
{
	out << string(p) << endl;
	return out;
}
Real::operator string() const
{
	stringstream sout;
	sout << "stepin dlia pershoho chysla: " << y1 << endl;
	sout << "stepin dlia druhoho chysla: " << y2 << endl;
	return sout.str();
}
void Real::Step1()
{
	cout << "rezultat pidnesennia do stepenia pershoho chysla: " << pow(l.getDodanok1(), y1) << endl;
}
void Real::Step2()
{
	cout << "rezultat pidnesennia do stepenia druhoho chysla: " << pow(l.getDodanok2(), y2) << endl;
}
void Real::Log1()
{
	cout << "rezultat logaryfmuvannia pershoho chysla: " << log10(l.getDodanok1()) << endl;
}
void Real::Log2()
{
	cout << "rezultat logaryfmuvannia druhoho chysla: " << log10(l.getDodanok2()) << endl;
}