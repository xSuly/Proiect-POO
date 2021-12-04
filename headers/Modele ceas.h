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

};

class Fossil: public Ceas{
    bool Smartwatch;
    bool rezistentApa;
    std::string tipCurea;

public:
    Fossil(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea);
    ~Fossil();
    Fossil();
protected:
    void afisare(std::ostream &os) const override;

};

class Atlantic: public Ceas{
    bool Smartwatch;
    bool rezistentApa;
    std::string tipCurea;

public:
    Atlantic(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea);
    ~Atlantic();
    Atlantic();
protected:
    void afisare(std::ostream &os) const override;

};


#endif //PROIECT_POO_MODELE_CEAS_H
