int saltar=0; 
int pulsador=12;
void setup() {

pinMode(pulsador, INPUT); 
for(int led=2;i<=9;i++){ 
pinMode(led, OUTPUT);
}
}

void loop() {
if (digitalRead(pulsador)==HIGH){ 
saltar++; 
if (saltar>3){ 
saltar=0; 
}
while (digitalRead(pulsador)==HIGH){} 
}

if(saltar==0){ 
secuencia1();
}
if(saltar==1){ 
secuencia2();
}
if(saltar==2){ 
secuencia3();
}
if(saltar==3){ 
secuencia4();
}

}
void secuencia1(){
for (int i=2; i<=9; i++){ 
digitalWrite(i, HIGH); 
digitalWrite(i-1,LOW); 
delay(50); 
}
for (int i=9; i>=2; i--){ 
digitalWrite(i, LOW); 
digitalWrite(i-1,HIGH);
delay(50);
}
}

void secuencia2(){
int k=11; 
for(int i=6; i<=9;i++){ 
digitalWrite(i, HIGH); 
digitalWrite(k-i, HIGH); 
delay(50); 
}
for(int i=9; i>=2;i--){ 
digitalWrite(i, LOW);
digitalWrite(k-i, LOW);
delay(50);
}
}

void secuencia3(){
for(int i=2; i<=9; i++){
digitalWrite(i,HIGH);
delay(50);
}
for(int i=9; i>=2;i--){
digitalWrite(i,LOW);
delay(50);
}
}

void secuencia4(){
int k=11;
for(int i=2; i<=5;i++){
digitalWrite(i,HIGH);
digitalWrite(k-i,LOW);
}
delay(50);
for(int i=2; i<=5;i++){
digitalWrite(i,LOW);
digitalWrite(k-i,HIGH);
}
delay(50);
}
