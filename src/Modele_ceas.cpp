//
// Created by Liviu-Daniel on 12/4/2021.
//

#include "../headers/Modele_ceas.h"

Rolex::Rolex(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea): Ceas(brand, model, pret, anFabricatie), Smartwatch(Smartwatch), rezistentApa(rezistentApa), tipCurea(tipCurea) {}
Rolex::~Rolex() {};

Fossil::Fossil(const std::string &brand, const std::string &model, float pret, int anFabricatie, const std::string &Mecanism, bool rezistentApa, const std::string &tipCurea): Ceas(brand, model, pret, anFabricatie), Mecanism(Mecanism), rezistentApa(rezistentApa), tipCurea(tipCurea) {}
Fossil::~Fossil() {};

Atlantic::Atlantic(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool afisareData, bool rezistentApa, const std::string &tipCurea): Ceas(brand, model, pret, anFabricatie), afisareData(afisareData), rezistentApa(rezistentApa), tipCurea(tipCurea) {}
Atlantic::~Atlantic() {};

void Rolex::afisare(std::ostream &os) const {
    Ceas::display_ora();
    Ceas::afisare(os);
    //os << "Smartwatch: " << Smartwatch << std::endl << "Rezistent apa?: " << rezistentApa << std::endl << "Tip curea: " << tipCurea << std::endl;
    os << "Smartwatch: ";
    if(Smartwatch == 1)
        os<< "Da" << std::endl;
    else os<< "Nu" << std::endl;
    os<< "Rezistent la apa?: ";
    if(rezistentApa == 1)
        os << "Da" <<std::endl;
    else os <<"Nu" <<std::endl;
    os<<"Tip curea: "<<tipCurea<<std::endl<<std::endl;
}

void Rolex::display_ora() const {
    Ceas::display_ora();
}

void Fossil::afisare(std::ostream &os) const {
    Ceas::afisare(os);
    os << "Tip mecanism: " << Mecanism << std::endl;
    os<< "Rezistent la apa?: ";
    if(rezistentApa == 1)
        os << "Da" <<std::endl;
    else os <<"Nu" <<std::endl;
    os<<"Tip curea: "<<tipCurea<<std::endl<<std::endl;
}
void Atlantic::afisare(std::ostream &os) const {
    Ceas::afisare(os);
    os << "Afiseaza data?: ";
    if(afisareData == 1)
        os<< "Da" << std::endl;
    else os<< "Nu" << std::endl;
    os<< "Rezistent la apa?: ";
    if(rezistentApa == 1)
        os << "Da" <<std::endl;
    else os <<"Nu" <<std::endl;
    os<<"Tip curea: "<<tipCurea<<std::endl<<std::endl;
}