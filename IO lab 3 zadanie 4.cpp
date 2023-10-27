#include <iostream>
#include <vector>
using namespace std;

int main() {
    int AA[10]; 
    int ujemne_count = 0; 
    int dodatnie_count = 0; 

    for (int i = 0; i < 10; i++) {
        cout << "Podaj " << i + 1 << ". liczbe: ";
        cin >> AA[i];

        if (AA[i] < 0) {
            ujemne_count++; 
        }
        else if (AA[i] > 0) {
            dodatnie_count++; 
        }
    }

    vector<int> BB;
    for (int i = 0; i < 10; i++) {
        if (AA[i] < 0) {
            BB.push_back(AA[i]);
        }
    }

    cout << "ujemne: " << ujemne_count << endl;
    cout << "dodatnie: " << dodatnie_count << endl;

    cout << "Liczby ujemne w tablicy BB: ";
    for (int i = 0; i < BB.size(); i++) {
        cout << BB[i] << " ";
    }
    cout << endl;

    return 0;
}
