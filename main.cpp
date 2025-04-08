#include <iostream>
#include "TrackerAttivita.h"
#include <limits>
int main() {
    // Creiamo alcune attività fisiche
    AttivitaFisica corsa("Corsa", 2.0);  // 2 ore
    AttivitaFisica nuoto("Nuoto", 2.5);  // 2.5 ore

    // Creiamo i partecipanti
    Partecipante alessandra("Alessandra");
    Partecipante marco("Marco");

    // Aggiungiamo attività ad Alessandra
    alessandra.aggiungiAttivita(corsa);
    alessandra.aggiungiAttivita(nuoto);

    // Aggiungiamo attività a Marco
    marco.aggiungiAttivita(corsa);
    marco.aggiungiAttivita(corsa);

    // Creiamo il tracker e aggiungiamo i partecipanti
    TrackerAttivita tracker;
    tracker.aggiungiPartecipante(alessandra);
    tracker.aggiungiPartecipante(marco);

    // Visualizza lo stato di tutti i partecipanti
    alessandra.mostraStato();
    std::cout << std::endl;
    marco.mostraStato();
    std::cout << std::endl;




    return 0;
}
