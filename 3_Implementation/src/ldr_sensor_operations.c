/**
 * @file ldr_sensor_operation.c
 * @author A Preethi (avvarupreethi13@gmail.com)
 * @brief Header file for ldr sensor and blinking led's are connected to AVR328 MCU GPIO pin
 * @version 0.1
 * @date 2022-04-20
 * 
 * @copyright Copyright (c) 2022
 * 
 */
# define GREEN 2
  # define ORANGE 3
  # define RED 4
  # define Buzzer 5
  # define Sensor A0
  /** 
	* @brief initializing of pin mode
	* @return declaration
  */  
    
  void setup() {
    for (int i = 2; i < 6; i++)
      pinMode(i, OUTPUT);
  
    Serial.begin(9600);
  }
  /** 
	* @brief initialization part
	* @return declaration part
  */  

  
  void loop() 
  {    
    for (int i = 2; i < 6; i++)
      digitalWrite(i, LOW);
  
    status_Indicator();  
  }

  /** 
	* @brief part of the execution
	* @return execution part
  */  

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