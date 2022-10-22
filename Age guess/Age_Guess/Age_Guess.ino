int a = 1;
int b = 2;
int c = 3;
int d = 4;
int e = 5;
int f = 6;
int de = 200;
int submit = 7;
int card_a,card_b,card_c,card_d,card_e,card_f,sub,age;
int a1 = 0;
int a2 = 0;
int a3 = 0;
int a4 = 0;
int a5 = 0;
int a6 = 0;
int led = 13;

void setup() 
{
  Serial.begin(9600);
  pinMode(a, INPUT);
  pinMode(b, INPUT);
  pinMode(c, INPUT);
  pinMode(d, INPUT);
  pinMode(e, INPUT);
  pinMode(f, INPUT);
  pinMode(submit, INPUT);
  pinMode(led, OUTPUT);
}

void loop() 
{
  digitalWrite(led,LOW);
  while (1)
  {
    card_a = digitalRead(a);
    card_b = digitalRead(b);
    card_c = digitalRead(c);
    card_d = digitalRead(d);
    card_e = digitalRead(e);
    card_f = digitalRead(f);
    sub = digitalRead(submit);

    if (card_a == HIGH)
    {
      a1 = 1;
      digitalWrite(led, HIGH);
      delay (1000);
      digitalWrite(led, LOW);
      delay (1000);
      card_a = digitalRead(a);
      while (card_a != LOW)
      {
        card_a = digitalRead(a);
//        if (card_a == LOW)
//        {
//          break;
//        }
      }
      break;
    }
    else if (card_b == HIGH)
    {
      a2 = 2;
      while (1)
      {
        card_b = digitalRead(b);
        if (card_b == LOW)
        {
          break;
        }
      }
      break;
    }
    else if (card_c == HIGH)
    {
      a3 = 4;
      while(1)
      {
        card_c = digitalRead(c);
        if (card_c == LOW)
        {
          break;
        }
      }
      break;
    }
    else if (card_d == HIGH)
    {
      a4 = 8;
      while (1)
      {
        card_d = digitalRead(d);
        if (card_d == LOW)
        {
          break;
        }
      }
      break;
    }
    else if (card_e == HIGH)
    {
      a5 = 16;
      while(1)
      {
        card_e = digitalRead(e);
        if (card_e == LOW)
        {
          break;
        }
      }
      break;
    }
    else if (card_f == HIGH)
    {
      a6 = 32;
      while(1)
      {
        card_f = digitalRead(f);
        if (card_f == LOW)
        {
          break;
        }
      }
      break;
    }
    else if (sub == HIGH)
    {
      while (1)
      {
        sub = digitalRead(submit);
        if (sub == LOW)
        {
          break;
        }
        
      }
      age = a1+a2+a3+a4+a5+a6;
      Serial.print(age);
      delay (5000);
      break;
    }
  }
  digitalWrite(led, HIGH);
  delay(500);
}
