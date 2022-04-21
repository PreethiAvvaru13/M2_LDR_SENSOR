 void setup() {
    for (int i = 2; i < 6; i++)
      pinMode(i, OUTPUT);
  
    Serial.begin(9600);
  }
  
  void loop() 
  {    
    for (int i = 2; i < 6; i++)
      digitalWrite(i, LOW);
  
    status_Indicator();  
  }
  
  void status_Indicator()
  {
    int sensor_In = analogRead(A0);
    Serial.println(sensor_In);
    
    if ( sensor_In >=400  )
    {
      digitalWrite(RED, HIGH);
      digitalWrite(Buzzer,HIGH);
    }
    else if (sensor_In >=160 )
    {
      digitalWrite(ORANGE, HIGH);
    } else
    {
      digitalWrite(GREEN, HIGH);
    }
    delay(10);
  }
