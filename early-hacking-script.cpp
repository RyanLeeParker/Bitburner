int security = getserversecuritylevel("joesguns") + 5;
int money = getServerMaxMoney("joesguns") * 0.75;

nuke("joesguns");

while(true)
{
  while (security >= 20)
  {
    weaken("joesguns");
    security = getserversecuritylevel("joesguns");
  }
  while (getServerMoneyAvailable("joesguns") < money)
  {
    grow("joesguns");
  }
  if (security <= 20)
  {
    hack("joesguns");
  }
}
