#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

class Produkt {
public:
    string nazwa;
    double cena;

    Produkt() {
        nazwa = "";
        cena = 0.0;
    }
};


bool porownajProdukty(const Produkt& produkt1, const Produkt& produkt2) {
    return produkt1.cena > produkt2.cena;
}

int main() {
    vector<Produkt> produkty(10); 
   
    for (int i = 0; i < 10; ++i) {
        cout << "Podaj nazwe produktu " << i + 1 << ": ";
        cin >> produkty[i].nazwa;
        cout << "Podaj cene produktu " << i + 1 << ": ";
        cin >> produkty[i].cena;
    }

    
    sort(produkty.begin(), produkty.end(), porownajProdukty);

   
    cout << "Produkty od najdroższego do najtanszego:\n";
    for (const Produkt& produkt : produkty) {
        cout << "Nazwa: " << produkt.nazwa << ", Cena: " << produkt.cena << endl;
    }

    return 0;
}
