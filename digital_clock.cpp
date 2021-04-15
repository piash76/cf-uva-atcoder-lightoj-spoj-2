
string con(ll n)
{
    string s="";
    ll tmp=n;
    while(tmp)
    {
        ll r=tmp%10;
        char ch=r+'0';
        s+=ch;
        tmp/=10;
    }

    reverse(s.begin(),s.end());
    return s;
}

string fun(ll sec)
{
    string ans="";

    ll h = (sec/3600);

	ll m = (sec -(3600*h))/60;

	ll s = (sec -(3600*h)-(m*60));

    ///cout<<h<<" "<<m<<" "<<s<<endl;



	if(h==0) ans+="00";
	else if(h>0 and h<=9) ans+="0";
    string st=con(h);
	ans+=st;

	if(m==0) ans+="00";
	else if(m>0 and m<=9) ans+="0";
    st=con(m);
	ans+=st;

	if(s==0) ans+="00";
	else if(s>0 and s<=9) ans+="0";
    st=con(s);
	ans+=st;

	return ans;

}
