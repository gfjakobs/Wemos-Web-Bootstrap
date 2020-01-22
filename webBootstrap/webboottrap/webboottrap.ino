#include <ESP8266WiFi.h>
#include <ESP8266WebServer.h>
#include "FastLED.h"

#define ssid      "xxxx"       // WiFi SSID
#define password  "xxxx"


#define NUM_LEDS      60
#define LED_TYPE   WS2811
#define COLOR_ORDER   GRB
#define DATA_PIN        D1
//#define CLK_PIN       4
#define VOLTS          5
#define MAX_MA       4000
CRGBArray<NUM_LEDS> leds;

#include "page1.h"
#include "page2.h"
#include "page3.h"
#include "page4.h"

ESP8266WebServer server(80);

void handleRoot() {
  Serial.println("GET /");
  server.send(200, "text/html", htmlPage1);

  for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      // Turn our current led on to white, then show the leds
      leds[whiteLed] = CRGB::White;

      // Show the leds (only one of which is set to white, from above)
      FastLED.show();

      // Wait a little bit
      delay(10);

      // Turn our current led back to black for the next loop around
      //leds[whiteLed] = CRGB::Black;
   }
}

void handlePage2() {
  Serial.println("GET /page2");
  server.send(200, "text/html", htmlPage2);

    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      // Turn our current led on to white, then show the leds
      leds[whiteLed] = CRGB::Red;

      // Show the leds (only one of which is set to white, from above)
      FastLED.show();

      // Wait a little bit
      delay(10);

      // Turn our current led back to black for the next loop around
      //leds[whiteLed] = CRGB::Black;
   }
}

void handlePage3() {
  Serial.println("GET /page3");
  server.send(200, "text/html", htmlPage3);

    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      // Turn our current led on to white, then show the leds
      leds[whiteLed] = CRGB::Green;

      // Show the leds (only one of which is set to white, from above)
      FastLED.show();

      // Wait a little bit
      delay(10);

      // Turn our current led back to black for the next loop around
      //leds[whiteLed] = CRGB::Black;
   }
}
void handlePage4() {
  Serial.println("GET /page4");
  server.send(200, "text/html", htmlPage4);

    for(int whiteLed = 0; whiteLed < NUM_LEDS; whiteLed = whiteLed + 1) {
      // Turn our current led on to white, then show the leds
      leds[whiteLed] = CRGB::Black;

      // Show the leds (only one of which is set to white, from above)
      FastLED.show();

      // Wait a little bit
      delay(10);

      // Turn our current led back to black for the next loop around
      //leds[whiteLed] = CRGB::Black;
   }
}

void setup(void){
  Serial.begin(115200);
  WiFi.begin(ssid, password);
  Serial.println("");

  // Wait for connection
  while (WiFi.status() != WL_CONNECTED) {
    delay(500);
    Serial.print(".");
  }
  Serial.println("");
  Serial.print("Connected to ");
  Serial.println(ssid);
  Serial.print("IP address: ");
  Serial.println(WiFi.localIP());
  Serial.print("MAC: ");
  Serial.println(WiFi.macAddress());

  server.on("/", handleRoot);
  server.on("/page2", handlePage2);
  server.on("/page3", handlePage3);
  server.on("/page4", handlePage4);

  server.begin();
  Serial.println("HTTP server started");

  delay( 1000 ); //safety startup delay
  Serial.println("Initialize Led stripe");
  FastLED.setMaxPowerInVoltsAndMilliamps( VOLTS, MAX_MA);
  FastLED.addLeds<LED_TYPE,DATA_PIN,COLOR_ORDER>(leds, NUM_LEDS)
    .setCorrection(TypicalLEDStrip);
  Serial.println("Led stripe ready");    
}

void loop(void){
  server.handleClient();
}
