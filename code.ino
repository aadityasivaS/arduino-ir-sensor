int irObstaclePin = 7;
int Obstacle = HIGH;


void setup()
{
  pinMode(irObstaclePin, INPUT);
  pinMode(4, OUTPUT);
  Serial.begin(9600);
}

void loop()
{
  Obstacle = digitalRead(irObstaclePin);
  if (Obstacle == LOW)
  {
    Serial.println("OBSTACLE!!,OBSTACLE!!");
    digitalWrite(4, HIGH);
  }
  else
  {
    Serial.println("clear");
    digitalWrite(4, LOW);
  }
  delay(200);
}
