//
// Created by Utente on 05/04/2025.
//
#include <iostream>
#include "TrackerAttivita.h"
#include <limits>

TrackerAttivita::TrackerAttivita() {}

void TrackerAttivita::aggiungiPartecipante(const Partecipante& partecipante) {
    partecipanti.push_back(partecipante);
}
void TrackerAttivita::determinaVincitore() {
    if(partecipanti.size() < 2) {
        std::cout << "Servono almeno due partecipanti per determinare un vincitore." << std::endl;
        return;
    }
}

