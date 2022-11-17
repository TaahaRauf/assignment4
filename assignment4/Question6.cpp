#include <iostream>
using namespace std;
bool addElement(int set[], int& noe, int capacity, int element) {
	set[noe] = element;
	noe++;
	return true;
}
bool removeElement(int set[], int& noe, int capacity, int element) {
	for (int i = 0; i < capacity; i++) {
		if (set[i] == element) {
			for (int j = i; j < capacity; j++) {
				set[j] = set[j + 1];
			}
		}
	}
	return true;
}
bool SearchElement(int set[], int noe, int element) {
	bool found = false;
	for (int i = 0; i < noe; i++) {
		if (set[i] == element) {
			found = true;
		}
	}
	return found;
}
int searchElementPosition(int set[], int noe, int element) {
	int i;
	for (i = 0; i < noe; i++) {
		if (set[i] == element) {
			break;
		}
	}
	return i;
}
bool isEmpty(int noe) {
	if (noe == 0) {
		return true;
	}
}
bool isFull(int noe, int capacity) {
	if (noe == capacity) {
		return true;
	}
}
void displaySet(int set[], int noe) {
	for (int i = 0; i < noe; i++) {
		cout << set[i] << " ";
		}
}
void intersection(int setA[], int setB[], int setANoe, int setBNoe, int newSet[], int&
	newSetNoe) {
	newSetNoe = 0;
	for (int i = 0; i < setANoe; i++) {
		for (int j = 0; j < setBNoe; j++) {
			if (setA[i] == setB[j]) {
				newSet[newSetNoe] = setA[i];
				newSetNoe++;
			}
		}
	}
}

void Union (int setA[], int setB[], int setANoe, int setBNoe,  int newSet[], int&
	newSetNoe) {
	int i;
	for (i = 0; i < setANoe; i++) {
		newSet[i] = setA[i];
	}
	i--;
	for (i; i < setBNoe; i++) {
		newSet[i] = setB[i];
	}
}
void Difference(int setA[], int setB[], int setANoe, int setBNoe, int newSet[], int&
	newSetNoe) {
	for (int i = 0; i < setANoe; i++) {
		for (int j = 0; j < setBNoe; j++) {
			if (setA[i] == setB[j]) {
				setANoe = setANoe - 1;
				for (int k = i; k < setANoe; k++) {
					setA[k] = setA[k + 1];
				}
			}
		}
	}
}
bool isSubset(int setA[], int setB[], int setANoe, int setBNoe) {
	int match = 0;
	for (int i = 0; i < setANoe; i++) {
		for (int j = 0; j < setBNoe; j++) {
			if (setA[i] == setB[j]) {
				match++;
			}
		}
	}
	if (setANoe == match) {
		return 1;
	}
	else if (setANoe > match) {
		return 2;
	}
	else if (match == 0) {
		return 0;
	}
}
void displayCrossProduct(int setA[], int setB[], int setANoe, int setBNoe) {
	for (int i = 0; i < setANoe; i++)
		for (int j = 0; j < setBNoe; j++)
			cout << "{ " << setA[i] << ", " << setB[j] << " }";
}
void displayPowerSet(int set[], int noe) {

	unsigned int power_set_size = pow(2, noe);
	int i, j;

	for (i = 0; i < power_set_size; i++) {
		for (j = 0; j < noe; j++) {
			if (i & (1 << j))
				cout << set[j];
		}
		cout << endl;
	}
}
void creatClone(int sourceSet[], int sourceNoe, int sourceCapacity, int targetSet[], int
	targetNoe, int& targetCapacity) {
	targetCapacity = sourceCapacity;
	sourceNoe = targetNoe;
	for (int i = 0; i < sourceNoe; i++) {
		targetSet[i] = sourceSet[i];
	}
}

int main() {
	const int setACapacity = 10;
	int setANOE = 0;
	int setA[setACapacity];
	const int setBCapacity = 7;
	int setBNOE = 0;
	int setB[setBCapacity];
	addElement(setA, setANOE, setACapacity, 5);
	addElement(setA, setANOE, setACapacity, 15);
	addElement(setA, setANOE, setACapacity, 9);
	addElement(setA, setANOE, setACapacity, 10);
	cout << "Set A Elements :" ;
	displaySet(setA, setANOE);
	addElement(setB, setBNOE, setACapacity, 9);
	addElement(setB, setBNOE, setACapacity, 17);
	addElement(setB, setBNOE, setACapacity, 95);
	cout << "Set B Elements :";
	displaySet(setB, setBNOE);
	const int setCCapacity = 20;
	int setCNOE = 0;
	int setC[setCCapacity];
	intersection(setA, setB, setANOE, setBNOE, setC, setCNOE);
	cout << "Set C Elements : ";
	displaySet(setC, setCNOE);
	cout << " nPower Set of B: ";
	displayPowerSet(setB, setBNOE);
}