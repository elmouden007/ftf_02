

void rtc(){
    myGLCD.setColor(WHITE);
  myGLCD.setBackColor(0, 0, 0);
  myGLCD.setFont(Grotesk24x48);
  myGLCD.print(hour(), 20, 0);
   myGLCD.print(":", 68, 0);
myGLCD.print(minute(), 90, 0);
if (isAM() == true) {
   myGLCD.print("AM", 145, 0);
  }
  else {
     
    myGLCD.print("PM", 145, 0);
  }
  
  myGLCD.setFont(hallfetica_normal);
 
 
     myGLCD.print( day(), 20, 80);
     myGLCD.print("Week ", 60, 80);  myGLCD.print( weekday(), 130, 80);myGLCD.print( "-2020", 145, 80);
   digitalClockDisplay();
  //while(1) {};
  //delay(100);
  }




void digitalClockDisplay() {
  //isAM();            // Returns true if time now is AM
  //isPM();            // Returns true if time now is PM
  if (isAM() == true) {
    Serial.print(".AM");
  }
  else {
    Serial.print(".PM");
  }

  Serial.print(" "); // space
  switch (weekday()) // Day of the week, Sunday is day 1
  {
    case 1:
      Serial.print("Sunday");myGLCD.print("Sunday", 20, 60);
      break;
    case 2:
      Serial.print("Monday");myGLCD.print("Monday", 20, 60);
      break;
    case 3:
      Serial.print("Tuesday");myGLCD.print("Tuesday", 20, 60);
      break;
    case 4:
      Serial.print("Wednesday");myGLCD.print("Wednesday", 20, 60);
      break;
    case 5:
      Serial.print("Thursday");myGLCD.print("Thursday", 20, 60);
      break;
    case 6:
      Serial.print("Friday");myGLCD.print("Friday", 20, 60);
      break;
    case 7:
      Serial.print("Saturday");myGLCD.print("Saturday", 20, 60);
      break;
  } //end of switch case
  Serial.print(" "); // space
  Serial.print(day());
  Serial.print(" "); // space
  Serial.print(month());
  Serial.print(" "); // space
  Serial.print(year());
  Serial.println(), Serial.println();
}

time_t getTeensy3Time()
{
  return Teensy3Clock.get();
 
}

/*  code to process time sync messages from the serial port   */
#define TIME_HEADER  "T"   // Header tag for serial time sync message

unsigned long processSyncMessage() {
  unsigned long pctime = 0L;
  const unsigned long DEFAULT_TIME = 1357041600; // Jan 1 2013 

  if(Serial.find(TIME_HEADER)) {
     pctime = Serial.parseInt();
     return pctime;
     if( pctime < DEFAULT_TIME) { // check the value is a valid time (greater than Jan 1 2013)
       pctime = 0L; // return 0 to indicate that the time is not valid
     }
  }
  return pctime;
}

void printDigits(int digits){
  // utility function for digital clock display: prints preceding colon and leading 0
  Serial.print(":");
  if(digits < 10)
    Serial.print('0');
  Serial.print(digits);
}

 
