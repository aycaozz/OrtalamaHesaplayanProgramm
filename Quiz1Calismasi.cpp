#include <iostream>
using namespace std;

// Ortalamadan büyük elemanları ekrana yazdıran fonksiyon:
void ortalamadanBuyukleriYazdir(int* dizi, int elemanSayisi, double ortalama) {
    std::cout << "ortalamadan buyuk elemanlar: ";
    for (int a = 0; a < elemanSayisi; a++) {
        if (dizi[a] > ortalama) {
            std::cout << dizi[a] << " ";
        }
    }

}

// Ortalamadan büyük elemanları tespit eden fonksiyonları yazarız :
void ortalamadanBuyukleriBul(int* dizi, int elemanSayisi, const double& ortalama) {
    for (int a = 0; a < elemanSayisi; a++) {
        if (dizi[a] > ortalama) {
            std::cout << "Dizi elemani " << dizi[a] << " ortalamadan buyuk." << std::endl;
        }
    }
}



int main() {
    int elemanSayisi;
    std::cout << "Dizi eleman sayisini girin: ";
    std::cin >> elemanSayisi;

    // Dinamik int dizisi oluştururuz:
    int* dizi = new int[elemanSayisi];

    std::cout << "Dizi elemanlarini girin: ";
    for (int a = 0; a < elemanSayisi; a++) {
        std::cin >> dizi[a];
    }

    double ortalama = 0;
    for (int a = 0; a < elemanSayisi; a++) {
        ortalama += dizi[a];
    }
    ortalama /= elemanSayisi;

    ortalamadanBuyukleriYazdir(dizi, elemanSayisi, ortalama);
    ortalamadanBuyukleriBul(dizi, elemanSayisi, ortalama);


    // Belleği temizleme kısmı:
    delete[] dizi;

    return 0;
}