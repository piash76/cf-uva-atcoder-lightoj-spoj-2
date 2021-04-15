


ll dis(pll x,pll y)
{
    return abs(x.ff-y.ff)+abs(x.ss-y.ss);  ///cause of 4 directions
}

ll dis(pll x,pll y)
{
    return max(abs(x.ff-y.ff),abs(x.ss-y.ss));  ///cause of 8 directions
}
