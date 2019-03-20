void setup()
{
  pinMode(LED_BUILTIN, OUTPUT);
  digitalWrite(LED_BUILTIN, LOW);
}

void loop()
{
  int a = 1;
  int b = 2;
  int c = 3;
  int d = 0;
  int e = 0;
  int f = 0;
  d = a+b;
    if (d == 3)
    {
      e++;
    }
  d = a+c;
    if (d == 3)
    {
      e++;
    }
  d = c+b;
    if (d == 3)
    {
      e++;
    }
  for (f = 0; f <= e; f++)
    {
    digitalWrite(LED_BUILTIN, HIGH);
    delay(100);
    digitalWrite(LED_BUILTIN, LOW);
    delay(100);
    }
  digitalWrite(LED_BUILTIN, LOW);
  delay(10000);
}
