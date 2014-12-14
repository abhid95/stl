#include <bits/stdc++.h>
#define MAX 1000000007
#define pb push_back
#define mp make_pair
#define FOR(n) for(i=0;i<n;i++)
#define rep(i,n) for(i=0;i<n;i++)
#define reps(i,a,b) for(i=a;i<=b;i++)
#define swap(a,b) T=a,a=b,b=T
#define ll long long int
#define que queue<int>
#define s(t) scanf("%lld",&t)
#define p(t) printf("%lld\n",t)
using namespace std;
ll mx(ll a[],ll k)
{
    ll i,m,pos;
    m=0;
    FOR(k)
        if(a[i]>m)
            {m=a[i];pos=i;}
    return m;
}

int main()
{
ll i,j,k,l,n,m,t,T,f,p,ans,cnt,par;
map<string,int> m1;
map<string,int> :: iterator it;
string s;
char x;
while(1)
{
    map<string,int> m1;
    map<string,int> :: iterator it;
    s(n);
    s(l);
    if(n==0 && l==0)
        break;
    FOR(n)
    {
        cin>>s;
        m1[s]++;
    }
    map<int,int> m2;
    for(it=m1.begin();it!=m1.end();it++)
    {
        m2[it->second]++;
    }
    for(i=1;i<=n;i++)
    {
        cout<<m2[i]<<endl;
    }

}

return 0;
}


