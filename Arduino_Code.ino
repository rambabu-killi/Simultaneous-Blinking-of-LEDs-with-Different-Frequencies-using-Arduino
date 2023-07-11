unsigned long ms_from_start=0;
unsigned long ms_previous_read_LED1=0;
unsigned long LED1_interval=1000;
unsigned long ms_previous_read_LED2=0;
unsigned long LED2_interval=500;
unsigned long ms_previous_read_LED3=0;
unsigned long LED3_interval=250;

#define LED1 2
#define LED2 3
#define LED3 4

int LED1_state=0;
int LED2_state=0;
int LED3_state=0;

void setup(){
  pinMode(LED1,OUTPUT);
  pinMode(LED2,OUTPUT);
  pinMode(LED3,OUTPUT);
}

void loop(){
  ms_from_start = millis();
  if(ms_from_start-ms_previous_read_LED1>LED1_interval){
    ms_previous_read_LED1=ms_from_start;
    if(LED1_state==0)LED1_state=1;else LED1_state=0;
      digitalWrite(LED1,LED1_state);
  }
    if(ms_from_start-ms_previous_read_LED2>LED2_interval){
    ms_previous_read_LED2=ms_from_start;
    if(LED2_state==0)LED2_state=1;else LED2_state=0;
      digitalWrite(LED2,LED2_state);
  }
      if(ms_from_start-ms_previous_read_LED3>LED3_interval){
    ms_previous_read_LED3=ms_from_start;
    if(LED3_state==0)LED3_state=1;else LED3_state=0;
      digitalWrite(LED3,LED3_state);
  }
}