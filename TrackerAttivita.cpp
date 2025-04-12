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

// inizializza con valori molto alti
Partecipante* vincitore = nullptr;
Partecipante* perdente = nullptr;
double minTotale = std::numeric_limits<double>::max();  // Per trovare il minimo totale

for(auto& p : partecipanti) {
    double totale = p.getOreTotali() + p.getCalorieTotali();

    // Se il totale è inferiore al minimo, aggiorna il vincitore
    if(totale < minTotale) {
        minTotale = totale;
        vincitore = &p;
    }
}

