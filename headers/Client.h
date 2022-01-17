//
// Created by Liviu-Daniel on 11/13/2021.
//

#ifndef PROIECT_POO_CLIENT_H
#define PROIECT_POO_CLIENT_H

#include <string>
#include <vector>
#include"Ceas.h"
#include "Magazin.h"
#include <cstdio>
#include <ctime>
//#include "../headers/Logare.h"

class Client{
    std::string nume;
    std::string prenume;
    std::string username;
    std::string password;
    std::string oras;
    std::string adresa_de_livrare;
    std::vector <std::string> cos_de_cumparaturi;
    std::vector <Magazin<int>> magazin_cautat;
   // float suma=0;
    float balanta_cont=0;
    float pret_achizitie=0;
    friend class client_builder;
public:
    Client();
    void adaugare_produs(const Ceas &Ceas)
    {
        cos_de_cumparaturi.push_back(Ceas.getModel());
        pret_achizitie+=Ceas.getPret();
    }
    void adaugare_magazin(const Magazin<int> &Magazin)
    {
        magazin_cautat.push_back(Magazin);
    }
    void cautare_produs_magazin(const Ceas &Ceas, const Magazin<int> &Magazin)
    {
        /// todo
    }



    void calculare_total()
    {
        std::cout<<pret_achizitie<<" LEI.\n";
        if(pret_achizitie<balanta_cont)
            std::cout<<"Puteti achizitiona modelul/modelele cu balanta detinuta in cont\n";
        else std::cout<<"Nu aveti balanta necesara achizitionarii modelului/modelelor. Mai trebuie sa adaugati "<<pret_achizitie-balanta_cont<<" RON.\n";

    }
    void adaugare_balanta(float suma)
    {
        balanta_cont+=suma;
    }

    //Client(const std::string &nume, const std::string &prenume, const std::string &username, const std::string &password, const std::string &oras, const std::string &adresaDeLivrare, float balanta_cont);
    //Client(const std::string &nume, const std::string &prenume, const std::string &username, const std::string &password, const std::string &oras, const std::string &adresaDeLivrare, float balanta_cont, const std::vector<std::string> &cosDeCumparaturi);
    Client(const Client& copie);
    Client& operator=(const Client& copie);
    friend std::ostream &operator<<(std::ostream &os, const Client &client);

    const std::string &getNume() const;

    //void setNume(const std::string &nume);

    const std::string &getPrenume() const;

    //void setPrenume(const std::string &prenume);

    const std::string &getUsername() const;

    //void setUsername(const std::string &username);

    const std::string &getPassword() const;

    //void setPassword(const std::string &password);

    const std::string &getOras() const;

    //void setOras(const std::string &oras);

    const std::string &getAdresaDeLivrare() const;

    //void setAdresaDeLivrare(const std::string &adresaDeLivrare);

    const std::vector <std::string> &getCosDeCumparaturi() const;

    //void setCosDeCumparaturi(const std::vector <std::string> &cosDeCumparaturi);

    float getBalantaCont() const;

    //void setBalantaCont(float balantaCont);

};

class client_builder{
private:
    class Client Client;

public:
    client_builder() = default;
    client_builder& nume(const std::string& nume){
        Client.nume = nume;
        return *this;
    }
    client_builder& prenume(const std::string& prenume){
        Client.prenume = prenume;
        return *this;
    }
    client_builder& username(const std::string& username){
        Client.username = username;
        return *this;
    }
    client_builder& password(const std::string& password){
        Client.password = password;
        return *this;
    }
    client_builder& oras(const std::string& oras){
        Client.oras = oras;
        return *this;
    }
    client_builder& adresa_de_livrare(const std::string& adresa_de_livrare){
        Client.adresa_de_livrare = adresa_de_livrare;
        return *this;
    }
    client_builder& cos_de_cumparaturi(const std::vector<std::string>& cos_de_cumparaturi){
        Client.cos_de_cumparaturi = cos_de_cumparaturi;
        return *this;
    }
    client_builder& magazin_cautat(const std::vector<Magazin<int>>& magazin_cautat){
        Client.magazin_cautat = magazin_cautat;
        return *this;
    }
    class Client build(){
        return Client;
    }
};



#endif //PROIECT_POO_CLIENT_H
