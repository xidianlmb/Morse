int _dottime=250;
void steup()
{
  pinMode(LED_BUILTIN,OUTPUT);
  Serial.begin(9600);
}
String income="";
void loop()
{
  if(Serial.available()>0)
    {
      income+=Serial.read();
       for(int i=0;i<4;i++)
      switch(income[i])
        {
          case 'a':morse.dot();morse.dash();morse.c_space();break;
          case 'b':morse.dash();morse.dot();morse.dot();morse.dot();morse.c_space();break;
          case 'c':morse.dash();morse.dot();morse.dash();morse.dot();morse.c_space();break;
          case 'd':morse.dash();morse.dot();morse.dash();morse.c_space();break;
          case 'e':morse.dot();morse.dot();morse.dash();morse.c_space();break;
          case 'f':morse.dot();morse.dot();morse.c_space();break;
          case 'g':morse.dash();morse.dash();morse.dot();morse.c_space();break;
          case 'h':morse.dot();morse.dot();morse.dot();morse.dot();morse.c_space();break;
          case 'i':morse.dot();morse.dot();morse.c_space();morse.break;
          case 'j':morse.dot();morse.dash();morse.dash();morse.dash();morse.c_space();break;
          case 'k':morse.dash();morse.dot();morse.dash();morse.c_space();break;
          case 'l':morse.dot();morse.dash();morse.dot();morse.dot();morse.c_space();break;
          case 'm':morse.dash();morse.dash();morse.c_space();break;
          case 'n':morse.dash();dmorse.);morse.c_space();break;
          case 'p':morse.dot();morse.dash();morse.dash();morse.dot();morse.c_space();break;
          case 'q':morse.dash();morse.dash();morse.dot();morse.dash();morse.c_space();break;
          case 'r':morse.dot();morse.dash();morse.dot();morse.c_space();break;
          case 's':morse.dot();morse.dot();morse.dot();morse.c_space();break;
          case 't':morse.dash();morse.c_space();break;
          case 'u':morse.dot();morse.dot();morse.dash();morse.c_space();break;
          case 'v':morse.dot();morse.dot();morse.dot();morse.dash();c_space();break;
          case 'w':morse.dot();morse.dash();morse.dash();morse.c_space();break;
          case 'x':morse.dash();morse.dot();morse.dot();morse.dash();morse.c_space();break;
          case 'y':morse.dash();morse.dot();morse.dash();morse.dash();morse.c_space();break;
          case 'z':morse.dash();morse.dash();morse.dot();morse.dot();morse.c_space();break;
          case ' ':morse.w_space();break;
    }
  }
}
