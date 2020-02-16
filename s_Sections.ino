

void setting(){
  //myGLCD.clrScr(); 
      myGLCD.setFont(Grotesk24x48);
     myGLCD.fillScr(WHITE);
     
   myGLCD.setColor(BLACK);
   myGLCD.setBackColor(WHITE);
   myGLCD.drawLine(0,50,240,50);
   myGLCD.drawLine(0,51,240,51);
    myGLCD.drawLine(0,52,240,52);
    myGLCD.print("Settings", 0, 0);
myGLCD.setFont(BigFont);

myButtons.deleteAllButtons();
     myButtons.setButtonColors(VGA_BLACK, VGA_RED, VGA_BLACK, VGA_BLUE, WHITE);
int but8 = myButtons.addButton( 0,  170, 240,  40,"");
int but_home = myButtons.addButton( 0,  290, 240,  30,"Home");
   myButtons.drawButtons();
   
 myGLCD.print("Airplane Mode", 0, 70);
    myGLCD.drawLine(0,90,240,90);
     myGLCD.print("Wi-Fi", 0, 110);
    myGLCD.drawLine(0,130,240,130);
     myGLCD.print("Cellular", 0, 150);
    myGLCD.drawLine(0,170,240,170);
     myGLCD.print("Screen Time", 0, 190);
    myGLCD.drawLine(0,210,240,210);
         myGLCD.print("Back-light", 0, 230);
    myGLCD.drawLine(0,250,240,250);
             myGLCD.print("Developer", 0, 270);
    myGLCD.drawLine(0,290,240,290);
      myGLCD.setBackColor(BLUE);

    while(1)
   {
    if (myTouch.dataAvailable() == true)
    {
      
      pressed_button = myButtons.checkButtons();

      if (pressed_button==but8){
        screen();
        
        }
        if (pressed_button==but_home){
           //  
             
         myGLCD.clrScr();
   myButtons.deleteAllButtons();
         run1();
         break;
         
        }
    }
   }
}





void run1(){
myButtons.setButtonColors(VGA_YELLOW, VGA_RED, VGA_YELLOW, VGA_BLUE, DarkGREY);
    myButtons.setTextFont(BigFont);
  but1 = myButtons.addButton( 10,  110, 230,  40, "Home IOT");
  but2 = myButtons.addButton( 10,  160, 230,  40, "Phone");
  but3 = myButtons.addButton( 10, 210, 230,  40, "Message");
  but4 = myButtons.addButton( 10, 260, 230,  40, "Settings");
 esleep = 12;
  myButtons.drawButtons();

   if (esleep == 1) {
    sleeptime = 10000;
  }
  if (esleep == 2) {
    sleeptime = 20000;
  }
  if (esleep == 3) {
    sleeptime = 30000;
  }
  if (esleep == 4) {
    sleeptime = 60000;
  }
  if (esleep == 5) {
    sleeptime = 120000;
  }
  if (esleep == 6) {
    sleeptime = 300000;
  }
  if (esleep == 7) {
    sleeptime = 600000;
  }
  if (esleep == 8) {
    sleeptime = 1200000;
  }
  if (esleep == 9) {
    sleeptime = 1800000;
  }
  if (esleep == 10) {
    sleeptime = 3600000;
  }
  if (esleep == 11) {
    sleeptime = 14400000;
  }
  if (esleep == 12) {
    sleepnever = 1;
  }
  awakeend = sleeptime + 1000; // set the current sleep time based on what the saved settings in EEPROM were
  pinMode(20, OUTPUT);
}
