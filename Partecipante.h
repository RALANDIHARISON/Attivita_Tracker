//
// Created by Utente on 05/04/2025.
//

#ifndef ATTIVITA_TRACKER_PARTECIPANTE_H
#define ATTIVITA_TRACKER_PARTECIPANTE_H
#include <string>
#include "AttivitaFisica.h"
class Partecipante {
public:
    explicit Partecipante(const std::string &nome);

    void aggiungiAttivita(const AttivitaFisica& attivita);

    void mostraStato() const;

    const std::string &getNome() const;

    double getOreTotali() const;
    double getCalorieTotali() const;


private:
    std::string nome;
    double oreTotali;
    double calorieTotali;
};

#endif //ATTIVITA_TRACKER_PARTECIPANTE_H
