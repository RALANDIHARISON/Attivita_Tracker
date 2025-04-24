//
// Created by Utente on 05/04/2025.
//
#include <iostream>
#include "TrackerAttivita.h"
#include <limits>
#include <algorithm>
#include <sstream>

TrackerAttivita::TrackerAttivita() {}

void TrackerAttivita::aggiungiPartecipante(const Partecipante& partecipante) {
    partecipanti.push_back(partecipante);
}
std::string TrackerAttivita::determinaVincitore() {
    if(partecipanti.size() < 2) {
       return   "Servono almeno due partecipanti per determinare un vincitore." ;

    }


Partecipante* vincitore = nullptr;
Partecipante* perdente = nullptr;
double minTotale = std::numeric_limits<double>::max();  // mba hijerena ny minimo totale

for(auto& p : partecipanti) {
    double totale = p.getOreTotali() + p.getCalorieTotali();


    if(totale < minTotale) {
        minTotale = totale;
        vincitore = &p;
    }
}
// Trova il perdente (izay manana totale ngeza indrindra)
    double maxTotale = -std::numeric_limits<double>::max();  // Per trovare il massimo totale
    for (auto& p : partecipanti) {
        double totale = p.getOreTotali() + p.getCalorieTotali();

        if (totale > maxTotale) {
            maxTotale = totale;
            perdente = &p;
        }
    }
    // Eto no mijery ny valiny
    std::ostringstream oss;
    if (vincitore) {
        oss << vincitore->getNome() << " vince con " << vincitore->getOreTotali()
            << " ore e " << vincitore->getCalorieTotali() << " calorie!\n";
    }
    if (perdente) {
        oss << perdente->getNome() << " perde con " << perdente->getOreTotali()
            << " ore e " << perdente->getCalorieTotali() << " calorie.";
    }
    return oss.str();
}


bool TrackerAttivita::rimuoviPartecipante(const std::string& nome) {
    for (auto it = partecipanti.begin(); it != partecipanti.end(); ++it) {
        if (it->getNome() == nome) {
            partecipanti.erase(it);
            return true;
        }
    }
    return false; // nampina ito
}
std::vector<Partecipante> TrackerAttivita::primiTrePartecipanti() const {
    std::vector<Partecipante> ordinati = partecipanti;

    std::sort(ordinati.begin(), ordinati.end(), [](const Partecipante& a, const Partecipante& b) {
        return (a.getOreTotali() + a.getCalorieTotali()) > (b.getOreTotali() + b.getCalorieTotali());
    });

    std::vector<Partecipante> top;
    for (size_t i = 0; i < ordinati.size() && i < 3; ++i) {
        top.push_back(ordinati[i]);
    }

    return top;
}




