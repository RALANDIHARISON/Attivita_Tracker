//
// Created by Utente on 17/04/2025.
//
#include <gtest/gtest.h>
#include "../AttivitaFisica.h"

TEST(AttivitaFisicaTest, CostruttoreEGetter) {
AttivitaFisica a("Corsa", 2.5, 400);

EXPECT_EQ(a.getDescrizione(), "Corsa");
EXPECT_DOUBLE_EQ(a.getOre(), 2.5);
EXPECT_DOUBLE_EQ(a.getCalorie(), 400);
}

TEST(AttivitaFisicaTest, CostruttoreConCalorieNegative) {
    EXPECT_THROW(AttivitaFisica("Errore", 1.0, -100), std::invalid_argument);
}