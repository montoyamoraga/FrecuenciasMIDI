#ifndef FRECUENCIAS_MIDI_H
#define FRECUENCIAS_MIDI_H

enum Temperamento {
    ET12 = 0,
    ET08 = 1,
    JI12 = 2,
    JI08 = 3
};

class FrecuenciasMIDI {
    public:
        // constructor
        FrecuenciasMIDI();

        // destructor
        ~FrecuenciasMIDI();

        // define temperant
        void definirTemperamento(Temperamento nuevoTemperamento);

        // define the frequency of A4
        void definirA4(float nuevaFrecuenciaA4);

        // MIDI note to frequency
        float notaToFrecuencia(int nota);

    protected:
        Temperamento temperamento;
        float frecuenciaA4 = 440.0f;
};

#endif