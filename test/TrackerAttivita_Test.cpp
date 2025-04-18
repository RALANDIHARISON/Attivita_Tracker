//
// Created by Utente on 17/04/2025.
//
#include <gtest/gtest.h>
#include "../TrackerAttivita.h"
#include "../Partecipante.h"
#include "../AttivitaFisica.h"

TEST(TrackerAttivitaTest, AggiuntaPartecipanti) {
TrackerAttivita tracker;

Partecipante a("Mario");
Partecipante b("Giulia");

a.aggiungiAttivita(AttivitaFisica("Corsa", 1.0, 200));
b.aggiungiAttivita(AttivitaFisica("Nuoto", 2.0, 500));

tracker.aggiungiPartecipante(a);
tracker.aggiungiPartecipante(b);

SUCCEED(); // Non possiamo verificare output, ma verifichiamo che non crasha
}

