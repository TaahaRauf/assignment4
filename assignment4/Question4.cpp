#include<iostream>
using namespace std;

void MIX(int A[], int B[],int C[],int M,int N) {
	int EvenCount=0;
	int OddCount=0;
	int oddArray[100];
	int evenArray[100];
	for (int i = 0; i < M; i++) {
		if (A[i] % 2 == 0) {
			evenArray[EvenCount] = A[i];
			EvenCount++;
		}
	}
	for (int i = 0; i < N; i++) {
		if (B[i] % 2 == 0) {
			evenArray[EvenCount] = B[i];
			EvenCount++;
		}
	}
	for (int i = N-1; i >= 0; i--) {
		if (B[i] % 2 != 0) {
			oddArray[OddCount] = B[i];
			OddCount++;
		}
	}
	for (int i = M - 1; i >= 0; i--) {
		if (A[i] % 2 != 0) {
			oddArray[OddCount] = A[i];
			OddCount++;
		}
	}
	int i = 0;
	for (i = 0; i < EvenCount; i++) {
		C[i] = evenArray[i];
	}

	for (int j = 0; j < OddCount; j++) {
		C[i] = oddArray[j];
		i++;
	}
	cout << "The sorted array is " << endl;
	for (int j = 0; j < (M + N); j++) {
		cout << C[j] << " ";
	}
}
int main()
{	
	int A[100] = { 3, 2, 1, 7, 6, 3 };
	int B[100] = { 9, 3, 5, 6, 2, 8, 10 };
	int C[100];
	MIX(A, B, C, 6, 7);
}