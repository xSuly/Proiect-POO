//
// Created by Liviu-Daniel on 11/13/2021.
//

#ifndef PROIECT_POO_CLIENT_H
#define PROIECT_POO_CLIENT_H

#include <string>
#include <vector>
#include"Ceas.h"
#include "Magazin.h"
#include "Logare.h"

class Client{
    std::string nume;
    std::string prenume;
    std::string username;
    std::string password;
    std::string oras;
    std::string adresa_de_livrare;
    std::vector <Ceas> cos_de_cumparaturi;
    std::vector <Ceas> magazin_cautat;
    float suma=0;
public:
    Client();
    void adaugare_produs(Ceas Ceas)
    {
        cos_de_cumparaturi.push_back(Ceas);
    }
    void adaugare_magazin(Magazin Magazin)
    {
        magazin_cautat.push_back(Magazin);
    }
    void calculare_total(Ceas Ceas)
    {
        suma = suma + Ceas.pret;
        if(suma<balanta_cont)
            std::cout<<"Nu aveti balanta necesara achizitionarii modelului/modelelor.";
        else std::cout<<"Puteti achizitiona modelul/modelele cu balanta detinuta in cont";
    }

    Client(const std::string &nume, const std::string &prenume, const std::string &username, const std::string &password, const std::string &oras, const std::string &adresaDeLivrare);
    Client(const std::string &nume, const std::string &prenume, const std::string &username, const std::string &password, const std::string &oras, const std::string &adresaDeLivrare, const std::vector<Ceas> &cosDeCumparaturi);
    Client(const Client& copie);
    Client& operator=(const Client& copie);
    friend std::ostream &operator<<(std::ostream &os, const Client &client);

    const std::string &getNume() const;

    void setNume(const std::string &nume);

    const std::string &getPrenume() const;

    void setPrenume(const std::string &prenume);

    const std::string &getUsername() const;

    void setUsername(const std::string &username);

    const std::string &getPassword() const;

    void setPassword(const std::string &password);

    const std::string &getOras() const;

    void setOras(const std::string &oras);

    const std::string &getAdresaDeLivrare() const;

    void setAdresaDeLivrare(const std::string &adresaDeLivrare);

    const std::vector <Ceas> &getCosDeCumparaturi() const;

    void setCosDeCumparaturi(const std::vector <Ceas> &cosDeCumparaturi);

};



#endif //PROIECT_POO_CLIENT_H
