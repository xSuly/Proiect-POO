
//
// Created by xSuly on 10/22/2021.
//

// Proiect POO - Aplicatie magazin ceasuri de mana
// Albei Liviu-Andrei
// 261

#include <iostream>
#include<string>
#include"headers/Magazin.h"
#include"headers/Ceas.h"
#include"headers/Client.h"
#include"headers/Logare.h"
#include<vector>

int main() {

    Magazin m1("Watchshop", "Braila", "Bulevardul Decebal", 8, 20, "0700111222", "watch.com");
    Magazin m2("Shopwatch", "Galati", "Bulevardul Traian", 9, 19, "0700333444", "shop.com");
    Magazin m3("Magazin Ceasuri", "Ramnicu Sarat", "Strada Burebista", 10, 20,  "0700555666", "ceasuri.com");
    Ceas ceasornicarie("Rolex", "40MM ROLEX DAYTONA WATCH", 115000.0, 2021);
    Client c1("George", "Johnny", "GeorgJohn", "parolaGrea" "Buzau", "Strada Principatelor", {});
    c1.adaugare_produs(ceasornicarie);

    Magazin m4("Magazin ceasuri de mana luxury", "Bucuresti", "Strada Unirii", 7, 16,  "0725364758", "luxurywatch.ro");
    Ceas model2("Fossil", "Townsman ME3197 Black", 825.0, 2019);
    Ceas model3("Emporio Armani", "Renato AR2448 Argintiu", 1010.0, 2015);
    //Magazin m5("Magazin", "rm", "str", 12, 15, "0707070707", "site.com");

    Client c2("Liviu", "Andrei", "xSuly", "romania22" "Ramnicu Sarat", "Bulevardul 1 Decembrie 1918", {});
    Client c3("Cosmin", "Costin", "coco01", "cosmincoco" "Comuna Ciorasti", "Strada Scolii", {});
    c2.adaugare_produs(model2);
    c3.adaugare_produs(model3);

    Client c4;
    c4=c3;
    c4.adaugare_produs(model3);
    Logare l1({}, c2);

    return 0;
}

