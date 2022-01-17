//
// Created by Liviu-Daniel on 1/17/2022.
//

#ifndef PROIECT_POO_APLICATIE_H
#define PROIECT_POO_APLICATIE_H

#include<vector>
#include <string>
#include <ostream>
#include "Magazin.h"
#include "Client.h"
#include "Ceas.h"

class aplicatie {
    std::vector<Magazin<int>> magazine;
    std::vector<Client> clienti;
    std::vector<Ceas> ceasuri;
    std::string nume_aplicatie;
    std::string creator_aplicatie;
private:
    aplicatie(const std::vector<Magazin<int>> &magazine, const std::vector<Client> &clienti,
              const std::vector<Ceas> &ceasuri, const std::string &numeAplicatie, const std::string &creatorAplicatie);
    static aplicatie* app;

public:
    aplicatie(const aplicatie&) = delete;
    aplicatie& operator=(const aplicatie&) = delete;
    static aplicatie* get_app(){
        if(app == nullptr) { app = new aplicatie{{},{},{},"SearchWatch - Cautare + Cumparare ceasuri", "Albei Liviu-Andrei"};
        }
        return app;
    }

    void adauga_magazin(const class Magazin<int> &magazin);
    void adauga_client(const class Client &client);
    void adauga_ceas(const class Ceas &ceas);

    friend std::ostream &operator<<(std::ostream &os, const aplicatie &aplicatie);

    const std::string &getNumeAplicatie() const;

    const std::string &getCreatorAplicatie() const;

    ~aplicatie();


};


#endif //PROIECT_POO_APLICATIE_H
