/*
  Fading

  This example shows how to fade an LED using the analogWrite() function.

  The circuit:
  - LED attached from digital pin 9 to ground.

  created 1 Nov 2008
  by David A. Mellis
  modified 30 Aug 2011
  by Tom Igoe

  This example code is in the public domain.

  http://www.arduino.cc/en/Tutorial/Fading

  See also:
  https://docs.arduino.cc/learn/microcontrollers/analog-output
*/

const int ledPin = 9;    // LED connected to digital pin 9
const int max_fade = 100;
const int min_fade = 0;
const int fade_duration = 90;
const int fade_change = 5;

void setup() {
  // nothing happens in setup
}

void loop() {
  // fade in from min to max in increments of 5 points:
  for (int fadeValue = min_fade; fadeValue <= max_fade; fadeValue += fade_change) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(fade_duration);
  }

  // fade out from max to min in increments of 5 points:
  for (int fadeValue = max_fade; fadeValue >= min_fade; fadeValue -= fade_change) {
    // sets the value (range from 0 to 255):
    analogWrite(ledPin, fadeValue);
    // wait for 30 milliseconds to see the dimming effect
    delay(fade_duration);
  }
}
