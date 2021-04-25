#include "Number.h"
#include "Real.h"
#include "Object.h"
#include <iostream>

using namespace std;
int main()
{
	Number k;
	bool result;
	do
	{
		try
		{
			result = true;
			cin >> k;
		}
		catch (invalid_argument e)
		{
			result = false;
			cerr << e.what() << endl;
		}
		catch (bad_exception& e)
		{
			result = false;
			cerr << e.what() << endl;
		}
	} while (!result);
	cout << k;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	k.Sum();
	k.Div_x1_x2();
	k.Div_x2_x1();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	Real g;
	bool result2;
	do
	{
		try
		{
			result = true;
			cin >> g;
		}
		catch (const char* str)
		{
			result = false;
			cerr << str << endl;
		}
		catch (BadException e)
		{
			cerr << e.what() << endl;
			result = false;
		}
	} while (!result);
	cout << g;
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	g.set_l(k);
	g.Step1();
	g.Step2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	g.Log1();
	g.Log2();
	cout << "kilkist elementiv klasu Complex: " << Object::Count() << endl;
	return 0;
}