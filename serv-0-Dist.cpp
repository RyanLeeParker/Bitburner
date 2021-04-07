string servers0Port = ["foodnstuff", "sigma-cosmetics", "joesguns", "nectar-net", "hong-fang-tea", "harakiri-sushi"];
                    
for (int i = 0; i < servers0Port.length; i++) 
{
    string serv = servers0Port[i];

    scp("early-hack-template.script", serv);
    nuke(serv);
    exec("early-hack-template.script", serv, 6);
}
