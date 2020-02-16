

void screen(){
     //  myGLCD.fillScr(255,250,250);
      // myGLCD.clrScr();
      myGLCD.setFont(BigFont);
      
      myGLCD.setColor(VGA_GRAY);myGLCD.fillRoundRect( 10, 100,230,200); // draw box bob

    myGLCD.setColor(BLUE); myGLCD.fillRoundRect( 10, 100,230,120); // box name up
    myGLCD.setColor(BLACK);myGLCD.drawRoundRect( 10, 100,230,120);// box name up

  /*-----------------------------Text*/
   myGLCD.setColor(BLACK);myGLCD.setBackColor(BLUE);myGLCD.print("Screen Time", CENTER, 102);
   
/*--------------------Buttons----------*/
      myButtons.deleteAllButtons(); 
      myButtons.setTextFont(BigFont);
      myButtons.setButtonColors(VGA_YELLOW, VGA_RED, VGA_YELLOW, VGA_BLUE, DarkGREY);

int but5 = myButtons.addButton( 190,  125, 32,  32, "+");
int but6 = myButtons.addButton( 190,  165, 32,  32, "-");
int but7 = myButtons.addButton( 20,  140, 64,  32, "OK");
myButtons.drawButtons();
/*--------------------print level----------*/

    myGLCD.setBackColor(VGA_GRAY);myGLCD.print(esleep, CENTER, 150); // show times  level
  
    /*--------------------while(1) touch----------*/
   while(1)       
   {
    if (myTouch.dataAvailable() == true)
    {
      pressed_button = myButtons.checkButtons();
      if (pressed_button==but5){ 
      
        esleep +=1; 
        myGLCD.print(esleep, CENTER, 150);}
       
      }
      if (pressed_button==but6){
        
       esleep -=1;
      myGLCD.print(esleep, CENTER, 150);}
        
      if (pressed_button==but7){
        myButtons.deleteAllButtons();
      //myGLCD.clrScr();
        //run1();
        setting();
                           //  short delay to prevent saving twice with one single press of the button
        break;
        }
    
   }
}





void loop()
{
//screen();
//run1();
rtc();
 currenttime = millis();
  unsigned long currentawake = millis();
  if((currentawake > awakeend) && (sleepnever == 0)) {
    if (sleep == 0) {
      //for(i = blv ; i >= 0; i-=1) {
        digitalWrite(20, 0);
        delay(4);
     // }
      sleep = 1;
    }
    }
//while(1) 
  {
    if (myTouch.dataAvailable() == true)
    {
      
      pressed_button = myButtons.checkButtons();

      if (pressed_button==but1){}
         
        
      if (pressed_button==but2){}
         
        
      if (pressed_button==but3){}
         
      if (pressed_button==but4){
         

          setting();
          //screen();
      }
      if (pressed_button==-1)
        myGLCD.print("None    ", 0, 305);
          awakeend = currenttime + sleeptime; //set the sleep time when screen is pressed
    if (sleep == 1) { // if asleep, then fade the backlight up
     // for(i = 0 ; i <= blv; i+=1) { 
        digitalWrite(20, 1);
        delay(1);
     // }
      sleep = 0; // change the sleep mode to "awake"
      return;
    }
    }
  }
 
}
