



void divisor(ll num)
{

    for(ll i=2;i*i<=num;i++)
    {
        if(num%i==0)
        {
            v.pb(i);
            if(num/i!=i) v.pb(num/i);
        }
    }
}


void factor(ll n)
{
    vector<ll>f;
    for(ll i=1;i*i<=n;i++)
    {
        if(n%i==0)
        {
            f.pb(i);
            if(n/i!=i) f.pb(n/i);
        }
    }
    sort(all(f));
    for(auto x: f) cout<<x<<" ";
    cout<<endl;
}

ll prime_factor(ll n)
{
    vector<ll>v;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(isprime(i)) v.push_back(i);
            if(isprime(i) and n/i!=i and isprime(n/i)) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto x: v) cout<<x<<" ";
    cout<<endl;

}



ll prime_factor(ll n)
{
    vector<ll>v;
    for(ll i=2;i*i<=n;i++)
    {
        if(n%i==0)
        {
            if(isPrime(i)) v.push_back(i);
            if(isPrime(i) and n/i!=i and isPrime(n/i)) v.push_back(n/i);
        }
    }
    sort(v.begin(),v.end());
    for(auto x: v) cout<<x<<" ";
    cout<<endl;

}
