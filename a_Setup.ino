unsigned int addr = 2;

void setup()
{
  Serial.begin(9600);
      pinMode(19,OUTPUT);pinMode(20,OUTPUT);
      digitalWrite(19,1);digitalWrite(20,1);

 setSyncProvider(getTeensy3Time);

      myGLCD.InitLCD(0);
      myGLCD.clrScr();
      myGLCD.fillScr(BLACK);
      myGLCD.setFont(BigFont);
      myTouch.InitTouch(0);
      myTouch.setPrecision(PREC_EXTREME);
      run1();
     //screen();

}
