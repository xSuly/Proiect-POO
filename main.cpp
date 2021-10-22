//
// Created by xSuly on 10/22/2021.
//


#include <iostream>
#include<string>
#include<vector>

class Magazin{
    std::string nume_magazin;
    std::string oras;
    std::string adresa;
    std::string program;
    std::string numar_telefon;
    std::string site_web;
public:
    Magazin(const std::string &numeMagazin, const std::string &oras, const std::string &adresa, const std::string &program, const std::string &numarTelefon, const std::string &siteWeb) : nume_magazin(numeMagazin), oras(oras), adresa(adresa), program(program), numar_telefon(numarTelefon), site_web(siteWeb) {}

    Magazin(const Magazin &copie){
        this->nume_magazin=copie.nume_magazin;
        this->oras=copie.oras;
        this->adresa=copie.adresa;
        this->program=copie.program;
        this->numar_telefon=copie.numar_telefon;
        this->site_web=copie.site_web;
    }

    Magazin& operator=(const Magazin& copie){
        this->nume_magazin=copie.nume_magazin;
        this->oras=copie.oras;
        this->adresa=copie.adresa;
        this->program=copie.program;
        this->numar_telefon=copie.numar_telefon;
        this->site_web=copie.site_web;
        return *this;
    }

    ~Magazin() {
        std::cout<<"test ";
    }

    friend std::ostream &operator<<(std::ostream &os, const Magazin &magazin) {
        os <<"Nume magazin: " <<magazin.nume_magazin<<std::endl<< "Oras: " << magazin.oras << std::endl << "Adresa: " << magazin.adresa << std::endl << "Orar: " << magazin.program<< std::endl << "Numar de telefon: " << magazin.numar_telefon << std::endl << "Adresa site web magazin: " << magazin.site_web << std::endl;
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

    Magazin m1("watchshop", "braila", "bulevardul decebal", "08:30 - 19:45", "0700111222", "watch.com");
    Magazin m2("shopwatch", "galati", "bulevardul traian", "08:30 - 19:45", "0700333444", "shop.com");
    Magazin m3("magazin ceasuri", "ramnicu sarat", "strada burebista", "08:30 - 19:45", "0700555666", "ceasuri.com");
    Ceas ceasornicarie("rolex", "roly", 18500.0, 1997);
    Client c1("george", "johnny", "buzau", "strada principatelor", {});
    c1.adaugare_produs(ceasornicarie);

    return 0;
}

