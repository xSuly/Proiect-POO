//
// Created by Liviu-Daniel on 12/4/2021.
//

#ifndef PROIECT_POO_MODELE_CEAS_H
#define PROIECT_POO_MODELE_CEAS_H


#include"../headers/Ceas.h"
#include<string>


class Rolex: public Ceas{
    bool Smartwatch;
    bool rezistentApa;
    std::string tipCurea;

public:
    Rolex(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea);
    ~Rolex();
    Rolex();
    //friend std::ostream &operator<<(std::ostream &os, const Ceas &Rolex);
protected:
    void afisare(std::ostream &os) const override;
    void display_ora() const;

};

class Fossil: public Ceas{
    std::string Mecanism;
    bool rezistentApa;
    std::string tipCurea;

public:
    Fossil(const std::string &brand, const std::string &model, float pret, int anFabricatie, const std::string &Mecanism, bool rezistentApa, const std::string &tipCurea);
    ~Fossil();
    Fossil();
protected:
    void afisare(std::ostream &os) const override;
    void afisare_data_fossil() const
    {
        setlocale(LC_ALL, "ro_RO");
        time_t t = time(nullptr);
        tm *ltm = localtime(&t);
        char mbstr[100];
        if (strftime(mbstr, sizeof(mbstr), "%A", localtime(&t)))
        {
            std::cout << "Astazi este "<<mbstr << ", "<<(ltm->tm_mday)<<"."<< (ltm->tm_mon)+1 <<"."<< (ltm->tm_year)+1900<<".\n";
        }

    };

};

class Atlantic: public Ceas{
    bool afisareData;
    bool rezistentApa;
    std::string tipCurea;

public:
    Atlantic(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool afisareData, bool rezistentApa, const std::string &tipCurea);
    ~Atlantic();
    Atlantic();
protected:
    void afisare(std::ostream &os) const override;

};


#endif //PROIECT_POO_MODELE_CEAS_H
