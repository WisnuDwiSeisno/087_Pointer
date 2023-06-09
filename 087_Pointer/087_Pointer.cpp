#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void showNim();		//deklarasi method
};

void mahasiswa::showNim() {
	cout << "No Induk = " << nim << endl;
}

int main() {
	mahasiswa mhs{ 1 };		//object mhs
	mhs.showNim();			//Member Acces Operator

	mahasiswa& ref = mhs;	//Pointer Reference refMhs
	ref.nim = 2;			// Member Acces Operator
	mhs.showNim();

	mahasiswa* pMhs = &mhs;	//Pointer dereference pMhs
	pMhs->nim = 3;			//Arrow Operator
	pMhs->showNim();
	system("pause");
	return 0;
}