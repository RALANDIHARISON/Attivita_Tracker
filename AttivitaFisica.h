//
// Created by Utente on 05/04/2025.
//

#ifndef ATTIVITA_TRACKER_ATTIVITAFISICA_H
#define ATTIVITA_TRACKER_ATTIVITAFISICA_H
#include <string>

class AttivitaFisica {
public:
    AttivitaFisica(const std::string& descrizione, double ore);

    const std::string& getDescrizione() const;
    double getOre() const;


private:
    std::string descrizione;
    double ore;

};




#endif //ATTIVITA_TRACKER_ATTIVITAFISICA_H
