#include <ArduinoJson.h>

const int LED = 16;

// allocate memory for document
StaticJsonDocument<200> doc;

void setup() {
  // put your setup code here, to run once:
  Serial.begin(115200);
  while (!Serial) continue;

  pinMode(LED, OUTPUT);
  digitalWrite(LED, HIGH);
  // create empty array
  //  JsonArray arr = doc.to<JsonArray>();

  // add some values
  //  arr.add("hello");
  //  arr.add("21");
  //  arr.add("3.14");

  // Add values in the document
//  doc["sensor"] = "gps";
//  doc["time"] = 1351824120;
//
//  JsonArray pinState = doc.createNestedArray("pinState");
//  pinState.add(0);
//  pinState.add(1);

  JsonArray array = doc.to<JsonArray>();
  array.add(42);
  int value = array[1];
  array[1] = 666;

  Serial.println();
  serializeJsonPretty(doc, Serial);
}

void loop() {
  // put your main code here, to run repeatedly:
  //  digitalWrite(LED, doc["pinState"][1]);
  //  delay(1000);
  //  digitalWrite(LED, doc["pinState"][0]);
  //  delay(1000);
}
