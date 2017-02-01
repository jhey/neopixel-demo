#define PIN D7             // on board LED 
int state = 0;             // toggle state
void setup() { 
   pinMode(PIN, OUTPUT);    //tell the device we want to write to this pin
} 
void loop() { 
   digitalWrite(PIN, (state) ? HIGH : LOW);     //apply high or low 
   state = !state;                              //invert the state 
   delay(500);                                 //wait half a second 
} 
