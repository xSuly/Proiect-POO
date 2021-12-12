//
// Created by Liviu-Daniel on 11/20/2021.
//

#ifndef PROIECT_POO_LOGARE_H
#define PROIECT_POO_LOGARE_H

#include<iostream>
#include <vector>
#include "../headers/Client.h"

class Logare{
    //int balanta_cont;
    std::vector<Client> users;
    bool dummy;
public:

    Logare(bool dummy);
    Logare(const std::vector<Client> &users, bool dummy);


    const std::vector<Client> &getUsers() const;

    void setUsers(const std::vector<Client> &users);

    bool isDummy() const;

    void setDummy(bool dummy);

    void user_add(const Client client);



    void login(const Client &Client);

};




#endif //PROIECT_POO_LOGARE_H
