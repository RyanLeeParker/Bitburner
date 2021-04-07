int ram = 1024;
int i = 0;

while(i < getPurchasedServerLimit())
{
    if (getServerMoneyAvailable("home") > getPurchasedServerCost(ram))
    {
      string servername = purchaseServer("server: " + i, ram);
      scp("early-hack-template.script", hostname);              // copy program to run
      exec("early-hack-template.script", hostname, 392);        // execute with 392 max threads
      i++;
    }
}
