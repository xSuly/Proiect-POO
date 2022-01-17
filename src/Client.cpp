//
// Created by Liviu-Daniel on 11/13/2021.
//

#include "../headers/Client.h"




    //Client::Client(const std::string &nume, const std::string &prenume, const std::string &username, const std::string &password, const std::string &oras, const std::string &adresaDeLivrare, float balantaCont) : nume(nume), prenume(prenume), username(username), password(password), oras(oras), adresa_de_livrare(adresaDeLivrare), balanta_cont(balantaCont){}
    //Client::Client(const std::string &nume, const std::string &prenume, const std::string &username, const std::string &password, const std::string &oras, const std::string &adresaDeLivrare, float balantaCont, const std::vector<std::string> &cosDeCumparaturi) : nume(nume), prenume(prenume), username(username), password(password), oras(oras), adresa_de_livrare(adresaDeLivrare), balanta_cont(balantaCont), cos_de_cumparaturi(cosDeCumparaturi) {}

    std::ostream &operator<<(std::ostream &os, const Client &client) {
    os << "Nume: " << client.nume << " Prenume: " << client.prenume << " Username: " << client.username << " Password: Privat!"<<static_cast<char>(1) << " Oras: " << client.oras << " Adresa livrare: " << client.adresa_de_livrare << " Balanta cont: "<<client.balanta_cont<< " Cos de cumparaturi: ";

        for ( auto it = client.cos_de_cumparaturi.begin(); it != client.cos_de_cumparaturi.end(); ++it)
            if(it!=client.cos_de_cumparaturi.end()-1)
                std::cout<<*it<<", ";
            else std::cout<<*it<<".";
    std::cout<<"\n";
    return os;
}
    Client::Client(const Client& copie)
{
    this->nume=copie.nume;
    this->prenume=copie.prenume;
    this->username=copie.username;
    this->password=copie.password;
    this->oras=copie.oras;
    this->adresa_de_livrare=copie.adresa_de_livrare;
    for(const auto & Ceas : copie.cos_de_cumparaturi)
    {
        this->cos_de_cumparaturi.push_back(Ceas);
    }
}

Client& Client::operator=(const Client& copie)
{
    if(this!=&copie)
    {
        this->nume=copie.nume;
        this->prenume=copie.prenume;
        this->username=copie.username;
        this->password=copie.password;
        this->oras=copie.oras;
        this->adresa_de_livrare=copie.adresa_de_livrare;
        this->cos_de_cumparaturi=copie.cos_de_cumparaturi;
    }
    return *this;
}
Client::Client()=default;





    const std::string &Client::getNume() const {
    return nume;
}

/*void Client::setNume(const std::string &nume) {
    Client::nume = nume;
}*/

const std::string &Client::getPrenume() const {
    return prenume;
}

/*void Client::setPrenume(const std::string &prenume) {
    Client::prenume = prenume;
}*/

const std::string &Client::getOras() const {
    return oras;
}

/*void Client::setOras(const std::string &oras) {
    Client::oras = oras;
}*/

const std::string &Client::getAdresaDeLivrare() const {
    return adresa_de_livrare;
}

/*void Client::setAdresaDeLivrare(const std::string &adresaDeLivrare) {
    adresa_de_livrare = adresaDeLivrare;
}*/

const std::vector<std::string> &Client::getCosDeCumparaturi() const {
    return cos_de_cumparaturi;
}

//void Client::setCosDeCumparaturi(const std::vector<std::string> &cosDeCumparaturi) {
    //cos_de_cumparaturi = cosDeCumparaturi;
//}

const std::string &Client::getUsername() const {
    return username;
}

/*void Client::setUsername(const std::string &username) {
    Client::username = username;
}*/

const std::string &Client::getPassword() const {
    return password;
}

/*void Client::setPassword(const std::string &password) {
    Client::password = password;
}*/

float Client::getBalantaCont() const {
    return balanta_cont;
}





//void Client::setBalantaCont(float balantaCont) {
    //balanta_cont = balantaCont;
//}



