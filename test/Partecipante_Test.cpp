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

EXPECT_DOUBLE_EQ(p.getOreTotali(), 1.0);
EXPECT_DOUBLE_EQ(p.getCalorieTotali(), 300);
EXPECT_EQ(p.getNome(), "Luca");
}

