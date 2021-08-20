// C++ code
#define ledG 6      //Pedestrian crossing lights
#define ledR 5
#define ledTG 13    //Traffic lights
#define ledTA 12
#define ledTR 11
#define sw 7        //Push button

void setup()
{
  pinMode(ledG, OUTPUT);
  pinMode(ledR, OUTPUT);
  pinMode(ledTG, OUTPUT);
  pinMode(ledTA, OUTPUT);
  pinMode(ledTR, OUTPUT);
  pinMode(sw, INPUT);
}

void loop()
{
  int sw_value = digitalRead(sw);
  
  if (sw_value == 0)            //0 = Pressed, 1 = Not Pressed
  {
    delay(5000);                //Wait 5 Seconds
    digitalWrite(ledTG, LOW);   //HIGH = on, LOW = off
    digitalWrite(ledTA, HIGH);
    delay(1000);
    digitalWrite(ledTA, LOW);
    digitalWrite(ledTR, HIGH);
    delay(1000);
    digitalWrite(ledR, LOW);
    digitalWrite(ledG, HIGH);
    delay(6000);

    for(int i=0; i <= 5; i++)     //Green LED blinks 5 times
    {
      digitalWrite(ledG, LOW);    //LED off
      delay(800);
      digitalWrite(ledG, HIGH);   //LED on
      delay(800);
    }

    digitalWrite(ledG, LOW);
    delay(1000);
    digitalWrite(ledTR, LOW);
  }
  else
  {
    digitalWrite(ledR, HIGH);
    digitalWrite(ledTG, HIGH);
  }
}
