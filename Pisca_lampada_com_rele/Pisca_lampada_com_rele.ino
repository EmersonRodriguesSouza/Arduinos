
#define pin1 6
#define pin2 7

void setup() {
 pinMode (pin1, OUTPUT);
 pinMode (pin2, OUTPUT);

}

void loop() {
 digitalWrite (pin1, LOW);
 digitalWrite (pin2, HIGH);
 delay (1000);


 digitalWrite (pin1, HIGH); 
 digitalWrite (pin2, LOW);
 delay (1000);
}
