//FiboSeries.cpp: Fibonacci numbers
#include <iostream>
#include <chrono>  // for high_resolution_clock
using namespace std;
void Fibonacci(int[], int);
int main(void) {
	int Fibo[320000];
	const int maxIndex = 1000;
	for (int i = 1; i <= 10; i++) {
		auto start = chrono::high_resolution_clock::now();
		for (int j = 0; j < i * maxIndex; j++)
			Fibo[j] = 0;
		Fibonacci(Fibo, maxIndex);
		cout << Fibo << endl;
		auto finish = chrono::high_resolution_clock::now();
		chrono::duration<double> elapsed = finish - start;
		cout << "Row and Col size = " << i << ". Elapsed time: " << elapsed.count() << " s\n";
	}
	return 1;
}

void Fibonacci(int a[], int rows)
{
	if (rows <= 1) cout << rows << endl;
	else
	{
		//{ recurive algorithm으로 구현}
		// a[i+2] = a[i+1] +a[i] + a[i-1]
	}
}