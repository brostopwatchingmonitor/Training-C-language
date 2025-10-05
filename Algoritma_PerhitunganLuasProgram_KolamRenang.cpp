#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    // --- Konstanta ---
    const int P_Tanah = 100;
    const int L_Tanah = 40;
    const int P_Kolam = 12;
    const int L_Kolam = 5;
    const long long Biaya_bangun_per_meter = 1000000;
    const long long Biaya_rapikan_per_meter = 800000;

    // --- Deklarasi Variabel ---
    // Menggunakan long long untuk menghindari overflow pada perhitungan biaya
    long long luas_tanah;
    long long luas_kolam;
    long long luas_sisa_tanah;
    long long biaya_kolam;
    long long biaya_sisa_lahan;
    long long total_biaya;

    // --- Perhitungan ---
    luas_tanah = P_Tanah * L_Tanah;
    luas_kolam = P_Kolam * L_Kolam;
    luas_sisa_tanah = luas_tanah - luas_kolam;
    biaya_kolam = luas_kolam * Biaya_bangun_per_meter;
    biaya_sisa_lahan = luas_sisa_tanah * Biaya_rapikan_per_meter;
    total_biaya = biaya_kolam + biaya_sisa_lahan;

    // --- Menampilkan Hasil ---
    std::cout << "--- Rincian Proyek Pembangunan ---" << std::endl;
    std::cout << std::fixed << std::setprecision(0); // Mengatur format angka

    std::cout << "Luas Tanah          : " << luas_tanah << " m2" << std::endl;
    std::cout << "Luas Kolam          : " << luas_kolam << " m2" << std::endl;
    std::cout << "Sisa Luas Lahan     : " << luas_sisa_tanah << " m2" << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Biaya Bangun Kolam  : Rp " << biaya_kolam << std::endl;
    std::cout << "Biaya Rapikan Lahan : Rp " << biaya_sisa_lahan << std::endl;
    std::cout << "-------------------------------------" << std::endl;
    std::cout << "Total Biaya         : Rp " << total_biaya << std::endl;

    return 0;
}