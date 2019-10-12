#include<ESP8266WiFi.h>
#include<ThingSpeak.h>
String ApiKey= "EAGVOQMP45F3HRW0";    
const char* ssid="Realme 1";
const char* password="12345678";
const char* server="api.thingspeak.com";
unsigned long channel=883129 ;

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
     int response1=digitalRead(D0);
      int response2=digitalRead(D3);
     String postStr = ApiKey;
  
 // int response=digitalRead(D7); 
 ThingSpeak.writeField(883129,1,response1,"EAGVOQMP45F3HRW0");
  ThingSpeak.writeField(883129,2,response2,"EAGVOQMP45F3HRW0");
 if ((response1 == HIGH)||(response2 == HIGH)){
    Serial.println("CRASH");
    delay(500);
  }
  else{
    Serial.println("smooth journey");
    delay(500);
  }
  client.stop();
}
