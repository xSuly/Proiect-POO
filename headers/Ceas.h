//
// Created by Liviu-Daniel on 11/13/2021.
//

#ifndef PROIECT_POO_CEAS_H
#define PROIECT_POO_CEAS_H

#include <string>

class Ceas{
    std::string brand;
    std::string model;
    float pret;
    int an_fabricatie;
public:
    Ceas(const std::string &brand, const std::string &model, float pret, int anFabricatie);

    friend std::ostream &operator<<(std::ostream &os, const Ceas &ceas);

    const std::string &getBrand() const;

    void setBrand(const std::string &brand);

    const std::string &getModel() const;

    void setModel(const std::string &model);

    float getPret() const;

    void setPret(float pret);

    int getAnFabricatie() const;

    void setAnFabricatie(int anFabricatie);

};



#endif //PROIECT_POO_CEAS_H
