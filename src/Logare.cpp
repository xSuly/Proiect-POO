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




void Logare::login(const Client &Client) {

    std::cout << "Introduceti parola, "<<Client.getUsername()<<"!\n";
    std::string parola;
    int i=0;
    std::cin >> parola;
    if(parola==Client.getPassword())
        std::cout << "Parola introdusa este corecta! Puteti sa va efectuati cumparaturile!\n";
    else while(i<2)
        {
        std::cout<<"Parola introdusa este gresita! Mai aveti 2 incercari.\n";
        std::cin >> parola;
            if(parola==Client.getPassword())
            {std::cout << "Parola introdusa este corecta! Puteti sa va efectuati cumparaturile!\n";
                i=10;}
            else
            {
                //i++;
                std::cout << "Parola introdusa este tot gresita! Mai aveti o incercare.\n";
                std::cin>> parola;
                if(parola==Client.getPassword())
                {std::cout << "Parola introdusa este corecta! Puteti sa va efectuati cumparaturile!\n";
                    i=10;}
                else {
                    std::cout << "Ne pare rau, parola introdusa gresit de prea multe ori!\n";
                    goto breakpoint;
                }
            }
            breakpoint:
            i=10;
        }

}