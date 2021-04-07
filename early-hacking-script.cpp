int security = getserversecuritylevel("joesguns");

while(true)
{
  while (security >= 20)
  {
    weaken("joesguns");
    security = getserversecuritylevel("joesguns");
  }
  
  if (security <= 20)
  {
    hack("joesguns");
  }
}
