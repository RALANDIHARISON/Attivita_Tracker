#include <iostream>
#include "TrackerAttivita.h"
#include <limits>
int main() {
    try {
        // Creiamo alcune attività fisiche
        AttivitaFisica corsa("Corsa", 2.0, 500);  // 2 ore
        AttivitaFisica nuoto("Nuoto", 2.5, 600);  // 2.5 ore

        // Creiamo i partecipanti
        Partecipante alessandra("Alessandra");
        Partecipante lalaina("Lalaina");
        Partecipante damien("Damien");

        // Aggiungiamo attività ad Alessandra
        alessandra.aggiungiAttivita(corsa);
        alessandra.aggiungiAttivita(nuoto);

        // Aggiungiamo attività a Lalaina
        lalaina.aggiungiAttivita(corsa);
        lalaina.aggiungiAttivita(corsa);

        // Aggiungiamo attività a Damien
        damien.aggiungiAttivita(corsa);
        damien.aggiungiAttivita(nuoto);

        // Creiamo il tracker e aggiungiamo i partecipanti
        TrackerAttivita tracker;
        tracker.aggiungiPartecipante(alessandra);
        tracker.aggiungiPartecipante(lalaina);
        tracker.aggiungiPartecipante(damien);

        // Visualizza lo stato di tutti i partecipanti
        std::cout << "\n--- Stato iniziale dei partecipanti ---\n";
        std::cout << alessandra.toString() << "\n---\n";
        std::cout << lalaina.toString() << "\n---\n";
        std::cout << damien.toString() << "\n---\n";

        // Determina il vincitore
        std::cout << "\n--- Vincitore e perdente ---\n";
        std::cout << tracker.determinaVincitore() << std::endl;

        // Top 3
        std::cout << "\n--- Top 3 partecipanti ---\n";
        auto top3 = tracker.primiTrePartecipanti();
        for (const auto& p : top3) {
            std::cout << p.toString() << "\n---\n";
        }
        tracker.rimuoviPartecipante("Lalaina");
        std::cout << "\nDopo la rimozione di Lalaina:\n";
        std::cout << tracker.determinaVincitore() << std::endl;


    }catch (const std::invalid_argument& e) {
        std::cerr << "Errore: " << e.what() << std::endl;
    } catch (const std::exception& e) {
        std::cerr << "Eccezione generica: " << e.what() << std::endl;
    }

    return 0;
}
