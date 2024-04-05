#include <iostream>
using namespace std;

int arr[20];
int n;
int i;

void input() {
	while (true) {
		cout << "memasukan nomor elemen ke dalam array : ";
		cin >> n;
		if ((n > 0) && (n <= 20))
			break;
		else
			cout << "\nArray harus memiliki minimal 1 dan maksimal 20 elemen.\n\n";
	}
	cout << "\n---------------------\n";
	cout << "masukan elemen array\n";
	cout << "------------------\n";
	for (i = 0; i < n; i++) {
		cout << "<" << (i + 1) << "> ";
		cin >> arr[i];
	}
}

void LinearSearch() {
	char ch;
	int ctr;
	int item;
}