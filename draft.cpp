//прменение операции отношения
#include <iostream>
#include <locale.h>
#include <iomanip>

using namespace std;

const unsigned long limit = 4294967295;

int main()
{
	setlocale(LC_ALL, "Rus");

	unsigned long next = 0;
	unsigned long last = 1;
	while (next < limit/2)
	{
		cout << last << " ";
		long sum = next + last;
		next = last;
		last = sum;
	}
	cout << endl;
}