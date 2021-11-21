//
// Created by Liviu-Daniel on 11/21/2021.
//


#include "../headers/Logare.h"
#include "../headers/Client.h"


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

void Logare::adaugare_balanta(float balanta_adaugata){
    std::cout <<"Suma cu care incarcati balanta este: "<< balanta_adaugata<<" RON.";
    balanta_cont=balanta_adaugata;
}


void Logare::login(std::string name) {

    for(auto i = users.begin(); i<=users.end(); i++)
        if(Client.getUsername().compare(name)==0)
        {
            std::cout<<"Parola: ";
            std::string pass;
            std::cin >> pass;
            if(Client.getPassword().compare(pass)==0)
            {
                std::cout<<"Parola corecta! Bine ati venit\n";
                ok=0;
                break;
            }
            else std::cout<<"Parola gresita!\n";
        }
    else ok=1;
}