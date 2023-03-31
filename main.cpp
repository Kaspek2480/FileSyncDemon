#include <iostream>
#include <filesystem>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc != 3) {
        cerr << "Blad liczby argumentow" << endl;
        return -1;
    }

    string sourcePath = argv[1];


    if (std::filesystem::exists(sourcePath) == 0) {
        cout << "Katalog " << sourcePath << " nie istnieje" << endl;
        return -1;
    } //sprawdzanie czy katalogi istnieja


    string destinationPath = argv[2];

    if (std::filesystem::exists(destinationPath) == 0) {
        cout << "Katalog nie istnieje" << endl;
        return -1;
    } //sprawdzanie czy katalogi istnieja

    for (int i = 0; i < argc; i++) {
        if (fopen(argv[i], "r") == NULL) {
            cout << "Katalog nie istnieje" << endl;
            return -1;
        }
    } //sprawdzanie czy katalogi istnieja


    for (int i = 0; i < argc; i++) {
        if (std::filesystem::is_directory(argv[i]) == 0) {
            cout << "Podana sciezka nie jest katalogiem" << endl;
        } else {
            cout << "Podana sciezka jest katalogiem" << endl;
        }
    } //sprawdzenie czy podane sciezki sa katalogiem


    return 0;
}