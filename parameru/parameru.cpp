#include <iostream>
using namespace std;

bool ParImpar(int n[], int& i) {
	if (n[i] % 2 == 0) {
		return true;
	}
	if (n[i] % 2 != 0) {
		return false;
	}
}
void BagaValori(int a[], int& n) {
	for (int i = 0; i < n - 1; i++) {
		cin >> a[i];
	}
}
void Afisare(int a[], int& n) {
	for (int i = 0; i < n -1; i++)
	{
		cout << a[i] << " ";
	}

}
void Numara(int a[], int& n) {
	int ctPar = 0;
	int ctImpar = 0;
	for (int i = 0; i < n-1; i++)
	{
		if (ParImpar(a, i)) {
			ctPar++;
		}
		else {
			ctImpar++;
		}
	}
	cout << "\n" << ctPar<< "\n" << ctImpar;
	int Diferenta = 0;
	if (ctPar > ctImpar) {
		 Diferenta = ctPar - ctImpar;
	}
	else {
		 Diferenta = ctImpar - ctPar;
	}
	cout << "\n" << "Aceasta este diferenta: " << Diferenta;
}


int main()
{
	int a[100];
	int n; cin >> n;

	BagaValori(a, n);
	Afisare(a, n);
	Numara(a, n);
	
}
