#include <iostream>
#include <string>
#include <conio.h>

using namespace std;

class Mahasiswa
{
public:
	string Nama;
	string NIM;
	string Jurusan;
	double IPK;

	Mahasiswa(string inputNama, string inputNIM, string inputJurusan, double inputIPK) {
		Mahasiswa::Nama = inputNama;
		Mahasiswa::NIM = inputNIM;
		Mahasiswa::Jurusan = inputJurusan;
		Mahasiswa::IPK = inputIPK;

		cout << "================================" << endl;
		cout << "DATA MAHASISWA" << endl;
		cout << "================================" << endl;
		cout << "Nama      : " << Mahasiswa::Nama << endl;
		cout << "NIM       : " << Mahasiswa::NIM << endl;
		cout << "Jurusan   : " << Mahasiswa::Jurusan << endl;
		cout << "IPK       : " << Mahasiswa::IPK << endl << endl;

	}
	
};

int main() {
	Mahasiswa DataMahasiswa1 = Mahasiswa("Muhammad Syaiful", "683746837", "Tata Boga", 3.5);
	Mahasiswa DataMahasiswa2 = Mahasiswa("Rudiawan", "683746836", "Tata Boga", 3.1);
	Mahasiswa DataMahasiswa3 = Mahasiswa("Syahrini", "683746835", "Tata Boga", 3.2);

	_getch();
	return 0;
}
