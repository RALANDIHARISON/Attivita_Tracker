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

