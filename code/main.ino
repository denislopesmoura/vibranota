/***
 *Author: Denis Lopes de Moura
 *  
 */

const int speakerPin = 6;
const int motorPin = 3;
const int time = 300;

//notes scale
const char notes[] = {'C','D','E','F','G','A','H'}; 
//digital pins number
const int pins[] = {2,4,5,7,8,9,10}; 
//Frequencies in Herts
const int tones[] = {261,294,329,349,392,440,523};

void playTone(int tone, int duration) {
  
  for (long i = 0; i < duration * 1000L; i += tone * 2) {
    digitalWrite(speakerPin, HIGH);
    delayMicroseconds(tone);
    digitalWrite(speakerPin, LOW);
    delayMicroseconds(tone);
  }

}

void playNote(char note, int durantion, int arrayNotesSize){

    for (int idx = 0 ; idx <= arrayNotesSize ; idx++ ){
        if(notes[idx] == note){
            playTone(tones[idx], durantion);
        }
    }
}

void setup(){
    
    //Inicializa os pinos
    for(int idx = 0; idx <= sizeof(notes);idx++){
        //Set the pins like Output
        pinMode(pins[idx],OUTPUT);
    }

    pinMode(speakerPin, OUTPUT);
    pinMode(motorPin, OUTPUT); 

}

void loop(){



}