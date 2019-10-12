#include<ESP8266WiFi.h>
#include<ThingSpeak.h>
String ApiKey= "EAGVOQMP45F3HRW0";    
const char* ssid="Realme 1";
const char* password="12345678";
const char* server="APi.thingspeak.com";
unsigned long channel=883129 ;
int pin=1;
 WiFiClient client;

 void setup(){
  pinMode(D0,LOW);
  pinMode(1,INPUT);
  Serial.begin(115200);
  Serial.println();
  Serial.println();
  Serial.print("Connecting to ");
  Serial.print(ssid);

  WiFi.begin(ssid,password); // checking WiFi connection
  while(WiFi.status()!=WL_CONNECTED){ 
    delay(500);
    Serial.println(".");
  }
    Serial.println("");
    Serial.println("WIFI CONNECTED");
    Serial.println("IP address= ");
    Serial.println(WiFi.localIP()); //IP Address of NodeMcu
    ThingSpeak.begin(client);
}

void loop(){
     int response=digitalRead(D0);
     String postStr = ApiKey;
                             postStr +="&field1=";
                             postStr += String(response);
                             postStr +="&field2=";
                             postStr += "\r\n\r\n";
 
                             client.print("POST /update HTTP/1.1\n");
                             client.print("Host: api.thingspeak.com\n");
                             client.print("Connection: close\n");
                             client.print("X-THINGSPEAKAPIKEY: "+ApiKey+"\n");
                             client.print("Content-Type: application/x-www-form-urlencoded\n");
                             client.print("Content-Length: ");
                             client.print(postStr.length());
                             client.print("\n\n");
                             client.print(postStr);
  
 // int response=digitalRead(D7); 
  if (response == LOW){
    Serial.println("CRASH");
    delay(500);
  }
  else{
    Serial.println("smooth journey");
    delay(500);
  }
 // client.stop();
}
