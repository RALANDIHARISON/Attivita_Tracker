//
// Created by Utente on 05/04/2025.
//
// #include <iostream>
#include "Partecipante.h"
#include <iostream>

Partecipante::Partecipante(const std::string& nome)
        : nome(nome), oreTotali(0) {}

void Partecipante::aggiungiAttivita(const AttivitaFisica& attivita) {
    oreTotali += attivita.getOre();

}

void Partecipante::mostraStato() const {
    std::cout << "Stato partecipante " << nome << ":" << std::endl;
    std::cout << "OreTotale: " << oreTotali << std::endl;

}

const std::string& Partecipante::getNome() const {
    return nome;
}

double Partecipante::getOreTotali() const {
    return oreTotali;
}