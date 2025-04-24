//
// Created by Utente on 05/04/2025.
//
// #include <iostream>
#include "Partecipante.h"
#include <iostream>
#include<sstream>


Partecipante::Partecipante(const std::string& nome)
        : nome(nome), oreTotali(0),calorieTotali(0) {}

void Partecipante::aggiungiAttivita(const AttivitaFisica& attivita) {
    listaAttivita.push_back(attivita);
    oreTotali += attivita.getOre();
    calorieTotali += attivita.getCalorie();

}

bool Partecipante::rimoveAttivita(const std::string & descrizione) {
    for (auto it = listaAttivita.begin(); it != listaAttivita.end(); ++it) {
        if (it->getDescrizione() == descrizione) {
            oreTotali -= it->getOre();
            calorieTotali -= it->getCalorie();
            listaAttivita.erase(it);
            return true;
        }
    }
    return false;
}

const std::vector<AttivitaFisica>& Partecipante::getAttivita() const {
    return listaAttivita;
}

std::string Partecipante::toString() const {
    std::ostringstream oss;
    oss << "Partecipante: " << nome << "\n"
        << "Ore totali: " << oreTotali << "\n"
        << "Calorie totali: " << calorieTotali;
    return oss.str();
}

const std::string& Partecipante::getNome() const {
    return nome;
}

double Partecipante::getOreTotali() const {
    return oreTotali;
}
double Partecipante::getCalorieTotali() const {
    return calorieTotali;
}