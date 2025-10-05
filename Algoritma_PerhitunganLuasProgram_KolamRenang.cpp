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
}