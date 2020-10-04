 int pres;
 int temp;
 int convey1;
 int convey2;
 int volt;

void setup() {
  Serial.begin(9600);

}
void loop(){
 pres = analogRead(A0)/10;
 temp = analogRead(A1)/10;
 convey1 = analogRead(A2)/100;
 convey2 = analogRead(A3)/100;
 volt = analogRead(A4)/2.5;


//batas preasure minimum=10 Bar maximum=100Bar
 pres = map(pres, 0, 100, 10, 100);

 String data = String(pres)+";"+ String(temp)+";"+ String(convey1)+";"+String(convey2)+";"+String(volt)+";";
 
 Serial.println(data);
 delay(750);

}

