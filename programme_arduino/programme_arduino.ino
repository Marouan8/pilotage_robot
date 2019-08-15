//
 void setup() {
 Serial1.begin(9600);
 Particle.function("maled",ledToggle);
}
void loop() {
Particle.function ( "maled", ledToggle);
}
int ledToggle(String command)
{
 Particle.publish(command);
 /* if (command=="Allumer")
 {
 return Serial1.print('1');
 }
else if (command=="Eteindre")
 {
 return Serial1.print('2');
 }*/
else if (command=="Avance")
 {
 return Serial1.print('3');
 }
 else if (command=="Recul")
 {
 return Serial1.print('4');
 }
 else if (command=="Droite")
 {
 return Serial1.print('5');
 }
 else if (command=="Gauche")
 {
 return Serial1.print('6');
 }
 else if (command=="Stop")
 {
 return Serial1.print('7');
 }
} return Serial1.print('5');
 }
 else if (command=="Gauche")
 {
 return Serial1.print('6');
 }
 else if (command=="Stop")
 {
 return Serial1.print('7');
 }
}
