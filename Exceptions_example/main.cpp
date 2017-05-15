#include <iostream>
#include <conio.h>

void f1()
{
	throw (short)0;
}

void f2()
{
		f1();
}

using namespace std;

int main()
{
	if (false)
	{
		return 0;
	}
	else
	{
		try
		{
			f2();
			cout << "First String" << endl;
		}

		catch (int e)
		{
			cout << e << endl << "Error!" << endl;
		}
		catch (short)
		{
			cout << "Short!" << endl;
		}
		catch (...)
		{
			cout << "Nothing!" << endl;
		}
		cout << "Good!" << endl;
		_getch();
		return 0;
	}
}