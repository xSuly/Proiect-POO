//
// Created by Liviu-Daniel on 12/4/2021.
//

#include "../headers/Modele ceas.h"

Rolex::Rolex(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea): Ceas(brand, model, pret, anFabricatie), Smartwatch(Smartwatch), rezistentApa(rezistentApa), tipCurea(tipCurea) {}
Rolex::~Rolex() {};

Fossil::Fossil(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea): Ceas(brand, model, pret, anFabricatie), Smartwatch(Smartwatch), rezistentApa(rezistentApa), tipCurea(tipCurea) {}
Fossil::~Fossil() {};

Atlantic::Atlantic(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea): Ceas(brand, model, pret, anFabricatie), Smartwatch(Smartwatch), rezistentApa(rezistentApa), tipCurea(tipCurea) {}
Atlantic::~Atlantic() {};

void Rolex::afisare(std::ostream &os) const {
    os << "Smartwatch: " << Smartwatch << std::endl << "Rezistent apa?: " << rezistentApa << std::endl << "Tip curea: " << tipCurea << std::endl;
    Rolex::afisare(os);
}
void Fossil::afisare(std::ostream &os) const {
    os << "Smartwatch: " << Smartwatch << std::endl << "Rezistent apa?: " << rezistentApa << std::endl << "Tip curea: " << tipCurea << std::endl;
    Fossil::afisare(os);
}
void Atlantic::afisare(std::ostream &os) const {
    os << "Smartwatch: " << Smartwatch << std::endl << "Rezistent apa?: " << rezistentApa << std::endl << "Tip curea: " << tipCurea << std::endl;
    Atlantic::afisare(os);
}