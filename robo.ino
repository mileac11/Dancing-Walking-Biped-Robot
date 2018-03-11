#include <Servo.h> 


Servo servo1;  
Servo servo2;
Servo servo3;
Servo servo4;


int movement;
int poss1,poss2,poss3,poss4;

void setup() 
{
   servo1.attach(3);  //left hip
   servo2.attach(5);; //right hip
   servo3.attach(9);  //right foot
   servo4.attach(10); //left foot

 
   servo1.write(110);
   servo2.write(100);
   servo3.write(90);
   servo4.write(80);
  
  
    Serial.begin(9600); 
    Serial.println("Robo is ready!!");
    Serial.println("Enter 1 ->  Move style 1");
    Serial.println("Enter 2 ->  Move style 2");
    Serial.println("Enter 3 ->  Move style 3");

}

void loop()
{

    if(Serial.available()>0) 
      {
      movement = Serial.parseInt(); 
      }

    if (movement == 1)
      move1();

    if (movement == 2)
      move2();

    if (movement == 3)
      move3();

    movement = 0;
   

}




void dont_move()
{
 
   servo1.write(110);
   servo2.write(100);
   servo3.write(90);
   servo4.write(80);
   delay(20);
}

void left_leg_up()
{
  
    int pos1 = 80;
    int pos2 = 110;
    
   do
   {
    servo4.write(pos1);
    servo3.write(pos2);
    pos1++;
    pos2++;
    delay(20);
   }
   while(pos1 < 100);
  
 }

void right_leg_up()
{
   
    int pos1 = 80;
    int pos2 = 100;
    do
   {
    servo3.write(pos2);
    servo4.write(pos1);
    pos1--;
    pos2--;
    delay(20);
   }
   while(pos1 > 50); 
  
}

void left_leg_front()
{
   
    int pos1 = 120;
    int pos2 = 110;
    int pos3 = 110;
    do
    {
      servo2.write(pos1);
      servo1.write(pos2);
      servo4.write(pos3);
      pos1--;
      pos2--;
      pos3--;
      delay(20);
    }
   while(pos1 > 100);
}

void  right_leg_front()
{
    int pos1 = 80;
    int pos2 = 100;
    int pos3 = 60;
    
    do
    {
    servo1.write(pos1);
    servo2.write(pos2);
    servo3.write(pos3);
    pos1++;
    pos2++;
    pos3++;
    delay(20);
   }
   while(pos1 < 110);    
}




void move1()
{
  Serial.println("Doing move 1");

  dont_move();
  int times = 10; 
  
  do
  {
    right_leg_front();
    left_leg_front();  
    times--;
  }
  while(times > 0);

  Serial.println("Done with move 1");
}

void move2()
{
    Serial.println("Doing move 2");
   
    dont_move();
    int times = 6; 
    do
    {
        int pos1 = 80;
        int pos2 = 60;
        do
         {
            servo1.write(pos1);
            servo2.write(pos2);
            pos1++;
            pos2++;
            delay(20);
         }
        while(pos1 < 140);
       
        pos1 = 140;
        pos2 = 120;
        do
         {
            servo1.write(pos1);
            servo2.write(pos2);
            pos1--;
            pos2--;
            delay(20);
         }
        while(pos1 > 80);
        times--;
    }
    while(times > 0);
    
    dont_move();
    
    Serial.println("Done with move 2");
}

void move3()
{
    Serial.println("Doing move 3");
   
    dont_move();
    int times = 3; 
    do
    {
      right_leg_up(); 
      right_leg_up();
      dont_move();
      left_leg_up();
      left_leg_up();
      dont_move();
      times--;
    }
    while(times > 0);
    
    dont_move();

    Serial.println("Done with move 3");
}





