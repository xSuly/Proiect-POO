//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Ceas.h"

Ceas::Ceas() {}

Ceas::Ceas(const std::string &brand, const std::string &model, float pret, int anFabricatie) : brand(brand), model(model), pret(pret), an_fabricatie(anFabricatie) {}


friend std::ostream &operator<<(std::ostream &os, const Ceas &ceas) {
    os << "Brand: " << ceas.brand << std::endl << "Model: " << ceas.model << std::endl << "Pret: " << ceas.pret << std::endl << "Anul fabricatiei: "<< ceas.an_fabricatie << std::endl;
    return os;
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

