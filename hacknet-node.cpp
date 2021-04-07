while (hacknet.numNodes() < 8)
{
    for (int i = 0; i < 8; i++)
    {
        hacknet.purchaseNode();
        hacknet.upgradeLevel(i, 50);
    }
}
