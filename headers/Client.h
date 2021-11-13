//
// Created by Liviu-Daniel on 11/13/2021.
//

#ifndef PROIECT_POO_CLIENT_H
#define PROIECT_POO_CLIENT_H

#include <string>
#include <vector>
#include"Ceas.h"

class Client{
    std::string nume;
    std::string prenume;
    std::string oras;
    std::string adresa_de_livrare;
    std::vector <Ceas> cos_de_cumparaturi;
public:
    Client();
    void adaugare_produs(Ceas Ceas)
    {
        cos_de_cumparaturi.push_back(Ceas);
    }
    Client(const std::string &nume, const std::string &prenume, const std::string &oras, const std::string &adresaDeLivrare);
    Client(const std::string &nume, const std::string &prenume, const std::string &oras, const std::string &adresaDeLivrare, const std::vector<Ceas> &cosDeCumparaturi);

    std::string &getNume() const;

    void setNume(const std::string &nume);

    const std::string &getPrenume() const;

    void setPrenume(const std::string &prenume);

    const std::string &getOras() const;

    void setOras(const std::string &oras);

    const std::string &getAdresaDeLivrare() const;

    void setAdresaDeLivrare(const std::string &adresaDeLivrare);

    const std::vector <Ceas> &getCosDeCumparaturi() const;

    void setCosDeCumparaturi(const std::vector <Ceas> &cosDeCumparaturi);

};



#endif //PROIECT_POO_CLIENT_H
