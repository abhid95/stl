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
#define s(t) scanf("%d",&t)
#define p(t) printf("%d\n",t)
using namespace std;


int main()
{
int i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,g;
int dx,dy,x[1000],y[1000];
while(1)
{
    s(n);
    if(!n)
        break;
    FOR(n)
        scanf("%d%d",&x[i],&y[i]);
    set<pair<int,int> >s;
    for(i=0;i<n-1;i++)
    {
        for(j=i+1;j<n;j++)
        {
            dx=x[i]-x[j];
            dy=y[i]-y[j];
            if(dx<0)
            {
                dx=-dx;
                dy=-dy;
            }
            g=__gcd(dx,dy);
            dx=dx/g;
            dy=dy/g;
            s.insert(make_pair(dx,dy));
            //p(i);
        }
    }
    p((int)(s.size()));

}

return 0;
}



