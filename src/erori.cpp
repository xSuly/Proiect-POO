//
// Created by Liviu-Daniel on 12/4/2021.
//

#include "../headers/erori.h"
#include<string>

eroare_magazin::eroare_magazin(const std::string &arg) : runtime_error("Eroare magazin: " + arg)  {}

nume_scurt_magazin::nume_scurt_magazin(): eroare_magazin("Numele magazinului este prea scurt, cel putin 5 litere(fara abrevieri!)."){}

ora_deschidere_invalida::ora_deschidere_invalida(): eroare_magazin("Ora de deschidere invalida, ora 7 cel mai devreme.") {}

ceas_ieftin::ceas_ieftin(): eroare_magazin("Ceasul este prea ieftin, minim 50 RON.") {}
