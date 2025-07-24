int led = LED_BUILTIN;  
// Function to represent a dot (short blink)
void dot() {
  digitalWrite(led, HIGH);
  delay(200);            
  digitalWrite(led, LOW);
  delay(200);           
}

// Function to represent a dash (long blink)
void dash() {
  digitalWrite(led, HIGH);
  delay(600);           
  digitalWrite(led, LOW);
  delay(200);            
}

// Functions to blink each letter of "Shabad"
void blinkS() { dot(); dot(); dot(); }             // S = ...
void blinkH() { dot(); dot(); dot(); dot(); }      // H = ....
void blinkA() { dot(); dash(); }                   // A = .-
void blinkB() { dash(); dot(); dot(); dot(); }     // B = -...
void blinkD() { dash(); dot(); dot(); }            // D = -..

void setup() {
  pinMode(led, OUTPUT); 
}

void loop() {
  blinkS();
  delay(600);  
  blinkH();
  delay(600);
  blinkA();
  delay(600);
  blinkB();
  delay(600);
  blinkA();
  delay(600);
  blinkD();
  delay(2000); 
}
