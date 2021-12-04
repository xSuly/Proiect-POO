//
// Created by Liviu-Daniel on 12/4/2021.
//

#ifndef PROIECT_POO_ERORI_H
#define PROIECT_POO_ERORI_H

#include<stdexcept>

class eroare_magazin : public std::runtime_error{
public:
    eroare_magazin(const std::string &arg);
};

class nume_scurt_magazin : public eroare_magazin{
public:
    nume_scurt_magazin();
};

class ora_deschidere_invalida : public eroare_magazin{
public:
    ora_deschidere_invalida();
};

class ceas_ieftin : public eroare_magazin{
public:
    ceas_ieftin();
};


#endif //PROIECT_POO_ERORI_H
