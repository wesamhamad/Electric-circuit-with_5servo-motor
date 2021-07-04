# Electric circuit with 5 servo motors
## Pre requirement
* Create an account in [TINKERCAD](https://www.tinkercad.com/join)
* Create a new Circuit

## Tools. 
1. Breadboard.
2. Arduino Uno R3.
3. Micro Servo.
4. Wires.
5. Potentiometer.

## Steps :
#### step1: connect (5v) port on Arduino with the positive pin of the breadboard ( by doing this all these ports with the positive pins in section became 5 volt ports) and ground (GND) with negative section.

#### step2: connect the positive section of the breadboard to the other positive side also in the negative so that current passes through all the breadboard.

<img width="572" alt="+-" src="https://user-images.githubusercontent.com/74800962/124368828-ca638d80-dc6d-11eb-940b-a6737c2490d8.png">

#### step3: connect all 5 Micro Servoes each one have three wires: power(red wire connected to positive pin),ground(black connected to negative pin),signal(orange connected to a digital pin) to the breadboard.

#### step4 : Use Potentiometer to controls the Servomotors, each one have three wires: terminal1 (connected to positive pin), wiper(they can be connected in any pin of the numbers that start with the letter A pin),terminal2 (connected to negative pin).

``
NOTE:
Micro Servoes go from 0 to 90 degrees but the potentiometer can go from 0 to 1023 so it only tak 1/11 of potentiometer to actually max out the servo and then the reset would be useless,to prevent that from happening we need a map function to changes 0-1023 to 0-90 .
``
```c++
void loop()
{
  sensorValue = analogRead(A0);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_3.write(outputValue);
  sensorValue = analogRead(A1);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_5.write(outputValue);
  sensorValue = analogRead(A2);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_6.write(outputValue);
  sensorValue = analogRead(A3);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_9.write(outputValue);
  sensorValue = analogRead(A4);
  outputValue = map(sensorValue, 0, 1023, 0, 90);
  servo_10.write(outputValue);
  delay(10); // Delay a little bit to improve simulation performance
}
```
# Output Sample
![ElectricCircuit](https://user-images.githubusercontent.com/74800962/124369461-be2efe80-dc74-11eb-81c2-32d13bbdcd12.gif)

