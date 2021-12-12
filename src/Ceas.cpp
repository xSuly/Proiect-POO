//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Ceas.h"


Ceas::Ceas(const std::string &brand, const std::string &model, float pret, int anFabricatie) : brand(brand), model(model), pret(pret), an_fabricatie(anFabricatie) {
    if(pret<50)
        throw eroare_pret();
}


std::ostream &operator<<(std::ostream &os, const Ceas &ceas) {
    //os << "Brand: " << ceas.brand << std::endl << "Model: " << ceas.model << std::endl << "Pret: " << ceas.pret << std::endl << "Anul fabricatiei: "<< ceas.an_fabricatie << std::endl;
    ceas.afisare(os);
    return os;
}

void Ceas::afisare(std::ostream &os) const{
    const auto &Ceas = *this;
    os << "Brand: " << Ceas.brand << std::endl << "Model: " << Ceas.model << std::endl << "Pret: " << Ceas.pret << std::endl << "An fabricatie: " << Ceas.an_fabricatie << std::endl;
}



const std::string &Ceas::getBrand() const {
    return brand;
}

void Ceas::setBrand(const std::string &brand) {
    Ceas::brand = brand;
}

const std::string &Ceas::getModel() const {
    return model;
}

void Ceas::setModel(const std::string &model) {
    Ceas::model = model;
}

float Ceas::getPret() const {
    return pret;
}

void Ceas::setPret(float pret) {
    Ceas::pret = pret;
}

int Ceas::getAnFabricatie() const {
    return an_fabricatie;
}

void Ceas::setAnFabricatie(int anFabricatie) {
    an_fabricatie = anFabricatie;
}

