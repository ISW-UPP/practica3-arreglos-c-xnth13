
#include <iostream>
using namespace std;

int main()
{
	/*int i, numeros[10];
	for ( i = 0; i < 10; i++)
	{
		cout << "ingresa un numero entero: ";
		cin >> numeros[i];

	}
	for ( i = 9; i >= 0; i--)
	{
		cout << "sus numeros al inverso son: " << numeros[i] << endl;
	}
	return 0;
	*/
	int i, numeros[10];
	float media;

	for (i = 0; i < 10; i++)
	{
		cout << "ingresa un numero entero:";
		cin >> numeros[i];
	}
	for ( i = 0; i < 10; i++)
	{
		media += numeros[i];
	}
	for ( i = 0; i > media; i++)
	{
		cout << "los numeros mayores a la media son:" << endl;
	}
}


