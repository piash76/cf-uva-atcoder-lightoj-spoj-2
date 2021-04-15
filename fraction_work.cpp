



void norm(pair<ll,ll> &p)   ///p.ff numenator,p.ss denominator
{
    if(p.ff<0 and p.ss<0)
    {
        p.ff*=-1;
        p.ss*=-1;
    }
    else if(p.ff<0)
    {
        p.ff*=-1;
        p.ss*=-1;
    }
    else if(p.ff==0 and p.ss<0)
    {
        p.ss*=-1;
    }

    ll d=__gcd(abs(p.ff),abs(p.ss));
    p.ff/=d;
    p.ss/=d;
}
