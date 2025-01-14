 #include <SoftwareSerial.h>
SoftwareSerial mySerial(10, 11); // RX and TX 
 
int MQ4 = A0; 
int Buzzer =13;
int R_LED = 7;
int G_LED = 9;
float val;


void setup()
{

mySerial.begin(9600); // Setting the baud rate of GSM Module
Serial.begin(9600); // Setting the baud rate of Serial Monitor (Arduino)
pinMode(MQ4 ,INPUT);
  pinMode(Buzzer ,OUTPUT);
  pinMode(R_LED ,OUTPUT);
  pinMode(G_LED ,OUTPUT);
}
 
void loop()
{
 val = analogRead(MQ4);
  
  if (val >= 100)  
{
    digitalWrite(Buzzer, HIGH);
    digitalWrite(R_LED ,HIGH);
    
    Serial.println("SMOKE DETECTED, SENDING SMS"); // Custom Smoke Detected Message
    digitalWrite(G_LED ,LOW);
    
    SendMessage();
    delay(5000);
}
else
{
    digitalWrite(Buzzer ,LOW);
    digitalWrite(R_LED ,LOW);
    
    Serial.println("NORMAL"); // Custom Normal Level Message
    digitalWrite(G_LED ,HIGH);
    
    delay(1000);
}
 
}
void SendMessage()
{

mySerial.println("AT+CMGF=1"); // SMS ACTIVATED
delay(10); // add delay if needed
mySerial.println("AT+CMGS=\"09XXXXXXXXX\"\r");//INPUT NUMBER
delay(10);
mySerial.println("SMOKE DETECTED, OPEN YOUR WINDOWS NOW!"); //CUSTOM MESSAGE
delay(10);
mySerial.println((char)26);//
delay(10);

}
