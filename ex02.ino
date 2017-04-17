void setup () {
  Serial.begin (9600);
  while (!Serial);
  Serial.println ("03050654" );
   Serial.println ("04053096" );
   Serial.println ("06");
}
void loop() {
   if(Serial.available())
   {     
     char ch= Serial.read ();
     if(ch>='0'&&ch<='9')
     {
       byte no=ch-'0';
       Serial.print (no);
     
     }
     
   }
}
