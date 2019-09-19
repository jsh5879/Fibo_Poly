//program 1.25: Fibonacci numbers
#include <iostream>
using namespace std;
void Fibonacci(int*, int);
int main(void) {
	int Fibo[1000];
	const int maxIndex = 1000;
	for (int i = 0; i < maxIndex; i++)
		Fibo[i] = 0;
	Fibonacci(Fibo, maxIndex);
	cout << endl;
}

void Fibonacci(int a[], int rows)
{
	a[0] = 0;

	if (rows == 1) {
		a[rows] = rows;
		cout << 0 << endl;
		cout << rows << endl;
		return;
	}
	else if (rows == 2) {
		Fibonacci(a, rows - 1);
		a[rows] = 1;
		cout << a[rows] << endl;
		return;
	}
	else
	{
		Fibonacci(a, rows - 1);
		a[rows] = a[rows - 1] + a[rows - 2] + a[rows - 3];
		cout << a[rows] << endl;
		return;
	}
}
//void Fibonacci(int a[], int rows)
//{ recurive algorithm으로 구현}