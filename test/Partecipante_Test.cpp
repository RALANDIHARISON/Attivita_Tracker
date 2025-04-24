//
// Created by Utente on 17/04/2025.
//
#include <gtest/gtest.h>
#include "../Partecipante.h"
#include "../AttivitaFisica.h"

TEST(PartecipanteTest, AggiuntaAttivita) {
Partecipante p("Luca");
AttivitaFisica a("Nuoto", 1.0, 300);

p.aggiungiAttivita(a);

EXPECT_EQ(p.getAttivita().size(), 1.0);
EXPECT_TRUE(p.rimoveAttivita("Nuoto"));
EXPECT_EQ(p.getAttivita().size(), 0.0);
EXPECT_FALSE(p.rimoveAttivita("NonEsiste"));
}

