#include<iostream>
using namespace std;

template<typename T> T max(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	int a = 10;
	int b = 11;
	cout << max(a, b) << endl;
	return 0;
}