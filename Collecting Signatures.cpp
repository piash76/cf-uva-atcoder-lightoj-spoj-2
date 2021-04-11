

///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;

bool cmp(pll a,pll b)
{
    if(a.ss!=b.ss) return a.ss<b.ss;
    else a.ff<b.ff;
}


int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n;cin>>n;
    vector<pll> v;

    for(i=0;i<n;i++)
    {
        ll x,y;cin>>x>>y;
        v.push_back({x,y});

    }
    sort(v.begin(),v.end(),cmp);

    ll lst=-1;
    vector<ll> ans;

    for(auto x:v)
    {
       // cout<<"XF "<<x.ff<<" XS "<<x.ss<<endl;
        if(lst==-1)
        {
            ans.push_back(x.ss);
            lst=x.ss;
        }
        else
        {
            if(lst<x.ff or lst>x.ss)
            {
                ans.push_back(x.ss);
                lst=x.ss;
            }
        }

    }

    cout<<ans.size()<<endl;
    for(auto x:ans) cout<<x<<" ";



    return 0;

}

/*



///Bismillahir Rahmanir Rahim
#include<bits/stdc++.h>

#define ll long long
#define pll  pair<ll,ll>

#define ff    first
#define ss    second

#define  mp  make_pair
#define  pb  push_back

#define cy  cout<<"YES"<<endl
#define cn   cout<<"NO"<<endl


using namespace std;

const ll inf=1e18;
const int mod=1e9+7;
const int M=500005;

struct Seg {
    int start, end;
};



vector<int> fun(vector<Seg> &seg)
{

    // sort the vector according to the end points
    std::sort(seg.begin(), seg.end(), [](const Seg &a, const Seg &b) -> bool {
        return a.end < b.end;
    });

    vector<int> p; // create a vector to store the common points in the segments
    int pt = seg[0].end; // set the point to the first end point i-e shortest end point
    p.push_back(pt);

    for (ll i = 1; i < seg.size(); ++i)
    {
        if (pt < seg[i].start || pt > seg[i].end) { // if the point is not in the segment
            pt = seg[i].end; // update the point to the end point of the current segment
            p.push_back(pt); // store it in the vector
        }
    }

    return p;
}
int main()
{


    ios::sync_with_stdio(0);
    cin.tie(0); cout.tie(0);


    ll t,i,j;

    ll n;cin>>n;
    vector<Seg> s(n);
    for ( i = 0; i < n; ++i)
    {
        cin >> s[i].start >> s[i].end;
    }
    vector<int> point = fun(s);
    cout << point.size() << "\n";
    for ( i = 0; i < point.size(); ++i) {
        cout << point[i] << " ";
    }


    return 0;

}
/*
100
41 42
52 52
63 63
80 82
78 79
35 35
22 23
31 32
44 45
81 82
36 38
10 12
1 1
23 23
32 33
87 88
55 56
69 71
89 91
93 93
38 40
33 34
14 16
57 59
70 72
36 36
29 29
73 74
66 68
36 38
1 3
49 50
68 70
26 28
30 30
1 2
64 65
57 58
58 58
51 53
41 41
17 18
45 46
4 4
0 1
65 67
92 93
84 85
75 77
39 41
15 15
29 31
83 84
12 14
91 93
83 84
81 81
3 4
66 67
8 8
17 19
86 87
44 44
34 34
74 74
94 95
79 81
29 29
60 61
58 59
62 62
54 56
58 58
79 79
89 91
40 42
2 4
12 14
5 5
28 28
35 36
7 8
82 84
49 51
2 4
57 59
25 27
52 53
48 49
9 9
10 10
78 78
26 26
83 84
22 24
86 87
52 54
49 51
63 64
54 54

*/



/*
100
41 42
52 52
63 63
80 82
78 79
35 35
22 23
31 32
44 45
81 82
36 38
10 12
1 1
23 23
32 33
87 88
55 56
69 71
89 91
93 93
38 40
33 34
14 16
57 59
70 72
36 36
29 29
73 74
66 68
36 38
1 3
49 50
68 70
26 28
30 30
1 2
64 65
57 58
58 58
51 53
41 41
17 18
45 46
4 4
0 1
65 67
92 93
84 85
75 77
39 41
15 15
29 31
83 84
12 14
91 93
83 84
81 81
3 4
66 67
8 8
17 19
86 87
44 44
34 34
74 74
94 95
79 81
29 29
60 61
58 59
62 62
54 56
58 58
79 79
89 91
40 42
2 4
12 14
5 5
28 28
35 36
7 8
82 84
49 51
2 4
57 59
25 27
52 53
48 49
9 9
10 10
78 78
26 26
83 84
22 24
86 87
52 54
49 51
63 64
54 54

*/


