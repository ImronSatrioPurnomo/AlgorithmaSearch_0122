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
	do {
		cout << "\nMasukan elemen yang mau kamu cari : ";
		cin >> item;

		ctr = 0;
		i = 0;
		while (i < n) 
		{
			ctr++;
			if (arr[i] == item) 
			{
				cout << "\n" << item << "Temukan di posisi" << (i + 1) << endl;
				break;
			}
			i++;
		}
		if (i == n)
			cout << "\n" << item << "tidak di temukan di dalam array\n";
		cout << "\nJumlah perbandingan: " << ctr << endl;

		cout << "\nLanjutkan mencari (y/n): ";
		cin >> ch;
	} while ((ch == 'y') || (ch == 'Y'));
}

void display()
{
	cout << "Elemen array adalah: ";
	for (i = 0; i < n; i++)
		cout << arr[i] << " ";
	cout << endl;
}

int main()
{
	input();
	LinearSearch();
	display();
}