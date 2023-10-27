#include <iostream>
#include <string>
#include <vector>
using namepsace std;

class ShoppingList {
public:
    void createList() {
        using namespace std;
        vector<string> listaZakupow;
        string produkt;
        cout << "Czy chcesz utworzyc liste zakupow? (tak/nie): ";
        string odpowiedz;
        cin >> odpowiedz;

        if (odpowiedz == "tak") {
            while (true) {
                cout << "Wprowadz produkt (lub 'stop' aby zakonczyc): ";
                cin >> produkt;

                if (produkt == "stop") {
                    if (listaZakupow.empty()) {
                        cout << "Lista zakupow jest pusta. Nie zapisuje." << endl;
                    }
                    else {
                        cout << "Zapisuje liste zakupow:" << endl;
                        for (const string& item : listaZakupow) {
                            cout << item << endl;
                        }
                    }
                    break;
                }
                else {
                    listaZakupow.push_back(produkt);
                }
            }
        }
        else {
            cout << "Program zakonczony." << endl;
        }
    }
};

int main() {
    ShoppingList listaZakupow;
    listaZakupow.createList();

    return 0;
}
