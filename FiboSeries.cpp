//FiboSeries.cpp: Fibonacci numbers
#include <iostream>
#include <chrono>  // for high_resolution_clock
using namespace std;
int Fibonacci(int[], int);

int main(void) {
	int Fibo[320000];
	int val;
	const int maxIndex = 1000;
	for (int i = 1; i <= 10; i++) {
		auto start = chrono::high_resolution_clock::now();
		for (int j = 0; j < i * maxIndex; j++)
			Fibo[j] = 0;
		val = Fibonacci(Fibo, maxIndex);
		cout << val << endl;
		auto finish = chrono::high_resolution_clock::now();
		chrono::duration<double> elapsed = finish - start;
		cout << "Row and Col size = " << i << ". Elapsed time: " << elapsed.count() << " s\n";
	}
	return 1;
}

int Fibonacci(int a[], int rows)
{
	if (rows <= 1) cout << rows << endl;
	else 
	{	
		return Fibonacci(a, rows-1) + Fibonacci(a, rows - 2) + Fibonacci(a, rows - 3);
		//{ recurive algorithm으로 구현}
		// a[i+2] = a[i+1] +a[i] + a[i-1]
	}
}