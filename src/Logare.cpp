//
// Created by Liviu-Daniel on 11/21/2021.
//


#include "../headers/Logare.h"
#include "../headers/Client.h"


Logare::Logare(bool ok) : ok(ok) {}
Logare::Logare(const std::vector<Client> &users, bool ok) : users(users), ok(ok) {}



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




void Logare::login(std::string name) {

    /*for(auto i = users.begin(); i<=users.end(); i++)
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
    else ok=1;*/
}