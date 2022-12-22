  #include<SPI.h>
  #include<Wire.h>
  int led = LED_BUILTIN;
  
  void setup() {
  // Some boards work best if we also make a serial connection
  Serial.begin(115200);
  Serial.print("MOSI PIN");
  Serial.println(MOSI);
  Serial.print("MISO PIN");
  Serial.println(MISO);
  Serial.print("SCK PIN");
  Serial.println(SCK);
  Serial.print("I2C_SDA pin");
  Serial.println(SDA);
  Serial.print("I2C_SCL pin");
  Serial.println(SCL);
  
  
  // set LED to be an output pin
  pinMode(led, OUTPUT);
  }
  
  void loop() {
  
  digitalWrite(led, HIGH); // turn the LED on (HIGH is the voltage level)
  delay(500); // wait for a half second
  digitalWrite(led, LOW); // turn the LED off by making the voltage LOW
  delay(500); // wait for a half second
  }
