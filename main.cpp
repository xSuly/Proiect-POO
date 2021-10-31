
//
// Created by xSuly on 10/22/2021.
//

// Proiect POO - Aplicatie magazin ceasuri de sana
// Albei Liviu-Andrei
// 261

#include <iostream>
#include<string>
#include<vector>

class Magazin{
    std::string nume_magazin;
    std::string oras;
    std::string adresa;
    //std::string program;
    int ora_deschidere;
    int ora_inchidere;
    std::string numar_telefon;
    std::string site_web;
public:
    Magazin(const std::string &numeMagazin, const std::string &oras, const std::string &adresa, /*const std::string &program*/int ora_deschidere, int ora_inchidere, const std::string &numarTelefon, const std::string &siteWeb) : nume_magazin(numeMagazin), oras(oras), adresa(adresa), ora_inchidere(ora_inchidere), ora_deschidere(ora_deschidere), /*program(program)*/numar_telefon(numarTelefon), site_web(siteWeb) {}

    Magazin(const Magazin &copie){
        this->nume_magazin=copie.nume_magazin;
        this->oras=copie.oras;
        this->adresa=copie.adresa;
        //this->program=copie.program;
        this->ora_inchidere=copie.ora_inchidere;
        this->ora_deschidere=copie.ora_deschidere;
        this->numar_telefon=copie.numar_telefon;
        this->site_web=copie.site_web;
    }

    Magazin& operator=(const Magazin& copie){
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

    ~Magazin() {
        std::cout<<"test ";
    }

    friend std::ostream &operator<<(std::ostream &os, const Magazin &magazin) {
        os <<"Nume magazin: " <<magazin.nume_magazin<<std::endl<< "Oras: " << magazin.oras << std::endl << "Adresa: " << magazin.adresa << std::endl << "Orar: " << magazin.ora_inchidere<<" "<<magazin.ora_deschidere<< std::endl << "Numar de telefon: " << magazin.numar_telefon << std::endl << "Adresa site web magazin: " << magazin.site_web << std::endl;
        return os;
    }

};

class Ceas{
    std::string brand;
    std::string model;
    float pret;
    int an_fabricatie;
public:
    Ceas(const std::string &brand, const std::string &model, float pret, int anFabricatie) : brand(brand), model(model), pret(pret), an_fabricatie(anFabricatie) {}

    friend std::ostream &operator<<(std::ostream &os, const Ceas &ceas) {
        os << "Brand: " << ceas.brand << std::endl << "Model: " << ceas.model << std::endl << "Pret: " << ceas.pret << std::endl << "Anul fabricatiei: "<< ceas.an_fabricatie << std::endl;
        return os;
    }
};

class Client{
    std::string nume;
    std::string prenume;
    std::string oras;
    std::string adresa_de_livrare;
    std::vector <Ceas> cos_de_cumparaturi;
public:
    void adaugare_produs(Ceas Ceas)
    {
        cos_de_cumparaturi.push_back(Ceas);
    }
    Client(const std::string &nume, const std::string &prenume, const std::string &oras, const std::string &adresaDeLivrare, const std::vector<Ceas> &cosDeCumparaturi) : nume(nume), prenume(prenume), oras(oras), adresa_de_livrare(adresaDeLivrare), cos_de_cumparaturi(cosDeCumparaturi) {}

    Client(const Client& copie)
    {
        this->nume=copie.nume;
        this->prenume=copie.prenume;
        this->oras=copie.oras;
        this->adresa_de_livrare=copie.adresa_de_livrare;
        //this->cos_de_cumparaturi=copie.cos_de_cumparaturi;
        /*for (int i=0;i<copie.cos_de_cumparaturi.size();i++)
        {
            this->cos_de_cumparaturi.push_back(copie.cos_de_cumparaturi[i]);
        }*/
        for(const auto & Magazin : copie.cos_de_cumparaturi)
        {
            this->cos_de_cumparaturi.push_back(Magazin);
        }
    }

    Client& operator=(const Client& copie)
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
    Client()=default;

};


int main() {

    Magazin m1("Watchshop", "Braila", "Bulevardul Decebal", 8, 20, "0700111222", "watch.com");
    Magazin m2("Shopwatch", "Galati", "Bulevardul Traian", 9, 19, "0700333444", "shop.com");
    Magazin m3("Magazin Ceasuri", "Ramnicu Sarat", "Strada Burebista", 10, 20,  "0700555666", "ceasuri.com");
    Ceas ceasornicarie("Rolex", "40MM ROLEX DAYTONA WATCH", 115000.0, 2021);
    Client c1("George", "Johnny", "Buzau", "Strada Principatelor", {});
    c1.adaugare_produs(ceasornicarie);

    Magazin m4("Magazin ceasuri de mana luxury", "Bucuresti", "Strada Unirii", 7, 16,  "0725364758", "luxurywatch.ro");
    Ceas model2("Fossil", "Townsman ME3197 Black", 825.0, 2019);
    Ceas model3("Emporio Armani", "Renato AR2448 Argintiu", 1010.0, 2015);

    Client c2("Liviu", "Andrei", "Ramnicu Sarat", "Bulevardul 1 Decembrie 1918", {});
    Client c3("Cosmin", "Costin", "Comuna Ciorasti", "Strada Scolii", {});
    c2.adaugare_produs(model2);
    c3.adaugare_produs(model3);

    Client c4;
    c4=c3;
    c4.adaugare_produs(model3);


    return 0;
}

