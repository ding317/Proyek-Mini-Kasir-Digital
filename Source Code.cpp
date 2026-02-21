#include <iostream>
#include <iomanip>
using namespace std;

int pilihan, jumlahBarang;
int hargaBeras1 = 15000, hargaGula = 14000, hargaMinyak = 16000, hargaTelur = 27000;
	int hargaSabun = 8000, hargaShampoo = 12000, hargaTeh = 6000, hargaKopi = 2000;
	int hargaRokok = 25000, hargaMie = 3500;

// // void TotalHarga(int totalharga){
// // 		totalharga = (jab.jumlahberas * hargaBeras1) + (jab.jumlahgula * hargaGula) +
// // 	             (jab.jumlahMinyak * hargaMinyak) + (jab.jumlahTelur * hargaTelur) +
// // 	             (jab.jumlahSabun * hargaSabun) + (jab.jumlahShampoo * hargaShampoo) +
// // 	             (jab.jumlahTeh * hargaTeh) + (jab.jumlahKopi * hargaKopi) +
// // 	             (jab.jumlahRokok * hargaRokok) + (jab.jumlahMie * hargaMie);

// }

struct JumlahAwalBarang{
	int jumlahberas, jumlahgula, jumlahMinyak, jumlahTelur,jumlahSabun, jumlahShampoo, jumlahTeh, jumlahKopi, jumlahRokok, jumlahMie;

};

