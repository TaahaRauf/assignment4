//#include <iostream>
//#include <cstdlib>
//using namespace std;
//void DeleteElement(int lottery[], int element, int size=5) {
//	for (int i = element; i < size; i++) {
//		lottery[element] = lottery[element + 1];
//	}
//}
//int main() {
//	int match=0;
//	srand((unsigned)time(0));
//	int lottery[5];
//	for (int i = 0; i < 5; i++) {
//		lottery[i] = (rand() % 10);
//	}
//	for (int i = 0; i < 5; i++) {
//		cout << lottery[i] << endl;
//	}
//	int user[5];
//	for (int i = 0; i < 5; i++) {
//		cout << "Enter your lottery number ";
//		cin >> user[i];
//	}
//	int size = 5;
//	for (int i = 0; i < 5; i++) {
//		for (int j = 0; j <= size; j++) {
//			if (user[i] == lottery[j]) {
//				match++;
//				DeleteElement(lottery, j); // This ensures that repeated numbers are not counted.
//				size = size - 1;
//			}
//		}
//	}
//
//	cout << "The matching digits were " << match <<endl;
//	if (match == 5) {
//			cout << "Congratulations! You won the grand prize !!";
//		}
//}