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

EXPECT_EQ(p.getAttivita().size(), 1);
EXPECT_TRUE(p.rimoveAttivita("Nuoto"));
EXPECT_EQ(p.getAttivita().size(), 0);
EXPECT_FALSE(p.rimoveAttivita("NonEsiste"));
}

TEST(PartecipanteTest, ToStringTest) {
    Partecipante p("Luca");
    AttivitaFisica a("Corsa", 2.0, 500);
    p.aggiungiAttivita(a);

    std::string result = p.toString();
    EXPECT_NE(result.find("Luca"), std::string::npos);
    EXPECT_NE(result.find("Ore totali: 2"), std::string::npos);
    EXPECT_NE(result.find("Calorie totali: 500"), std::string::npos);
}
