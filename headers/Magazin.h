//
// Created by Liviu-Daniel on 11/13/2021.
//

#ifndef PROIECT_POO_MAGAZIN_H
#define PROIECT_POO_MAGAZIN_H

#include <string>

class Magazin{
    std::string nume_magazin;
    std::string oras;
    std::string adresa;
    int ora_deschidere;
    int ora_inchidere;
    std::string numar_telefon;
    std::string site_web;
public:
    Magazin();
    Magazin(const std::string &numeMagazin, const std::string &oras, const std::string &adresa, /*const std::string &program*/int ora_deschidere, int ora_inchidere, const std::string &numarTelefon, const std::string &siteWeb)

    Magazin(const Magazin &copie);

    Magazin& operator=(const Magazin& copie);
    ~Magazin();
    friend std::ostream &operator<<(std::ostream &os, const Magazin &cinema);

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


};



#endif //PROIECT_POO_MAGAZIN_H
