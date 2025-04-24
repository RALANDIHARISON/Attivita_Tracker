//
// Created by Utente on 05/04/2025.
//

#ifndef ATTIVITA_TRACKER_TRACKERATTIVITA_H
#define ATTIVITA_TRACKER_TRACKERATTIVITA_H
#include <vector>
#include "Partecipante.h"
#include <string>

class TrackerAttivita {
public:
    explicit TrackerAttivita();

    void aggiungiPartecipante(const Partecipante& partecipante);

    std::string determinaVincitore() ;
    bool rimuoviPartecipante(const std::string& nome);

    std::vector<Partecipante> primiTrePartecipanti() const ;


private:
    std::vector<Partecipante> partecipanti;
};


#endif //ATTIVITA_TRACKER_TRACKERATTIVITA_H