int main() {
	JumlahAwalBarang jab;
	jab.jumlahberas = 0;
	jab.jumlahgula =0;
	jab.jumlahTelur = 0;
	jab.jumlahSabun = 0;
	jab.jumlahShampoo = 0;
	jab.jumlahTeh = 0;
	jab.jumlahMinyak = 0;
	jab.jumlahKopi = 0;
	jab.jumlahRokok = 0;
	jab.jumlahMie = 0;
	cout << jab.jumlahberas << jab.jumlahgula;
	cout << endl;
	//INISIASI
	int hargaBeras1 = 15000, hargaGula = 14000, hargaMinyak = 16000, hargaTelur = 27000;
	int hargaSabun = 8000, hargaShampoo = 12000, hargaTeh = 6000, hargaKopi = 2000;
	int hargaRokok = 25000, hargaMie = 3500;

	double totalHarga = 0, diskon = 0, totalBayar = 0;
	int saldo = 0, kembalian = 0;
	char lanjut;

	cout << "=========================================\n";
	cout << "              DAFTAR BARANG              \n";
	cout << "=========================================\n";

	do {
		cout << "1.  Beras 1kg       - Rp " << hargaBeras1 << endl;
		cout << "2.  Gula 1kg        - Rp " << hargaGula << endl;
		cout << "3.  Minyak 1L       - Rp " << hargaMinyak << endl;
		cout << "4.  Telur 1kg       - Rp " << hargaTelur << endl;
		cout << "5.  Sabun Mandi     - Rp " << hargaSabun << endl;
		cout << "6.  Shampoo         - Rp " << hargaShampoo << endl;
		cout << "7.  Teh Celup       - Rp " << hargaTeh << endl;
		cout << "8.  Kopi Sachet     - Rp " << hargaKopi << endl;
		cout << "9.  Rokok Bungkus   - Rp " << hargaRokok << endl;
		cout << "10. Mie Instan      - Rp " << hargaMie << endl;
		cout << "=========================================\n";

		cout << "Masukkan pilihan anda (1-10): ";
		cin >> pilihan;

		if (pilihan < 1 || pilihan > 10) {
			cout << "Pilihan tidak valid! Silakan ulangi.\n";
			continue;
		}

		cout << "Masukkan jumlah barang: ";
		cin >> jumlahBarang;

		// proses pembelian
		switch (pilihan) {
		case 1:
			jab.jumlahberas += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " kg Beras.\n";
			break;
		case 2:
			jab.jumlahgula += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " kg Gula.\n";
			break;
		case 3:
			jab.jumlahMinyak += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " L Minyak.\n";
			break;
		case 4:
			jab.jumlahTelur += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " kg Telur.\n";
			break;
		case 5:
			jab.jumlahSabun += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " Sabun Mandi.\n";
			break;
		case 6:
			jab.jumlahShampoo += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " Shampoo.\n";
			break;
		case 7:
			jab.jumlahTeh += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " Teh Celup.\n";
			break;
		case 8:
			jab.jumlahKopi += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " Kopi Sachet.\n";
			break;
		case 9:
			jab.jumlahRokok += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " Bungkus Rokok.\n";
			break;
		case 10:
			jab.jumlahMie += jumlahBarang;
			cout << " Anda membeli " << jumlahBarang << " Mie Instan.\n";
			break;
		}

		cout << "\nApakah Anda ingin membeli barang lagi? (y=ya / t=tidak): ";
		cin >> lanjut;

	} while (lanjut == 'y' || lanjut == 'Y');

	// Hitung total harga semua barang
	totalHarga = (jab.jumlahberas * hargaBeras1) + (jab.jumlahgula * hargaGula) +
	             (jab.jumlahMinyak * hargaMinyak) + (jab.jumlahTelur * hargaTelur) +
	             (jab.jumlahSabun * hargaSabun) + (jab.jumlahShampoo * hargaShampoo) +
	             (jab.jumlahTeh * hargaTeh) + (jab.jumlahKopi * hargaKopi) +
	             (jab.jumlahRokok * hargaRokok) + (jab.jumlahMie * hargaMie);


	// Tentukan diskon berdasarkan total belanja
	if (totalHarga >= 300000) {
		diskon = totalHarga * 0.15;
	} else if (totalHarga >= 200000) {
		diskon = totalHarga * 0.10;
	} else if (totalHarga >= 100000) {
		diskon = totalHarga * 0.05;
	} else {
		diskon = 0;
	}

	totalBayar = totalHarga - diskon;

	cout << "\n====================================================\n";
	cout << "                 STRUK PEMBELIAN                   \n";
	cout << "====================================================\n";
	cout << left << setw(15) << "Nama Barang"
	     << setw(10) << "Jumlah"
	     << setw(15) << "Total Harga" << endl;
	cout << "----------------------------------------------------\n";

	if (jab.jumlahberas > 0)
		cout << left << setw(15) << "Beras 1kg" << setw(10) << jab.jumlahberas << "Rp " << (jab.jumlahberas * hargaBeras1) << endl;
	if (jab.jumlahgula > 0)
		cout << left << setw(15) << "Gula 1kg" << setw(10) << jab.jumlahgula << "Rp " << (jab.jumlahgula * hargaGula) << endl;
	if (jab.jumlahMinyak > 0)
		cout << left << setw(15) << "Minyak 1L" << setw(10) << jab.jumlahMinyak << "Rp " << (jab.jumlahMinyak * hargaMinyak) << endl;
	if (jab.jumlahTelur > 0)
		cout << left << setw(15) << "Telur 1kg" << setw(10) << jab.jumlahTelur << "Rp " << (jab.jumlahTelur * hargaTelur) << endl;
	if (jab.jumlahSabun > 0)
		cout << left << setw(15) << "Sabun Mandi" << setw(10) << jab.jumlahSabun << "Rp " << (jab.jumlahSabun * hargaSabun) << endl;
	if (jab.jumlahShampoo > 0)
		cout << left << setw(15) << "Shampoo" << setw(10) << jab.jumlahShampoo << "Rp " << (jab.jumlahShampoo * hargaShampoo) << endl;
	if (jab.jumlahTeh > 0)
		cout << left << setw(15) << "Teh Celup" << setw(10) << jab.jumlahTeh << "Rp " << (jab.jumlahTeh * hargaTeh) << endl;
	if (jab.jumlahKopi > 0)
		cout << left << setw(15) << "Kopi Sachet" << setw(10) << jab.jumlahKopi << "Rp " << (jab.jumlahKopi * hargaKopi) << endl;
	if (jab.jumlahRokok > 0)
		cout << left << setw(15) << "Rokok" << setw(10) << jab.jumlahRokok << "Rp " << (jab.jumlahRokok * hargaRokok) << endl;
	if (jab.jumlahMie > 0)
			cout << left << setw(15) << "Mie Instan" << setw(10) << jab.jumlahMie << "Rp " << (jab.jumlahMie * hargaMie) << endl;

	cout << "----------------------------------------------------\n";
	cout << left << setw(25) << "TOTAL HARGA" << "Rp " << totalHarga << endl;
	cout << left << setw(25) << "DISKON" << "Rp " << diskon << endl;
	cout << left << setw(25) << "TOTAL BAYAR" << "Rp " << totalBayar << endl;
	cout << "----------------------------------------------------\n";

	cout << "Masukkan jumlah saldo Anda: Rp ";
	cin >> saldo;

	if (saldo >= totalBayar) {
		kembalian = saldo - totalBayar;
		cout << "Kembalian Anda: Rp " << kembalian << endl;
		cout << "\nTransaksi berhasil!\n";
		cout << "========== TERIMA KASIH TELAH BERBELANJA ==========\n";
	} else {
		cout << "\nSaldo tidak mencukupi untuk membayar total belanja.\n";
		cout << "Silakan coba lagi dengan saldo yang cukup.\n";
	}
	return 0;
}