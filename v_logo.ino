   // myGLCD.drawBitmap (15, 246, 64, 64,sms); 

   
void  showTimer() {                        //  shows the LED sleep timer on the LED options page


  if (LedTimer == 10000) {
   myGLCD.print("10 Seconds", 20, 180);
  }
  if (LedTimer == 20000) {
   myGLCD.print("20 Seconds", 20, 180);
  }
  if (LedTimer == 30000) {
   myGLCD.print("30 Seconds", 20, 180);
  }
  if (LedTimer == 60000) {
   myGLCD.print("1 Minute", 20, 180);

  }
  if (LedTimer == 120000) {
 myGLCD.print("2 Minutes", 20, 180);
  }
  if (LedTimer == 300000) {
myGLCD.print("3 Minutes", 20, 180);
  }
  if (LedTimer == 600000) {
myGLCD.print("10 Minutes", 20, 180);
  }
  if (LedTimer == 1200000) {
 myGLCD.print("20 Minutes", 20, 180);
  }
  if (LedTimer == 1800000) {
myGLCD.print("30 Minutes", 20, 180);
  }
  if (LedTimer == 3600000) {
myGLCD.print("1 Hour", 20, 180);
  }
  if (LedTimer == 14400000) {
myGLCD.print("4 Hours", 20, 180);
  }
  if (sleepnever == 1) {
myGLCD.print("Always On", 20, 180);

  }
}
