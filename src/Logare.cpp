//
// Created by Liviu-Daniel on 11/21/2021.
//


#include "../headers/Logare.h"
#include "../headers/Client.h"
#include "../parola_Encryption/digestpp.hpp"
using namespace digestpp;

Logare::Logare(bool dummy) : dummy(dummy) {}
Logare::Logare(const std::vector<std::pair<Client, bool>> &users, bool ok) : users(users), dummy(dummy) {}



const std::vector<std::pair<Client, bool>> &Logare::getUsers() const {
    return users;
}

void Logare::setUsers(const std::vector<std::pair<Client, bool>> &users) {
    Logare::users = users;
}

bool Logare::isDummy() const {
    return dummy;
}

void Logare::setDummy(bool ok) {
    Logare::dummy = dummy;
}

void Logare::user_add(const Client client) {
    users.push_back(std::make_pair(client, dummy=false));
}




void Logare::login(const Client &Client) {

    std::cout << "Introduceti parola, "<<Client.getUsername()<<"!\n";
    std::string parola;
    int i=0;
    std::cin >> parola;
    auto hashed_pw = blake2b(256).absorb(parola).hexdigest();
    if(hashed_pw==blake2b(256).absorb(Client.getPassword()).hexdigest())
        std::cout << "Parola introdusa este corecta! Puteti sa va efectuati cumparaturile!\n";
    else switch(i)
        {
            case 0:
                std::cout<<"Parola introdusa este gresita! Mai aveti 2 incercari.\n";
                std::cin >> parola;
                hashed_pw = blake2b(256).absorb(parola).hexdigest();
                if(hashed_pw==blake2b(256).absorb(Client.getPassword()).hexdigest())
                    {
                    std::cout << "Parola introdusa este corecta! Puteti sa va efectuati cumparaturile!\n";
                    dummy=true;
                    break;
                    }
                else i=1;
                //break;
            case 1:
                std::cout << "Parola introdusa este tot gresita! Mai aveti o incercare.\n";
                std::cin >> parola;
                hashed_pw = blake2b(256).absorb(parola).hexdigest();
                if(hashed_pw==blake2b(256).absorb(Client.getPassword()).hexdigest())
                    {
                    std::cout << "Parola introdusa este corecta! Puteti sa va efectuati cumparaturile!\n";
                    dummy=true;
                    }
                else std::cout << "Ne pare rau, parola introdusa gresit de prea multe ori!\n";
                break;
        }

}