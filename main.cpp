#include <iostream>
#include <string>
#include <vector>
#include <cstdlib>
#include <ctime>

using namespace std;

class Produkt {
public:
    string nazwa;
    int ilosc;

    Produkt(string n, int i) : nazwa(n), ilosc(i) {}
};

void wyswietlMenu() {
    cout << "1. Dodaj produkt\n"
         << "2. Wyswietl liste zakupow\n"
         << "3. Wyjscie\n"
         << "Wybierz opcje: ";
}

int main() {
    vector<Produkt> listaZakupow;
    srand(time(nullptr));

    while (true) {
        wyswietlMenu();

        int wybor;
        cin >> wybor;

        switch (wybor) {
            case 1: {
                string nazwaProduktu;
                int ilosc;

                cout << "Podaj nazwe produktu: ";
                cin >> nazwaProduktu;
                cout << "Podaj ilosc: ";
                cin >> ilosc;

                listaZakupow.push_back(Produkt(nazwaProduktu, ilosc));
                break;
            }
            case 2: {
                cout << "Lista zakupow:\n";
                for (const auto& produkt : listaZakupow) {
                    cout << "Produkt: " << produkt.nazwa << ", Ilosc: " << produkt.ilosc << "\n";
                }
                break;
            }
            case 3:
                cout << "Do widzenia!\n";
                return 0;
            default:
                cout << "Nieprawidlowa opcja. Wybierz ponownie.\n";
                break;
        }
    }
    return 0;
}
