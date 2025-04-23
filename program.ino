char data = 0;            //Variable for storing received data
void setup()
{
    Serial.begin(9600);   //Sets the baud for serial data transmission                               
    pinMode(2, OUTPUT);  //Sets digital pin 2 as output pin
    pinMode(3, OUTPUT);  //Sets digital pin 3 as output pin
    pinMode(4, OUTPUT);  //Sets digital pin 4 as output pin
    pinMode(5, OUTPUT);  //Sets digital pin 5 as output pin
    pinMode(6, OUTPUT);  //Sets digital pin 6 as output pin
    pinMode(7, OUTPUT);  //Sets digital pin 7 as output pin
    pinMode(8, OUTPUT);  //Sets digital pin 8 as output pin
}
void loop()
{
   if(Serial.available() > 0)      // Send data only when you receive data:
   {
      data = Serial.read();        //Read the incoming data & store into data
      Serial.print(data);          //Print Value inside data in Serial monitor
      Serial.print("\n");        
      if(data == 'a')              // Checks whether value of data is equal to 1
         digitalWrite(2, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'A')         //  Checks whether value of data is equal to 0
         digitalWrite(2, LOW);    //If value is 0 then LED turns OFF
      if(data == 'b')              // Checks whether value of data is equal to 1
         digitalWrite(3, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'B')         //  Checks whether value of data is equal to 0
         digitalWrite(3, LOW);    //If value is 0 then LED turns OFF
      if(data == 'c')              // Checks whether value of data is equal to 1
         digitalWrite(4, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'C')         //  Checks whether value of data is equal to 0
         digitalWrite(4, LOW);    //If value is 0 then LED turns OFF
      if(data == 'd')              // Checks whether value of data is equal to 1
         digitalWrite(5, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'D')         //  Checks whether value of data is equal to 0
         digitalWrite(5, LOW);    //If value is 0 then LED turns OFF
      if(data == 'e')              // Checks whether value of data is equal to 1
         digitalWrite(6, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'E')         //  Checks whether value of data is equal to 0
         digitalWrite(6, LOW);    //If value is 0 then LED turns OFF
      if(data == 'f')              // Checks whether value of data is equal to 1
         digitalWrite(7, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'F')         //  Checks whether value of data is equal to 0
         digitalWrite(7, LOW);    //If value is 0 then LED turns OFF
      if(data == 'g')              // Checks whether value of data is equal to 1
         digitalWrite(8, HIGH);   //If value is 1 then LED turns ON
      else if(data == 'G')         //  Checks whether value of data is equal to 0
         digitalWrite(8, LOW);    //If value is 0 then LED turns OFF               
   }
}
