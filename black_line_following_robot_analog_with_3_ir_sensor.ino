#define RightMotorReverse 3
#define RightMotorForward 5
#define LeftMotorReverse 6
#define LeftMotorForward 9
#define leftIR A0
#define rightIR A1
#define middleIR A2
void setup() {
  pinMode(RightMotorReverse,OUTPUT);
  pinMode(RightMotorForward,OUTPUT);
  pinMode(LeftMotorReverse,OUTPUT);
  pinMode(LeftMotorForward,OUTPUT);
  pinMode(rightIR ,INPUT);
  pinMode(leftIR,INPUT);
  pinMode(middleIR,INPUT);

  Serial.begin(9600);
}

void loop() {
  if (analogRead(rightIR) == HIGH && analogRead(middleIR) == HIGH && analogRead(leftIR) == LOW //RIGHT
  {
    analogWrite(LeftMotorForward, HIGH);
    analogWrite(RightMotorForward, LOW);
  }
  else if (analogRead(rightIR) == LOW && analogRead(middleIR) == HIGH && analogRead(leftIR) == HIGH )  //LEFT
  {
    analogWrite(LeftMotorForward, LOW);
    analogWrite(RightMotorForward,HIGH);
  }
  else if (analogRead(rightIR) == HIGH && analogRead(middleIR) == HIGH && analogRead(leftIR) == HIGH )  //STOP
  {
    analogWrite(LeftMotorForward,LOW);
    analogWrite(RightMotorForward,LOW);
  }
  else if (analogRead(rightIR) == LOW && analogRead(middleIR) == HIGH && analogRead(leftIR) == LOW )  //FORWARD
  {
    analogWrite(LeftMotorForward,HIGH);
    analogWrite(RightMotorForward,HIGH);
  }
  delay(1);

}
