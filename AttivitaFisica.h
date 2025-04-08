//
// Created by Utente on 05/04/2025.
//

#ifndef ATTIVITA_TRACKER_ATTIVITAFISICA_H
#define ATTIVITA_TRACKER_ATTIVITAFISICA_H
#include <string>

class AttivitaFisica {
public:
    AttivitaFisica(const std::string& descrizione, double ore, double calorie);

    const std::string& getDescrizione() const;
    double getOre() const;
    double getCalorie() const;


private:
    std::string descrizione;
    double ore;
    double calorie;

};




#endif //ATTIVITA_TRACKER_ATTIVITAFISICA_H
