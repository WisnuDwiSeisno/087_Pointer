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
}