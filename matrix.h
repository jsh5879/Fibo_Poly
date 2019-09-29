#pragma once
//Matrix.h - square matrix multi C = A x B

void swap(int& left, int& right) {
	int temp = left;
	left = right;
	right = temp;
}

void Transpose(int** a, int n)
{
	for (int i = 0; i < n - 1; i++)
		for (int j = i + 1; j < n; j++)
			swap(a[i][j], a[j][i]);
}
void Add(int** a, int** b, int** c, int m, int n)
{
	for (int i = 0; i < m; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = a[i][j] + b[i][j];
		}
	}
}
void Multiply(int** a, int** b, int** c, int n)
{
	//c = a * b
	Transpose(b, n);
	for (int i = 0; i < n; i++)
	{
		for (int j = 0; j < n; j++)
		{
			c[i][j] = 0;
			for (int k = 0; k < n; k++)
				c[i][j] += a[i][k] * b[j][k];
		}
	}
}
