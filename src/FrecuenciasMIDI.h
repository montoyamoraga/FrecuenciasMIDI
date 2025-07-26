#ifndef FRECUENCIAS_MIDI_H
#define FRECUENCIAS_MIDI_H

@enum Temperamento {
    ET12 = 0,
    ET08 = 1,
    JI12 = 2,
    JI08 = 3
}

Class FrecuenciasMIDI {
    public:
        // constructor
        FrecuenciasMIDI();

        // destructor
        ~FrecuenciasMIDI();

        void definirTemperamento(String) {
            
        }
};

#endif