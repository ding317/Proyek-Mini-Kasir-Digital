#include <iostream>
#include <iomanip>
#include <vector>
#include <string>

const std::vector<std::string> namaBarang = {
    "Beras 1kg", "Gula 1kg", "Minyak 1L", "Telur 1kg",
    "Sabun Mandi", "Shampoo", "Teh Celup", "Kopi Sachet",
    "Rokok Bungkus", "Mie Instan"
};

const std::vector<int> hargaBarang = {
    15000, 14000, 16000, 27000,
    8000, 12000, 6000, 2000,
    25000, 3500
};

int main() {
    std::vector<int> jumlahBarang(namaBarang.size(), 0); // Inisialisasi jumlah barang ke 0

    double totalHarga = 0, diskon = 0, totalBayar = 0;
    int saldo = 0, kembalian = 0;
    char lanjut;
    int pilihan, qty;

    std::cout << "=========================================\n";
    std::cout << "              DAFTAR BARANG              \n";
    std::cout << "=========================================\n";

    do {
        for (size_t i = 0; i < namaBarang.size(); ++i) {
            std::cout << (i + 1) << ". " << namaBarang[i] << " - Rp " << hargaBarang[i] << std::endl;
        }
        std::cout << "=========================================\n";

        std::cout << "Masukkan pilihan anda (1-" << namaBarang.size() << "): ";
        std::cin >> pilihan;

        if (pilihan < 1 || pilihan > static_cast<int>(namaBarang.size())) {
            std::cout << "Pilihan tidak valid! Silakan ulangi.\n";
            continue;
        }

        std::cout << "Masukkan jumlah barang: ";
        std::cin >> qty;

        if (qty < 0) {
            std::cout << "Jumlah tidak boleh negatif! Silakan ulangi.\n";
            continue;
        }

        jumlahBarang[pilihan - 1] += qty;
        std::cout << " Anda membeli " << qty << " " << namaBarang[pilihan - 1] << ".\n";

        std::cout << "\nApakah Anda ingin membeli barang lagi? (y=ya / t=tidak): ";
        std::cin >> lanjut;

    } while (lanjut == 'y' || lanjut == 'Y');

    // Hitung total harga menggunakan loop
    for (size_t i = 0; i < jumlahBarang.size(); ++i) {
        totalHarga += jumlahBarang[i] * hargaBarang[i];
    }

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

    std::cout << "\n====================================================\n";
    std::cout << "                 STRUK PEMBELIAN                   \n";
    std::cout << "====================================================\n";
    std::cout << std::left << std::setw(15) << "Nama Barang"
         << std::setw(10) << "Jumlah"
         << std::setw(15) << "Total Harga" << std::endl;
    std::cout << "----------------------------------------------------\n";

    // Output struk menggunakan loop
    for (size_t i = 0; i < jumlahBarang.size(); ++i) {
        if (jumlahBarang[i] > 0) {
            std::cout << std::left << std::setw(15) << namaBarang[i]
                 << std::setw(10) << jumlahBarang[i]
                 << "Rp " << (jumlahBarang[i] * hargaBarang[i]) << std::endl;
        }
    }

    std::cout << "----------------------------------------------------\n";
    std::cout << std::left << std::setw(25) << "TOTAL HARGA" << "Rp " << std::fixed << std::setprecision(0) << totalHarga << std::endl;
    std::cout << std::left << std::setw(25) << "DISKON" << "Rp " << std::fixed << std::setprecision(0) << diskon << std::endl;
    std::cout << std::left << std::setw(25) << "TOTAL BAYAR" << "Rp " << std::fixed << std::setprecision(0) << totalBayar << std::endl;
    std::cout << "----------------------------------------------------\n";

    std::cout << "Masukkan jumlah saldo Anda: Rp ";
    std::cin >> saldo;

    if (saldo >= totalBayar) {
        kembalian = saldo - totalBayar;
        std::cout << "Kembalian Anda: Rp " << kembalian << std::endl;
        std::cout << "\nTransaksi berhasil!\n";
        std::cout << "========== TERIMA KASIH TELAH BERBELANJA ==========\n";
    } else {
        std::cout << "\nSaldo tidak mencukupi untuk membayar total belanja.\n";
        std::cout << "Silakan coba lagi dengan saldo yang cukup.\n";
    }
    return 0;
}