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


int main()
{
ll i,j,k,l,n,m,t,T,f,p,ans,cnt,par,ele,sum;
char x;
multiset<ll> s;
multiset<ll> :: iterator big,small;
s(n);
sum=0;
FOR(n)
{
    s(m);
    rep(j,m)
    {
        s(p);
        s.insert(p);
    }
    small=s.begin();
    big=s.end();
    big--;
    s.erase(big);
    s.erase(small);
    sum+=*big-*small;

}
p(sum);


return 0;
}



