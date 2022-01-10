//
// Created by Liviu-Daniel on 12/4/2021.
//

#ifndef PROIECT_POO_MODELE_CEAS_H
#define PROIECT_POO_MODELE_CEAS_H


#include"../headers/Ceas.h"
#include<string>
#include <chrono>
#include <thread>
#define MST (-7)
#define UTC (0)
#define CCT (+8)
#define WDC (-5)
#define BAT (-3)
#define CET (+1)
#define MCT (+3)


class Rolex: public Ceas{
    bool Smartwatch;
    bool rezistentApa;
    std::string tipCurea;

public:
    Rolex(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool Smartwatch, bool rezistentApa, const std::string &tipCurea);
    ~Rolex();
    Rolex();
    //friend std::ostream &operator<<(std::ostream &os, const Ceas &Rolex);
protected:
    void afisare(std::ostream &os) const override;
    void display_ora() const;
    void display_ora_pe_glob() const
    {
        time_t rawtime;
        struct tm * ptm;

        time ( &rawtime );

        ptm = gmtime ( &rawtime );

        std::cout<<"Ora curenta in jurul Lumii: \n";

        std::cout<<"Phoenix, AZ (U.S.A.)-> " << (ptm->tm_hour+MST)%24<<":"<<ptm->tm_min<<"\n";
        std::cout<<"Reykjavik (Islanda)-> " << (ptm->tm_hour+UTC)%24<<":"<<ptm->tm_min<<"\n";
        std::cout<<"Beijing (China)-> " << (ptm->tm_hour+CCT)%24<<":"<<ptm->tm_min<<"\n";
        std::cout<<"Washington DC (U.S.A.)-> " << (ptm->tm_hour+WDC)%24<<":"<<ptm->tm_min<<"\n";
        std::cout<<"Buenos Aires (Argentina)-> " << (ptm->tm_hour+BAT)%24<<":"<<ptm->tm_min<<"\n";
        std::cout<<"Roma (Italia), Paris (Franta), Madrid (Spania)-> " << (ptm->tm_hour+CET)%24<<":"<<ptm->tm_min<<"\n";
        std::cout<<"Moscova (Rusia)-> " << (ptm->tm_hour+MCT)%24<<":"<<ptm->tm_min<<"\n";
    }

};

class Fossil: public Ceas{
    std::string Mecanism;
    bool rezistentApa;
    std::string tipCurea;

public:
    Fossil(const std::string &brand, const std::string &model, float pret, int anFabricatie, const std::string &Mecanism, bool rezistentApa, const std::string &tipCurea);
    ~Fossil();
    Fossil();
protected:
    void afisare(std::ostream &os) const override;
    void afisare_data_fossil() const
    {
        setlocale(LC_ALL, "ro_RO");
        time_t t = time(nullptr);
        tm *ltm = localtime(&t);
        char mbstr[100];
        if (strftime(mbstr, sizeof(mbstr), "%A", localtime(&t)))
        {
            std::cout << "Astazi este "<<mbstr << ", "<<(ltm->tm_mday)<<"."<< (ltm->tm_mon)+1 <<"."<< (ltm->tm_year)+1900<<".\n";
        }

    };

};

class Atlantic: public Ceas{
    bool afisareData;
    bool rezistentApa;
    std::string tipCurea;

public:
    Atlantic(const std::string &brand, const std::string &model, float pret, int anFabricatie, bool afisareData, bool rezistentApa, const std::string &tipCurea);
    ~Atlantic();
    Atlantic();
protected:
    void afisare(std::ostream &os) const override;
    void cronometru() const
    {
        int sec = 0;
        int stopwatch;
        std::cout<<"Cate secunde sa funtioneze cronometrul?: ";
        std::cin>>stopwatch;
        std::cout<<std::endl;
        while(stopwatch>sec) {
            std::this_thread::sleep_for(std::chrono::seconds(1));
            sec++;
            std::cout << sec << std::endl;
        }
        std::cout<<"Cele "<<sec<<" secunde setate pe cronometrul ceasului Atlantic tocmai s-au scurs!\n";
    }

};


#endif //PROIECT_POO_MODELE_CEAS_H
