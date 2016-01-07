#include "Singleton.h"

#include <iostream>

using namespace std;

int show()
{
	cout << Singleton::GetCount() << endl;
	return 0;
}

int main()
{
	show();
	Singleton * s = Singleton::Instance();
	show();
	s->Close();
	show();
	s->Close();
	show();
	system("pause");
	return 0;
}
