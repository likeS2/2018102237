#include <iostream>
using namespace std;

void multTable();

int main()
{
	multTable();
	
	return 0;
}

void multTable()
{
	for (int i = 1; i <= 8; i++)
	{
		for (int j = 1; j <= 9; j++)
		{
			cout << i << " * " << j << " = " << i * j << "\n";
		}
		cout << "\n";
	}
}
