void setup() {
Serial.begin(9600);
 pinMode(13, OUTPUT); // put your setup code here, to run once:
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'a': digitalWrite(13, HIGH);break; // when a is pressed on the app on your smart phone
        case 'd': digitalWrite(13, LOW);break; // when d is pressed on the app on your smart phone
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}void setup() {
Serial.begin(9600);
 pinMode(13, OUTPUT); // put your setup code here, to run once:
 }

void loop() {
  // put your main code here, to run repeatedly:
 if(Serial.available()>0)
   {     
      char data= Serial.read(); // reading the data received from the bluetooth module
      switch(data)
      {
        case 'a': digitalWrite(13, HIGH);break; // when a is pressed on the app on your smart phone
        case 'd': digitalWrite(13, LOW);break; // when d is pressed on the app on your smart phone
        default : break;
      }
      Serial.println(data);
   }
   delay(50);
}
