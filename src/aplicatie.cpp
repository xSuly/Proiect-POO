//
// Created by Liviu-Daniel on 1/17/2022.
//

#include <vector>
#include <string>
#include "../headers/aplicatie.h"


aplicatie::aplicatie(const std::vector<Magazin<int>> &magazine, const std::vector<Client> &clienti,
                     const std::vector<Ceas> &ceasuri, const std::string &numeAplicatie,
                     const std::string &creatorAplicatie) : magazine(magazine), clienti(clienti), ceasuri(ceasuri),
                                                            nume_aplicatie(numeAplicatie),
                                                            creator_aplicatie(creatorAplicatie) {}

std::ostream &operator<<(std::ostream &os, const aplicatie &aplicatie) {
    std::cout<<"Magazine partenere: ";
    for(const auto &Magazin : aplicatie.magazine)
        std::cout << Magazin.getNumeMagazin() << "\n";
    std::cout<<"Clienti ce utilizeaza aplicatia: ";
    for(const auto &Client : aplicatie.clienti)
        std::cout << Client.getUsername() << "\n";
    std::cout <<"Ceasuri disponibile: \n";
    for(const auto &Ceas : aplicatie.ceasuri)
        std::cout << "Brand: "<< Ceas.getBrand() <<", model: " << Ceas.getModel() << ".\n";
    return os;
}

void aplicatie::adauga_magazin(const Magazin<int> &magazin) {
    magazine.push_back(magazin);
}

void aplicatie::adauga_client(const Client &client) {
    clienti.push_back(client);
}

void aplicatie::adauga_ceas(const Ceas &ceas) {
    ceasuri.push_back(ceas);
}

const std::string &aplicatie::getNumeAplicatie() const {
    return nume_aplicatie;
}

const std::string &aplicatie::getCreatorAplicatie() const {
    return creator_aplicatie;
}

aplicatie::~aplicatie() {
    delete app;
}

aplicatie* aplicatie::app = nullptr;