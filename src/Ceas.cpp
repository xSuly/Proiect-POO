//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Ceas.h"


Ceas::Ceas(const std::string &brand, const std::string &model, float pret, int anFabricatie) : brand(brand), model(model), pret(pret), an_fabricatie(anFabricatie) {
    if(pret<50)
        throw eroare_pret();
}


std::ostream &operator<<(std::ostream &os, const Ceas &ceas) {
    //os << "Brand: " << ceas.brand << std::endl << "Model: " << ceas.model << std::endl << "Pret: " << ceas.pret << std::endl << "Anul fabricatiei: "<< ceas.an_fabricatie << std::endl;
    ceas.afisare(os);
    return os;
}

void Ceas::afisare(std::ostream &os) const{
    const auto &Ceas = *this;
    os << "Brand: " << Ceas.brand << std::endl << "Model: " << Ceas.model << std::endl << "Pret: " << Ceas.pret << std::endl << "An fabricatie: " << Ceas.an_fabricatie << std::endl;
}


const int COLS = 4;
const int ROWS = 5;
const char CLOCK_CHAR = 'O';
const char* const codes [] =
        {
                "11101010101010101110",

                "01000100010001000100",

                "11100010111010001110",

                "11100010111000101110",

                "10101010111000100010",

                "11101000111000101110",

                "11101000111010101110",

                "1110001000100010001",

                "11101010111010101110",

                "11101010111000100010",

                "00000100000001000000"
        };

char canvas [ROWS][COLS * 5] = {{0}};
void storeDigit(int digit, int offset) ///SEE README FOR DETAILS
{
    for(int row = 0; row < ROWS; row++)
    {
        for(int col = 0; col < COLS; col++)
        {
            int x = offset + col;
            int y = row;
            int dot = COLS * row + col;
            if('1' == codes [digit][dot])
            {
                canvas[y][x] = CLOCK_CHAR;
            }
        }
    }
}


void Ceas::display_ora() const{
    const auto &Client = *this;
    time_t t;
    time(&t);
    tm* local = localtime(&t);
    int hour = local->tm_hour;
    int min = local->tm_min;
    storeDigit(hour/10, 0);
    storeDigit(hour % 10, 4);
    storeDigit(10, 8);
    storeDigit(min/10, 12);
    storeDigit(min % 10, 16);
    for(int row = 0; row < ROWS; row++)
    {
        for(int col=0; col < COLS * 5;col++)
        {
            printf("%c ", canvas[row][col]);
        }
        std::cout << std::endl ;
    }

}


const std::string &Ceas::getBrand() const {
    return brand;
}

void Ceas::setBrand(const std::string &brand) {
    Ceas::brand = brand;
}

const std::string &Ceas::getModel() const {
    return model;
}

void Ceas::setModel(const std::string &model) {
    Ceas::model = model;
}

float Ceas::getPret() const {
    return pret;
}

void Ceas::setPret(float pret) {
    Ceas::pret = pret;
}

int Ceas::getAnFabricatie() const {
    return an_fabricatie;
}

void Ceas::setAnFabricatie(int anFabricatie) {
    an_fabricatie = anFabricatie;
}

