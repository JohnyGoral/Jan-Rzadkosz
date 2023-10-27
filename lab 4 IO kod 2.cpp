#include <iostream>
#include <string>

int main() {
    // Dane początkowe
    std::string initialUsername = "jasiek123";
    std::string initialPassword = "bulka123";

    // Zmienna przechowująca aktualnie zalogowanego użytkownika
    std::string loggedInUser = "";

    while (true) {
        std::cout << "\nWitaj w aplikacji!" << std::endl;
        if (loggedInUser.empty()) {
            std::cout << "1. Zaloguj się" << std::endl;
        }
        else {
            std::cout << "Zalogowany jako: " << loggedInUser << std::endl;
            std::cout << "1. Wyloguj" << std::endl;
            std::cout << "2. Zmień dane logowania" << std::endl;
        }
        std::cout << "3. Wyjdź" << std::endl;

        int choice;
        std::cin >> choice;

        if (choice == 1) {
            if (loggedInUser.empty()) {
                std::string username, password;
                std::cout << "Podaj login: ";
                std::cin >> username;
                std::cout << "Podaj hasło: ";
                std::cin >> password;

                if (username == initialUsername && password == initialPassword) {
                    loggedInUser = username;
                    std::cout << "Zalogowano pomyślnie!" << std::endl;
                }
                else {
                    std::cout << "Nieprawidłowy login lub hasło." << std::endl;
                }
            }
            else {
                std::cout << "Jesteś już zalogowany jako: " << loggedInUser << std::endl;
            }
        }
        else if (choice == 2) {
            if (!loggedInUser.empty()) {
                // Tutaj można dodać kod do zmiany hasła
                std::string newPassword;
                std::cout << "Podaj nowe hasło: ";
                std::cin >> newPassword;
                initialPassword = newPassword;
                std::cout << "Hasło zostało zmienione." << std::endl;
            }
            else {
                std::cout << "Najpierw zaloguj się." << std::endl;
            }
        }
        else if (choice == 3) {
            std::cout << "Wyjście z programu." << std::endl;
            break;
        }
        else {
            std::cout << "Nieprawidłowy wybór." << std::endl;
        }
    }

    return 0;
}
