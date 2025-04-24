//
// Created by Utente on 05/04/2025.
//
#ifndef ATTIVITA_TRACKER_PARTECIPANTE_H
#define ATTIVITA_TRACKER_PARTECIPANTE_H
#include <string>
#include "AttivitaFisica.h"
#include <vector>

class Partecipante {
public:
    explicit Partecipante(const std::string &nome);

    void aggiungiAttivita(const AttivitaFisica& attivita);
    bool rimoveAttivita(const std::string & descrizione);
    std::string toString() const;

    const std::string &getNome() const;

    double getOreTotali() const;
    double getCalorieTotali() const;
    const std::vector<AttivitaFisica>& getAttivita() const;


private:
    std::string nome;
    double oreTotali;
    double calorieTotali;
    std::vector<AttivitaFisica> listaAttivita;
};

#endif //ATTIVITA_TRACKER_PARTECIPANTE_H
