
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
#include"headers/Modele ceas.h"
#include<vector>

int main() {

    Magazin m1("Watchshop", "Braila", "Bulevardul Decebal", 8, 20, "0700111222", "watch.com");
    Magazin m2("Shopwatch", "Galati", "Bulevardul Traian", 9, 19, "0700333444", "shop.com");
    Magazin m3("Magazin Ceasuri", "Ramnicu Sarat", "Strada Burebista", 10, 20,  "0700555666", "ceasuri.com");
    Ceas rolexDaytona40("Rolex", "40MM ROLEX DAYTONA WATCH", 115000.0, 2021);
    Client c1("George", "Johnny", "GeorgJohn", "parolaGrea", "Buzau", "Strada Principatelor", {});
    c1.adaugare_produs({rolexDaytona40});

    Magazin m4("Magazin ceasuri de mana luxury", "Bucuresti", "Strada Unirii", 7, 16,  "0725364758", "luxurywatch.ro");
    Ceas model2("Fossil", "Townsman ME3197 Black", 825.0, 2019);
    Ceas model3("Emporio Armani", "Renato AR2448 Argintiu", 1010.0, 2015);
    //Magazin m5("Magazin", "rm", "str", 12, 15, "0707070707", "site.com");

    Client c2("Liviu", "Andrei", "xSuly", "romania22", "Ramnicu Sarat", "Bulevardul 1 Decembrie 1918", {}, {});
    Client c3("Cosmin", "Costin", "coco01", "cosmincoco", "Comuna Ciorasti", "Strada Scolii", {}, {});

    std::cout<< c2 << "\n";

    //c2.adaugare_produs({model2});
    c3.adaugare_produs({model3});

    Client c4;
    c4=c3; // operatorul =
    /*std::cout<< c3 << "\n" << c4 <<"\n";
    c4.setUsername("coco99");
    std::cout<<c4<<"\n";*/ //testare operator =

    c2.adaugare_produs({model3});
    c2.adaugare_produs({model2});
    std::cout<<c2<<"\n";

    c2.adaugare_balanta(1834);
    std::cout<<"Pretul modelelor achizitionate de "<<c2.getNume()<<" "<<c2.getPrenume()<<" este de ";
    c2.calculare_total();

    m1.adaugare_produs_disponibil("Townsman ME3197 Black", 825.0);
    m1.adaugare_produs_disponibil("Renato AR2448 Argintiu", 1010.0);
    m1.afisare_modele_disponibile(m1);
    c2.adaugare_magazin({m1});



    c4.adaugare_magazin({m1});
    c4.adaugare_magazin({m2});
    m1.adaugare_produs_disponibil("40MM ROLEX DAYTONA WATCH", 115000.0);

    c4.adaugare_balanta(100);
    std::cout<< "Balanta cont pentru "<<c4.getNume()<< " "<<c4.getPrenume()<<" este de "<<c4.getBalantaCont()<<" RON.\n";
    c4.adaugare_balanta(521.5);
    std::cout<< "Balanta cont pentru "<<c4.getNume()<< " "<<c4.getPrenume()<<" este de "<<c4.getBalantaCont()<<" RON.\n";

    Logare l1({});
    //l1.login({c2});

    try{
        Magazin Victoria("Victoria Watches", "Ramnicu Sarat", "Bulevardul Principal", 8, 20, "0700491222", "watchRms.com");
        Rolex r1 = Rolex("Rolex", "Submariner 40mm", 23500.0, 2018, false, true, "Zale");
    }
    catch(eroare_magazin &eroare){
        std::cout << eroare.what() << std::endl;
    }



    return 0;
}

