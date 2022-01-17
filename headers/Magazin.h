//
// Created by Liviu-Daniel on 11/13/2021.
//

#ifndef PROIECT_POO_MAGAZIN_H
#define PROIECT_POO_MAGAZIN_H

#include <string>
#include<vector>
#include<chrono>
#include<ctime>
#include<iostream>
#include"../headers/erori.h"

template <typename T>
class Magazin{
    std::string nume_magazin;
    std::string oras;
    std::string adresa;
    int ora_deschidere;
    T ora_inchidere;
    std::string numar_telefon;
    std::string site_web;
    std::vector < std::pair <std::string,float> > modele_disponibile;
    const int id;
    static int maxId;
    friend class magazin_builder;
public:
    Magazin();

    void adaugare_produs_disponibil(std::string nume, float pret)
    {
        modele_disponibile.push_back(std::make_pair(nume, pret));
    }

    void afisare_modele_disponibile()
    {
        for ( auto it = modele_disponibile.begin(); it != modele_disponibile.end(); ++it)
            if(it!=modele_disponibile.end()-1)
                std::cout<<"Model: "<<it->first<<"\nPret: "<<it->second<<", ";
            else std::cout<<"Model: "<<it->first<<"\nPret: "<<it->second<<".";
        std::cout<<"\n";
    }

    void in_timpul_programului()
    {
        int oraD, oraI;
        oraD=getOraDeschidere();
        oraI=getOraInchidere();
        time_t now = time(0);
        tm *ltm = localtime(&now);
        if(oraD<ltm->tm_hour && oraI>ltm->tm_hour)
            std::cout<<"Magazinul '" <<getNumeMagazin()<< "' este deschis!\n";
        else std::cout<<"Ne pare rau, magazinul '" << getNumeMagazin() << "' este inchis in acest interval orar!\n";
    }

   Magazin(const std::string &numeMagazin, const std::string &oras, const std::string &adresa, int ora_deschidere, T ora_inchidere, const std::string &numarTelefon, const std::string &siteWeb);

    Magazin(const Magazin &copie);

    Magazin& operator=(const Magazin& copie);
    ~Magazin();
    friend std::ostream &operator<<(std::ostream &os, const Magazin<int> &magazin);

    const std::string &getNumeMagazin() const;

    void setNumeMagazin(const std::string &numeMagazin);

    const std::string &getOras() const;

    void setOras(const std::string &oras);

    const std::string &getAdresa() const;

    void setAdresa(const std::string &adresa);

    int getOraDeschidere() const;

    void setOraDeschidere(int oraDeschidere);

    int getOraInchidere() const;

    void setOraInchidere(int oraInchidere);

    const std::string &getNumarTelefon() const;

    void setNumarTelefon(const std::string &numarTelefon);

    const std::string &getSiteWeb() const;

    void setSiteWeb(const std::string &siteWeb);

    static int getmaxId();

    static void setmaxId(const int);

};




#endif //PROIECT_POO_MAGAZIN_H
