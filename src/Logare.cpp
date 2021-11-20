//
// Created by Liviu-Daniel on 11/21/2021.
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

void Logare::adaugare_balanta(Client client){
    std::cout << "Introduceti suma cu care vreti sa va incarcati contul: ";
    std::cin >> balanta_cont;
}


void Logare::login(std::string nume) {


}