//#include<iostream>
//#include<iomanip>
//using namespace std;
//int main()
//{
//	long int empID[] = { 5658845, 4520125, 7895122, 8777541, 8451277, 1302850, 7580489 };
//	int hours[7];
//	double payRate[7];
//	double wage[7];
//	for (int i = 0; i < 7; i++) {
//		cout << "Enter Employee number " << i << " with Employee ID " << empID[i] << "'s data "<< endl;
//		cout << "Enter their payRate " << endl;
//		cin >> payRate[i];
//		while (payRate[i] < 6) {
//			cout << "Pay Rate must be higher than 6, enter again " << endl;
//			cin >> payRate[i];
//		}
//		cout << "Enter their Hours worked " << endl;
//		cin >> hours[i];
//		while (hours[i] < 0) {
//			cout << "Hours cannot be negative, enter again " << endl;
//			cin >> hours[i];
//		}
//		wage[i] = payRate[i] * hours[i];
//	}
//	cout << "Employee ID " << setw(20) << "Pay Rate" << setw(20) << "Hours Worked " << setw(20) << "Total Wage " << endl;
//	for (int i = 0; i < 7; i++) {
//		cout << empID[i] << setw(20) << payRate[i]<< setw(20)<< hours[i]<< setw(20)<< wage[i]<< endl;
//	
//	}
//}