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

TEST(TrackerAttivitaTest, PrimiTrePartecipanti) {
    TrackerAttivita tracker;

    Partecipante p1("A");
    p1.aggiungiAttivita(AttivitaFisica("Corsa", 1.0, 100)); // Totale: 101

    Partecipante p2("B");
    p2.aggiungiAttivita(AttivitaFisica("Nuoto", 2.0, 300)); // Totale: 302

    Partecipante p3("C");
    p3.aggiungiAttivita(AttivitaFisica("Camminata", 3.0, 200)); // Totale: 203

    Partecipante p4("D");
    p4.aggiungiAttivita(AttivitaFisica("Bici", 4.0, 500)); // Totale: 504

    tracker.aggiungiPartecipante(p1);
    tracker.aggiungiPartecipante(p2);
    tracker.aggiungiPartecipante(p3);
    tracker.aggiungiPartecipante(p4);

    auto top3 = tracker.primiTrePartecipanti();

    ASSERT_EQ(top3.size(), 3);
    EXPECT_EQ(top3[0].getNome(), "D");
    EXPECT_EQ(top3[1].getNome(), "B");
    EXPECT_EQ(top3[2].getNome(), "C");
}

