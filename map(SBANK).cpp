//multiset sucks use map instead for problems involving duplicate elements count 
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
ll i,j,l,n,t,T,ans,cnt,par,ele;
char x;
s(t);
while(t--)
{
    map<string, ll> m;
    map<string, ll> :: iterator it;

    char str[40];
    scanf("%lld\n",&n);
    FOR(n)
    {
        gets(str);
        m[(string)str]++;
    }
    for(it=m.begin();it!=m.end();++it)
    {
        printf("%s %lld\n",it->first.c_str(),it->second);
    }
    printf("\n");
}

return 0;
}



