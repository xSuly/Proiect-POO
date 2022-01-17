
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
#include"headers/Modele_ceas.h"
#include"headers/aplicatie.h"


int main() {

    Magazin<int> m1("Watchshop", "Braila", "Bulevardul Decebal", 8, 15, "0700111222", "watch.com");
    Magazin<int> m2("Shopwatch", "Galati", "Bulevardul Traian", 9, 19, "0700333444", "shop.com");
    Magazin<int> m3("Magazin Ceasuri", "Ramnicu Sarat", "Strada Burebista", 10, 20,  "0700555666", "ceasuri.com");
    Ceas rolexDaytona40("Rolex", "40MM ROLEX DAYTONA WATCH", 115000.0, 2021);
    client_builder client_build;
    Client c1 = client_build.nume("George").prenume("Johnny").username("GeorgJohn").password("parolaGrea").oras("Buzau").adresa_de_livrare("Strada Principatelor").cos_de_cumparaturi({}).magazin_cautat({}).build();
    std::cout<<"test builder: "<<c1<<"\n------------------------builder test end-----------------------\n";
    c1.adaugare_produs({rolexDaytona40});

    Magazin<int> m4("Magazin ceasuri de mana luxury", "Bucuresti", "Strada Unirii", 7, 16,  "0725364758", "luxurywatch.ro");
    Magazin<long> m5("WatchTest", "Roman", "Strada Nr. 7", 10, 17, "0725567123", "watchtest.ro");
    Magazin<unsigned int> m6("BBShop", "Focsani", "Strada Furnicilor", 8, 20, "0238561234", "bbshop.com");
    Ceas model2("Fossil", "Townsman ME3197 Black", 825.0, 2019);
    Ceas model3("Emporio Armani", "Renato AR2448 Argintiu", 1010.0, 2015);
    //Magazin m5("Magazin", "rm", "str", 12, 15, "0707070707", "site.com");

    Client c2 = client_build.nume("Liviu").prenume("Andrei").username("xSuly").password("romania22").oras("Ramnicu Sarat").adresa_de_livrare("Bulevardul 1 Decembrie 1918").cos_de_cumparaturi({}).magazin_cautat({}).build();
    Client c3 = client_build.nume("Cosmin").prenume("Costin").username("coco01").password("cosmincoco").oras("Comuna Ciorasti").adresa_de_livrare("Strada Scolii").cos_de_cumparaturi({}).magazin_cautat({}).build();


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
    m1.afisare_modele_disponibile();
    std::cout << "---------------------\n";
    c2.adaugare_magazin({m1});



    c4.adaugare_magazin({m1});
    c4.adaugare_magazin({m2});
    m1.adaugare_produs_disponibil("40MM ROLEX DAYTONA WATCH", 115000.0);

    c4.adaugare_balanta(100);
    std::cout<< "Balanta cont pentru "<<c4.getNume()<< " "<<c4.getPrenume()<<" este de "<<c4.getBalantaCont()<<" RON.\n";
    c4.adaugare_balanta(521.5);
    std::cout<< "Balanta cont pentru "<<c4.getNume()<< " "<<c4.getPrenume()<<" este de "<<c4.getBalantaCont()<<" RON.\n";

    Logare l1({});
    l1.login({c2});

    std::cout<<"try/catch ----------------------\n";

    try{
        Magazin<int> Victoria("Victoria Watches", "Ramnicu Sarat", "Bulevardul Principal", 8, 20, "0700491222", "watchRms.com");
        Rolex r1 = Rolex("Rolex", "Submariner 40mm", 23500.0, 2018, false, true, "Zale");
        std::cout << r1;
        Magazin<int> WatchMania("WatchMania", "Hunedoara", "Bulevardul Sudului", 8, 16, "0727500123", "watchManiaHD.com");
        Rolex r2 = Rolex("Rolex","Oyster Perpetual 31mm", 8046.0, 2021, false, true, "Zale");
        std::cout << r2;
        Magazin<int> WatchZoom("WatchZoom", "Iasi", "Strada Catedralei", 10, 21, "0791623887", "watchZoom.com");
        Fossil f1 = Fossil("Fossil", "MACHINE 42mm", 581.0, 2020, "Quartz(Baterie)", true, "Piele" );
        std::cout << f1;
        Atlantic a1 = Atlantic("Atlantic", "Seagold Limited Edition 40mm", 17898.0, 2019, true, true, "Piele");
        std::cout << a1;
    }
    catch(eroare_magazin &eroare){
        std::cout << eroare.what() << std::endl;
    }

    std::cout<<"--------------------ORA-----------------\n";
    m1.in_timpul_programului();
    m2.in_timpul_programului();
    std::cout<<"\n----------------------------------\n";

    auto AppWatch = aplicatie::get_app();
    AppWatch->adauga_magazin(m1);
    AppWatch->adauga_magazin(m2);
    AppWatch->adauga_client(c1);
    AppWatch->adauga_client(c2);
    AppWatch->adauga_ceas(rolexDaytona40);
    AppWatch->adauga_ceas(model2);

    std::cout<<"Aplicatia pe care o folositi se numeste: ";
    std::cout<<AppWatch->getNumeAplicatie()<<"\n";
    std::cout<<"Aplicatia a fost creata de catre "<<AppWatch->getCreatorAplicatie()<<".\n";
    std::cout<<*AppWatch;


    return 0;
}

