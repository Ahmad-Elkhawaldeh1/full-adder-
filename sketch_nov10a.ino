

/*
Full Adder
created by: Ahmad El-khawaldeh
created on: NOV 6
*/

int A = 8;
int B = 10;
int Cin = 11;


void setup()
{
  pinMode( A,OUTPUT);
  pinMode( B,OUTPUT);
  pinMode( Cin,OUTPUT);
}

void loop()
{
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,HIGH);
  delay(1000);
  
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,LOW);
  digitalWrite(Cin,HIGH);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,HIGH);
  digitalWrite(Cin,HIGH);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);
  
  digitalWrite(A,HIGH);
  digitalWrite(B,HIGH);
  digitalWrite(Cin,HIGH);
  delay(1000);
  
  digitalWrite(A,LOW);
  digitalWrite(B,LOW);
  digitalWrite(Cin,LOW);
  delay(1000);

}
  



