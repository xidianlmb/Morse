int _dottime=250;
void setup()
{
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}
String income="";
void loop()
{
  if(Serial.available()>0)
    {
      income+=char(Serial.read());
    }
  for(int i=0;i<100;i++){
      switch(income[i])
        {
          case 'a':dot();dash();c_space();break;
          case 'b':dash();dot();dot();dot();c_space();break;
          case 'c':dash();dot();dash();dot();c_space();break;
          case 'd':dash();dot();dash();c_space();break;
          case 'e':dot();dot();dash();c_space();break;
          case 'f':dot();dot();c_space();break;
          case 'g':dash();dash();dot();c_space();break;
          case 'h':dot();dot();dot();dot();c_space();break;
          case 'i':dot();dot();c_space();break;
          case 'j':dot();dash();dash();dash();c_space();break;
          case 'k':dash();dot();dash();c_space();break;
          case 'l':dot();dash();dot();dot();c_space();break;
          case 'm':dash();dash();c_space();break;
          case 'n':dash();dot();c_space();break;
          case 'o':dash();dash();dash();c_space();break;
          case 'p':dot();dash();dash();dot();c_space();break;
          case 'q':dash();dash();dot();dash();c_space();break;
          case 'r':dot();dash();dot();c_space();break;
          case 's':dot();dot();dot();c_space();break;
          case 't':dash();c_space();break;
          case 'u':dot();dot();dash();c_space();break;
          case 'v':dot();dot();dot();dash();c_space();break;
          case 'w':dot();dash();dash();c_space();break;
          case 'x':dash();dot();dot();dash();c_space();break;
          case 'y':dash();dot();dash();dash();c_space();break;
          case 'z':dash();dash();dot();dot();c_space();break;
          case ' ':w_space();break;
       }
  }

}

void dot()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(_dottime);
  digitalWrite(LED_BUILTIN,LOW);
  delay(_dottime);
}

void dash()
{
  digitalWrite(LED_BUILTIN,HIGH);
  delay(_dottime*4);
  digitalWrite(LED_BUILTIN,LOW);
  delay(_dottime);
}

void c_space()
{
  digitalWrite(LED_BUILTIN,LOW);
  delay(_dottime*3);
}

void w_space()
{
  digitalWrite(LED_BUILTIN,LOW);
  delay(_dottime*7);
}
