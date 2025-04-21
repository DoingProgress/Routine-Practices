#include <iostream>
#include <stdio.h>
using namespace std;

int main()
{
	//output and comment
	// tanda di kiri digunakan untuk comment satu line saja)
	/* tanda di kiri digunakan untuk
	multi line comment*/
	cout << 1<<"\n"; //jika lebih dari 1 angka maka hanya angka diawal yang akan ditampilkan jika tidak pakai tanda "
	cout << "1,2,3,4,5\n"; //setiap string wajib memakai tanda "
	cout << 1 + 2<<"\n"; //jika ada operator matematika, maka yang keluar pada layar akan otomatis menjadi hasil dari operator matematika
	cout <<"palembang suka rendang\n";
	cout << "gasap dari palembang\n";
	cout << "\"jadi gasap suka rendang\"\n";//gunakan \" dan \\ jika ingin ditampilkan pada output, dan \t untuk menambahkan tab jarak kekanan

	//declare variables
	int nilai = 15;//variabel untuk tipe data bilangan bulat
	cout << nilai<<"\n";

	double desimal = 99.9;//variabel yang digunakan untuk floating number (bilangan berkoma) seperti desimal 
	cout << desimal<<"\n";

	char huruf = 'b';//variabel yang digunakan hanya untuk satu karakter huruf atau simbol yang disertai tanda kutip satu ''
	cout << huruf << "\n";

	char Nama[] = "Panjibuwono";//jika ingin memasukan string ke variabel tipe data gunakan char[] diakhir variabel dan wajib disertai tanda kutip 2 ""
	cout << "nama saya " <<Nama<< "\n";

	//nama variabel disebut sebagai identifier, wajib diawali menggunakan huruf atau underscore_ dan tidak boleh menggunakan key C++ seperti int

	bool asli = true;
	bool palsu = false;
	cout <<asli<< "\n";
	cout << palsu<<"\n";

	int x = 7;
	int y = 8;
	int sum = 7 * 8;
	cout << sum<<"\n";

	//TypeData int/double/char/char[]/bool (spasi) VariableName = Value;
	//Multiple variables

	int a = 7, b = 8, c = 9;
	cout << a + b + c<<"\n";

	int d, e, f;
	d = e = f = 70;
	cout << d + e + f<<"\n";

	//gunakan const int supaya value dari variabel tidak terupdate atau berubah.
	//jika ada variabel dengan identifier sama, maka akan terjadi error
	const int MPH = 77;
	cout << MPH;
	
	//contoh

	int nomorID = 123;
	int Umur = 17;
	float Skor = 77.77;
	char NilaiMurid = 'a';

	cout << "nomor ID anda " << nomorID << "\n";
	cout << "umur anda " << Umur << "\n";
	cout << "skor anda " << Skor << "\n";
	cout << "nilai anda " << NilaiMurid << "\n";

	int panjang = 10, lebar = 11;
	cout <<"panjang persegi adalah "<<panjang<<"\n";
	cout << "lebar persegi adalah " << lebar<<"\n";
	cout << "maka luas persegi adalah " << panjang * lebar << "\n";

	return 0;
}