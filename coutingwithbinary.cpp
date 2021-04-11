#include <iostream>
#include <algorithm>
#include <stdio.h>

using namespace std;

Const int maxn=1e5+5; / / / the maximum number of elements of the array
int a[maxn],b[maxn];
 int find_x(int ​​x, int l, int r, int b[])/// binary search
{
    int mid;
    while(l<=r)
    {
        mid=(l+r)/2;
        if(b[mid]==x)return mid;
        else if(b[mid]>x)r=mid-1;
        else l=mid+1;
    }
         Return -1; / / / did not return -1
}
int main()
{
    int t,n,i,p,j;
         Long long c, s; / / / may exceed the int range
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&n);
        for(i=0;i<n;i++)
        {
            scanf("%d%d",&a[i],&b[i]);
        }
                 sort(a,a+n);///sort from small to large
        sort(b,b+n);
        c=0;
        for(i=0;i<n;i++)
        {
                         If(i==0||a[i-1]!=a[i])///a the first element in the array or the current element of the a array is not equal to the previous element
            {
                s=0;
                p=find_x(a[i],0,n-1,b);
                                 When there is a[i] in the if(p!=-1)///b array
                {
                    for(j=p;j<n;j++)
                    {
                        if(b[j]==a[i])s++;
                        else break;
                    }
                    for(j=p-1;j>=0;j--)
                    {
                        if(b[j]==a[i])s++;
                        else break;
                    }
                }
                c+=s;
            }
                         Else c+=s;///When i>0 and a[i]=a[i-1], ie the current element of the a array is equal to the previous element, reducing the time consumption
        }
        printf("%I64d\n",c);
    }
    return 0;
}
