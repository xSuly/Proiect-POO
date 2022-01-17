//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Magazin.h"
#include<iostream>

template <typename T>
int Magazin<T>::maxId = 1;

template <typename T>
Magazin<T>::Magazin(): id(maxId){
    maxId++;
    if(nume_magazin.length()<5)
        throw nume_scurt_magazin();
    if(ora_deschidere<7)
        throw ora_deschidere_invalida();
}

template <typename T>
Magazin<T>::Magazin(const std::string &numeMagazin, const std::string &oras, const std::string &adresa, T ora_deschidere, T ora_inchidere, const std::string &numarTelefon, const std::string &siteWeb) : nume_magazin(numeMagazin), oras(oras), adresa(adresa), ora_inchidere(ora_inchidere), ora_deschidere(ora_deschidere), numar_telefon(numarTelefon), site_web(siteWeb), id(maxId) {
    maxId++;
    if(nume_magazin.length()<5)
        throw nume_scurt_magazin();
    if(ora_deschidere<7)
        throw ora_deschidere_invalida();
    if(numarTelefon.length()!=10)
        throw eroare_telefon();
}

template <typename T>
Magazin<T>::Magazin(const Magazin &copie): id(maxId){
    this->nume_magazin=copie.nume_magazin;
    this->oras=copie.oras;
    this->adresa=copie.adresa;
    //this->program=copie.program;
    this->ora_inchidere=copie.ora_inchidere;
    this->ora_deschidere=copie.ora_deschidere;
    this->numar_telefon=copie.numar_telefon;
    this->site_web=copie.site_web;
    maxId++;
}

template <typename T>
Magazin<T>& Magazin<T>::operator=(const Magazin& copie){
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

template <typename T>
Magazin<T>::~Magazin() {
    std::cout<<"destructor magazin \n";
}

template <typename T>
 std::ostream &operator<<(std::ostream &os, const Magazin<int> &magazin) {
    os <<"Nume magazin: " <<magazin.nume_magazin<<std::endl<< "Oras: " << magazin.oras << std::endl << "Adresa: " << magazin.adresa << std::endl << "Orar: " << magazin.ora_inchidere<<" "<<magazin.ora_deschidere<< std::endl << "Numar de telefon: " << magazin.numar_telefon << std::endl << "Adresa site web magazin: " << magazin.site_web << std::endl;
    return os;
}

template <typename T>
const std::string &Magazin<T>::getNumeMagazin() const {
    return nume_magazin;
}

template <typename T>
void Magazin<T>::setNumeMagazin(const std::string &numeMagazin) {
    nume_magazin = numeMagazin;
}

template <typename T>
const std::string &Magazin<T>::getOras() const {
    return oras;
}

template <typename T>
void Magazin<T>::setOras(const std::string &oras) {
    Magazin::oras = oras;
}

template <typename T>
const std::string &Magazin<T>::getAdresa() const {
    return adresa;
}

template <typename T>
void Magazin<T>::setAdresa(const std::string &adresa) {
    Magazin::adresa = adresa;
}

template <typename T>
int Magazin<T>::getOraDeschidere() const {
    return ora_deschidere;
}

template <typename T>
void Magazin<T>::setOraDeschidere(int oraDeschidere) {
    ora_deschidere = oraDeschidere;
}

template <typename T>
int Magazin<T>::getOraInchidere() const {
    return ora_inchidere;
}

template <typename T>
void Magazin<T>::setOraInchidere(int oraInchidere) {
    ora_inchidere = oraInchidere;
}

template <typename T>
const std::string &Magazin<T>::getNumarTelefon() const {
    return numar_telefon;
}

template <typename T>
void Magazin<T>::setNumarTelefon(const std::string &numarTelefon) {
    numar_telefon = numarTelefon;
}

template <typename T>
const std::string &Magazin<T>::getSiteWeb() const {
    return site_web;
}

template <typename T>
void Magazin<T>::setSiteWeb(const std::string &siteWeb) {
    site_web = siteWeb;
}

template <typename T>
int Magazin<T>::getmaxId(){
    return maxId;
}

template <typename T>
void Magazin<T>::setmaxId(const int n){
    maxId = n;
}

template class Magazin<int>;
template class Magazin<long>;
template class Magazin<unsigned int>;
