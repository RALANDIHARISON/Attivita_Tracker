//
// Created by Utente on 05/04/2025.
//
#include "AttivitaFisica.h"

AttivitaFisica::AttivitaFisica(const std::string& descrizione, double ore, double calorie)
        : descrizione(descrizione), ore(ore),calorie(calorie){}

const std::string& AttivitaFisica::getDescrizione() const {
    return descrizione;
}

double AttivitaFisica::getOre() const {
    return ore;
}
double AttivitaFisica::getCalorie() const {
    return calorie;
}

