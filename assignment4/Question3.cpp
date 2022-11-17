//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{	
//	// A = 1, B = 2, C = 3, D = 4;
//	int answers[20] = { 2,4,1,1,3,1,2,1,3,4,2,3,4,1,4,3,3,2,4,1 };
//	int user[20];
//	int incorrectQS[100];
//	int size = 20, correct=0, incorrect=0;
//	cout << "THE MENU OPTION IS : " << endl;
//	cout << " A : 1     B:2     C:3     D:4" << endl;
//	for (int i = 0; i < size; i++) {
//		cout << "Enter answer number " << i + 1 << endl;
//		int input = 0;
//		cin >> input;
//		while (input > 4 && input < 0) {
//			cout << "INVALID INPUT ENTER AGAIN " << endl;
//			cin >> input;
//		}
//		user[i] = input;
//	}
//	for (int i = 0; i < size; i++) {
//		if (answers[i] == user[i]) {
//			correct++;
//		}
//		else {
//			incorrectQS[incorrect] = i + 1;
//			incorrect++;	
//		}
//	}
//	cout << "You correctly answered " << correct << " questions and inccorectly answered " << incorrect << endl; 
//	if (incorrect > 0) {
//		cout << "The incorrectly answered questions were: " << endl;
//		for (int i = 0; i < incorrect; i++) {
//			cout << incorrectQS[i] << endl;
//		}
//	}
//}