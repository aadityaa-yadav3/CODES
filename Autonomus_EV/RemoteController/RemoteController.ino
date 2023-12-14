#include<util/atomic.h>

#define ch3 2
#define ch6 3
#define ch1 18
#define ch2 19

#define throttle 5
#define reverse 53

volatile long start[]={0,0,0,0};
volatile long curr[]={0,0,0,0};
volatile long pulse[]={0,0,0,0};
volatile long pulsew[]={0,0,0,0};
volatile long pulse_atom[]={0,0,0,0};

void setup() {
  Serial.begin(9600);
  pinMode(throttle,OUTPUT);
  pinMode(reverse,OUTPUT);
 // pinMode(10,INPUT);
  pinMode(A0,INPUT);
  pinMode(2,INPUT_PULLUP);
  analogWrite(throttle,0);
  
  pinMode(ch1,INPUT_PULLUP);
  pinMode(ch3,INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(ch3),Pulses<0>,CHANGE);
  attachInterrupt(digitalPinToInterrupt(ch6),Pulses<1>,CHANGE);
  attachInterrupt(digitalPinToInterrupt(ch1),Pulses<2>,CHANGE);
  attachInterrupt(digitalPinToInterrupt(ch2),Pulses<3>,CHANGE);
}

void loop() {
  ATOMIC_BLOCK(ATOMIC_RESTORESTATE){
    pulse_atom[0]=pulsew[0];
    pulse_atom[1]=pulsew[1];
    pulse_atom[2]=pulsew[2];
    pulse_atom[3]=pulsew[3];
  }
  pulse_atom[0]=constrain(pulse_atom[0],1000,1850);
  pulse_atom[1]=constrain(pulse_atom[1],1000,2000);
  pulse_atom[2]=constrain(pulse_atom[2],1000,2000);
  pulse_atom[3]=constrain(pulse_atom[3],1100,2000);

  pulse_atom[0]=map(pulse_atom[0],1000,1850,0,180);
  pulse_atom[1]=map(pulse_atom[1],1000,2000,0,180);
  pulse_atom[2]=map(pulse_atom[2],1000,2000,0,180);
  pulse_atom[3]=map(pulse_atom[3],1100,2000,0,180);
  
//  Serial.println(pulse_atom[0]);
//  Serial.print("  ,  ");
//  Serial.print(pulse_atom[1]);
//  Serial.print("  ,  ");
//  Serial.print(pulse_atom[2]);
//  Serial.print("  ,  ");
//  Serial.println(pulse_atom[3]);
    
  int a = pulse_atom[0];
  analogWrite(throttle,a);
  if(pulse_atom[1]<=50){
    digitalWrite(reverse,0);
  }
  else{
    digitalWrite(reverse,1);
  }
  double x=analogRead(A0)*5;
  double y=x/1023;
  Serial.print(y);
  Serial.print(",");
  Serial.println(millis());
  delay(50);
}


template<int j>
void Pulses(){
  curr[j]=micros();
  if(curr[j]>start[j]  ){
    pulse[j]=curr[j]-start[j];
    
  }
  start[j]=curr[j];
  
  if(pulse[j]<2000){
    pulsew[j]=pulse[j];
  }
}
