const int red = 11; /* connected to PWM pin 11 */

const int green = 10; /* connected to PWM pin 10 */

const int blue = 9; /* connected to PWM pin 9 */

int r = 200; /* red led value is temporally 255 and it will be the first led to light up */

int b; /* blue led value is temporally 0 */

int g; /* green led value is temporally 0 */

int t = 10; /* "t" (time) 1000 milliseconds, feel free to change it */

void setup() {/* no setup */}

void loop() {

for (/* no initialization */; r>=0, b<200; b++, r--) /*red -> blue*/

{

analogWrite(red, r);

analogWrite(blue, b);

delay(t);

}

for (/* no initialization */; b>=0, g<200; g++, b--) /*blue -> green*/

{

analogWrite(blue, b);

analogWrite(green, g);

delay(t);

}

for (/* no initialization */; g>=0, r<200; r++, g--) /*green -> red*/

{

analogWrite(red, r);

analogWrite(green, g);

delay(t);

}

}
