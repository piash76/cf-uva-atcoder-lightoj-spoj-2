

string col_number_to_string(ll number)
{
    string st="";
    while(number>0)
    {
        ll rem=number%26;
        if(rem==0)
        {
            st+='Z';
            number=(number/26-1);
        }
        else
        {
            st+=(rem-1)+'A';
            number=number/26;
        }
    }
    reverse(st.begin(),st.end());

    return st;


}

ll string_to_number(string &s)
{
    reverse(s.begin(),s.end());
    ll col=0,po=1;
    for(ll i=0;i<s.size();i++)
    {
        col+=po*(s[i]-'A'+1);
        po*=26;
    }

    return col;

}
