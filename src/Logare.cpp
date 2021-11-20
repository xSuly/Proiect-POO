//
// Created by Liviu-Daniel on 11/20/2021.
//

#include "headers/Logare.h"
#include "/headers/Client.h"


Logare::Logare(int balantaCont, bool ok) : balanta_cont(balantaCont), ok(ok) {}
Logare::Logare(int balantaCont, const std::vector<Client> &users, bool ok) : balanta_cont(balantaCont), users(users), ok(ok) {}

int Logare::getBalantaCont() const {
    return balanta_cont;
}

void Logare::setBalantaCont(int balantaCont) {
    balanta_cont = balantaCont;
}

const std::vector<Client> &Logare::getUsers() const {
    return users;
}

void Logare::setUsers(const std::vector<Client> &users) {
    Logare::users = users;
}

bool Logare::isOk() const {
    return ok;
}

void Logare::setOk(bool ok) {
    Logare::ok = ok;
}

void Logare::user_add(const Client client) {
    users.push_back(client);
}

void Logare::login(std::string nume) {

    for (const auto &client: users)
        if (client.getUsername().compare(nume) == 0) {
            std::cout << "Introduceti parola: ";
            std::string parola;
            std::cin >> parola;
            if (client.getPassword().compare(parola) == 0) {
                std::cout << "Ati introdus parola corecta! \n";
                std::cout << client << "\n";
                std::cout << "Ce balanta vreti sa introduceti in cont? \n";
                std::cin >> balanta_cont;
                ok = 0;
                break;

            } else { std::cout << "Parola introdusa este gresita" << "\n"; }
        } else
            ok = 1;
}