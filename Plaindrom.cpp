// Plaindrom.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
#include <cstring>

bool estePalindrom(char sir[]) {
    int lungime = std::strlen(sir);
    for (int i = 0; i < lungime / 2; i++) {
        if (sir[i] != sir[lungime - 1 - i]) {
            return false;
        }
    }
    return true;
}

int main() {
    char sir[101]; // Am alocat un spatiu de 101 caractere pentru sirul de maxim 100 de caractere, pentru a include si caracterul NULL terminator
    std::cout << "Introduceti sirul de caractere: ";
    std::cin.getline(sir, 101); // Citim sirul de maxim 100 de caractere

    if (estePalindrom(sir)) {
        std::cout << "Sirul este un palindrom.\n";
    }
    else {
        std::cout << "Sirul nu este un palindrom.\n";
    }

    return 0;
}
