//
// Created by Liviu-Daniel on 11/20/2021.
//

#ifndef PROIECT_POO_LOGARE_H
#define PROIECT_POO_LOGARE_H

#include<iostream>
#include <vector>
#include"/headers/Client.h"

class Logare{
    int balanta_cont;
    std::vector<Client> users;
    bool ok;
public:

    Logare(int balantaCont, bool ok);
    Logare(int balantaCont, const std::vector<Client> &users, bool ok);

    int getBalantaCont() const;

    void setBalantaCont(int balantaCont);

    const std::vector<Client> &getUsers() const;

    void setUsers(const std::vector<Client> &users);

    bool isOk() const;

    void setOk(bool ok);

    void user_add(const Client client);

    void login(std::string nume);

};




#endif //PROIECT_POO_LOGARE_H
