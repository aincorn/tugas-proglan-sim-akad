#include <iostream>
#include <vector>

#include "include/person.hpp"
#include "include/mahasiswa.hpp"
#include "include/dosen.hpp"
#include "include/tendik.hpp"

using namespace std;

int main()
{
	vector<mahasiswa> recMhs;
	vector<dosen> recDosen;
	vector<tendik> recTendik;

	int menu_terpilih;

	while(1) {
		cout << "Selamat datang di Universitas X" << endl 
			<< endl;
		cout << "Data statistik:" << endl;
		cout << "  1. Jumlah Mahasiswa             : " << recMhs.size() << " mahasiswa" << endl;
		cout << "  2. Jumlah Dosen                 : " << recDosen.size() << " mahasiswa" << endl;
		cout << "  3. Jumlah Tenaga Kependidikan   : " << recTendik.size() << " mahasiswa" << endl;
		cout << endl;
		cout << "Menu: " << endl;
		cout << "  1. Tambah Mahasiswa" << endl;
		cout << "  2. Tambah Dosen" << endl;
		cout << "  3. Tambah Tenaga Kependidikan" << endl;
		cout << "  4. Tampilkan semua Mahasiswa" << endl;
		cout << "  5. Tampilkan semua Dosen" << endl;
		cout << "  6. Tampilkan semua Tenaga Kependidikan" << endl;
		cout << "-> Silahkan memilih salah satu: ";
		cin >> menu_terpilih;

		switch (menu_terpilih) {
			case 1:
				{
					string id, nama, nrp, departemen;
					int tahunmasuk, dd, mm, yy; 
					cout << "Masukkan Data Mahasiswa" << endl
						<< endl;
					cout << "Masukkan id :";
					cin >> id;
					cout << "Masukkan nama :";
					cin >> nama;
					cout << "Masukkan NRP :";
					cin >> nrp;
					cout << "Masukkan departemen :";
					cin >> departemen;
					cout << "Masukkan tahun masuk :";
					cin >> tahunmasuk;
					cout << "Masukkan tanggal lahir :";
					cin >> dd;
					cout << "Masukkan bulan lahir :";
					cin >> mm;
					cout << "Masukkan tahun lahir :";
					cin >> yy;

					mahasiswa mhs(to_string(recMhs.size() + 1), nama, dd, mm, yy, nrp, departemen, tahunmasuk);
					recMhs.push_back(mhs);
				}
				break;
			case 2:
				{
					string id, nama, npp, departemen, pendidikan;
					int dd, mm, yy; 
					cout << "Masukkan Data Dosen" << endl
						<< endl;
					cout << "Masukkan id :";
					cin >> id;
					cout << "Masukkan nama :";
					cin >> nama;
					cout << "Masukkan NPP :";
					cin >> npp;
					cout << "Masukkan departemen :";
					cin >> departemen;
					cout << "Masukkan pendidikan akhir :";
					cin >> pendidikan;
					cout << "Masukkan tanggal lahir :";
					cin >> dd;
					cout << "Masukkan bulan lahir :";
					cin >> mm;
					cout << "Masukkan tahun lahir :";
					cin >> yy;

					dosen dsn(to_string(recDosen.size() + 1), nama, dd, mm, yy, npp, departemen);
					recDosen.push_back(dsn);
				}
				break;
			case 3:
				{
					string id, nama, npp, unit;
					int dd, mm, yy; 
					cout << "Masukkan Data Tenaga Pendidikan" << endl
						<< endl;
					cout << "Masukkan id :";
					cin >> id;
					cout << "Masukkan nama :";
					cin >> nama;
					cout << "Masukkan NPP :";
					cin >> npp;
					cout << "Masukkan unit :";
					cin >> unit;
					cout << "Masukkan tanggal lahir :";
					cin >> dd;
					cout << "Masukkan bulan lahir :";
					cin >> mm;
					cout << "Masukkan tahun lahir :";
					cin >> yy;

					tendik tndk(to_string(recTendik.size() + 1), nama, dd, mm, yy, npp, unit);
					recTendik.push_back(tndk);	
				}
				break;
			case 4:
				{
					cout << "Menampilkan Data Semua Mahasiswa" << endl << endl;
					for (int i = 0; i < recMhs.size(); i++)
					{
						cout << "Id: " << recMhs[i].getId() << endl;
						cout << "Nama: " << recMhs[i].getNama() << endl;
						cout << "NRP: " << recMhs[i].getnrp() << endl;
						cout << "Departemen: " << recMhs[i].getDepartemen() << endl;
						cout << "Tahun Masuk: " << recMhs[i].getTahunMasuk() << endl;
						cout << "Tanggal Lahir: " << recMhs[i].getTglLahir() << "-" << recMhs[i].getBulanLahir() << "-" << recMhs[i].getTahunLahir() << endl;
						cout << endl;
					}
					cin.ignore();
					if (cin.get() == '\n'){}
				}
				break;
			case 5:
				{
					cout << "Menampilkan Data Semua Dosen" << endl << endl;
					for (int i = 0; i < recDosen.size(); i++)
					{
						cout << "Id: " << recDosen[i].getId() << endl;
						cout << "Nama: " << recDosen[i].getNama() << endl;
						cout << "NPP: " << recDosen[i].getnpp() << endl;
						cout << "Departemen: " << recDosen[i].getDepartemen() << endl;
						cout << "Tanggal Lahir: " << recDosen[i].getTglLahir() << "-" << recDosen[i].getBulanLahir() << "-" << recDosen[i].getTahunLahir() << endl;
						cout << endl;
					}

					cin.ignore();
					if (cin.get() == '\n'){}
				}
				break;
			case 6:
				{
					cout << "Menampilkan Data Semua Tenaga Kependidikan" << endl << endl;
					for (int i = 0; i < recTendik.size(); i++)
					{
						cout << "Id: " << recTendik[i].getId() << endl;
						cout << "Nama: " << recTendik[i].getNama() << endl;
						cout << "NPP: " << recDosen[i].getnpp() << endl;
						cout << "Tanggal Lahir: " << recTendik[i].getTglLahir() << "-" << recTendik[i].getBulanLahir() << "-" << recTendik[i].getTahunLahir() << endl;
						cout << "Unit: " << recTendik[i].getUnit() << endl;
						cout << endl;
					}
					cin.ignore();
					if (cin.get() == '\n'){}
				}
				break;
		}
	}

	return 0;
}
