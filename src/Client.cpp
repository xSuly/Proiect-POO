//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Client.h"

    Client::Client() {}


    Client::Client(const std::string &nume, const std::string &prenume, const std::string &oras, const std::string &adresaDeLivrare) : nume(nume), prenume(prenume), oras(oras), adresa_de_livrare(adresaDeLivrare){}
    Client::Client(const std::string &nume, const std::string &prenume, const std::string &oras, const std::string &adresaDeLivrare, const std::vector<Ceas> &cosDeCumparaturi) : nume(nume), prenume(prenume), oras(oras), adresa_de_livrare(adresaDeLivrare), cos_de_cumparaturi(cosDeCumparaturi) {}

    Client::Client(const Client& copie)
{
    this->nume=copie.nume;
    this->prenume=copie.prenume;
    this->oras=copie.oras;
    this->adresa_de_livrare=copie.adresa_de_livrare;
    for(const auto & Ceas : copie.cosDeCumparaturi)
    {
        this->cos_de_cumparaturi.push_back(Ceas);
    }
}

Client& Client::operator=(const Client& copie)
{
    if(this!=&copie)
    {
        this->nume=copie.nume;
        this->prenume=copie.prenume;
        this->oras=copie.oras;
        this->adresa_de_livrare=copie.adresa_de_livrare;
        this->cos_de_cumparaturi=copie.cos_de_cumparaturi;
    }
    return *this;
}
Client::Client()=default;


    const std::string &Client::getNume() const {
    return nume;
}

void Client::setNume(const std::string &nume) {
    Client::nume = nume;
}

const std::string &Client::getPrenume() const {
    return prenume;
}

void Client::setPrenume(const std::string &prenume) {
    Client::prenume = prenume;
}

const std::string &Client::getOras() const {
    return oras;
}

void Client::setOras(const std::string &oras) {
    Client::oras = oras;
}

const std::string &Client::getAdresaDeLivrare() const {
    return adresa_de_livrare;
}

void Client::setAdresaDeLivrare(const std::string &adresaDeLivrare) {
    adresa_de_livrare = adresaDeLivrare;
}

const std::vector<Ceas> &Client::getCosDeCumparaturi() const {
    return cos_de_cumparaturi;
}

void Client::setCosDeCumparaturi(const std::vector<Ceas> &cosDeCumparaturi) {
    cos_de_cumparaturi = cosDeCumparaturi;
}



