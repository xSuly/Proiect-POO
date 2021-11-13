//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Magazin.h"

Magazin::Magazin() {}

Magazin::Magazin(const std::string &numeMagazin, const std::string &oras, const std::string &adresa, int ora_deschidere, int ora_inchidere, const std::string &numarTelefon, const std::string &siteWeb) : nume_magazin(numeMagazin), oras(oras), adresa(adresa), ora_inchidere(ora_inchidere), ora_deschidere(ora_deschidere), numar_telefon(numarTelefon), site_web(siteWeb) {}

Magazin::Magazin(const Magazin &copie){
    this->nume_magazin=copie.nume_magazin;
    this->oras=copie.oras;
    this->adresa=copie.adresa;
    //this->program=copie.program;
    this->ora_inchidere=copie.ora_inchidere;
    this->ora_deschidere=copie.ora_deschidere;
    this->numar_telefon=copie.numar_telefon;
    this->site_web=copie.site_web;
}

Magazin& Magazin::operator=(const Magazin& copie){
    this->nume_magazin=copie.nume_magazin;
    this->oras=copie.oras;
    this->adresa=copie.adresa;
    //this->program=copie.program;
    this->ora_deschidere=copie.ora_deschidere;
    this->ora_inchidere=copie.ora_inchidere;
    this->numar_telefon=copie.numar_telefon;
    this->site_web=copie.site_web;
    return *this;
}

Magazin::~Magazin() {
    std::cout<<"test destr";
}

friend std::ostream &operator<<(std::ostream &os, const Magazin &magazin) {
    os <<"Nume magazin: " <<magazin.nume_magazin<<std::endl<< "Oras: " << magazin.oras << std::endl << "Adresa: " << magazin.adresa << std::endl << "Orar: " << magazin.ora_inchidere<<" "<<magazin.ora_deschidere<< std::endl << "Numar de telefon: " << magazin.numar_telefon << std::endl << "Adresa site web magazin: " << magazin.site_web << std::endl;
    return os;
}

const std::string &Magazin::getNumeMagazin() const {
    return nume_magazin;
}

void Magazin::setNumeMagazin(const std::string &numeMagazin) {
    nume_magazin = numeMagazin;
}

const std::string &Magazin::getOras() const {
    return oras;
}

void Magazin::setOras(const std::string &oras) {
    Magazin::oras = oras;
}

const std::string &Magazin::getAdresa() const {
    return adresa;
}

void Magazin::setAdresa(const std::string &adresa) {
    Magazin::adresa = adresa;
}

int Magazin::getOraDeschidere() const {
    return ora_deschidere;
}

void Magazin::setOraDeschidere(int oraDeschidere) {
    ora_deschidere = oraDeschidere;
}

int Magazin::getOraInchidere() const {
    return ora_inchidere;
}

void Magazin::setOraInchidere(int oraInchidere) {
    ora_inchidere = oraInchidere;
}

const std::string &Magazin::getNumarTelefon() const {
    return numar_telefon;
}

void Magazin::setNumarTelefon(const std::string &numarTelefon) {
    numar_telefon = numarTelefon;
}

const std::string &Magazin::getSiteWeb() const {
    return site_web;
}

void Magazin::setSiteWeb(const std::string &siteWeb) {
    site_web = siteWeb;
}
