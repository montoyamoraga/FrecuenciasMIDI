#include "FrecuenciasMIDI.h"

// constructor
FrecuenciasMIDI::FrecuenciasMIDI() {
}

// destructor
FrecuenciasMIDI::~FrecuenciasMIDI() {
    
}

// define temperament
void FrecuenciasMIDI::definirTemperamento(Temperamento nuevoTemperamento) {
    temperamento = nuevoTemperamento;
}

// define the frequency of A4
void FrecuenciasMIDI::definirA4(float nuevaFrecuenciaA4) {
    frecuenciaA4 = nuevaFrecuenciaA4;
}

// MIDI note to frequency
float FrecuenciasMIDI::notaToFrecuencia(int nota) {
    // we use 69 because MIDI note 69 corresponds to A4
    float frecuencia = frecuenciaA4 * pow(2.0f, (nota - 69) / 12.0f);
    return frecuencia;
}

