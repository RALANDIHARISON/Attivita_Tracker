//
// Created by Utente on 05/04/2025.
//
#include "AttivitaFisica.h"

AttivitaFisica::AttivitaFisica(const std::string& descrizione, double ore)
        : descrizione(descrizione), ore(ore){}

const std::string& AttivitaFisica::getDescrizione() const {
    return descrizione;
}

double AttivitaFisica::getOre() const {
    return ore;
}

