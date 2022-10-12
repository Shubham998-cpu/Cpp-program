Add Two Numbers

// code

#include <iostream>
using namespace std;

int addTwoNumber(int A, int B)
{
	while (A > 0) {
		A--;
		B++;
	}

	while (A < 0) {
		A++;
		B--;
	}

	return B;
}

int main()
{
	int A = 4, B = 11;

	cout << "sum = " << addTwoNumber(A, B);
	return 0;
}
