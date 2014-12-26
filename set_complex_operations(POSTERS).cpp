//zobayer's idea
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
#define pii pair<int,int>
#define piii pair<pii,int>
#define ff first.first
#define ss first.second
using namespace std;
class comp{
    public:
        inline bool operator() (const piii &a,const piii &b){
            return a.ff<b.ff && a.ss<b.ss;
        }
};
inline bool inside(const piii &a,int x){
    return a.ff<=x && x<=a.ss;
}
set<piii,comp> s;
set<piii,comp> :: iterator st,en;
piii stp,enp;
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele,lt,rt,sum;
bool vis[100005];
char x;
s(t);
while(t--)
{
    s(n);
    s.clear();
    s.insert(piii(pii(0,0),0));
    s.insert(piii(pii(MAX,MAX),0));
    for(i=1;i<=n;i++)
    {
        s(lt);
        s(rt);
        stp=*(st=s.lower_bound(piii(pii(lt,lt),i)));
        enp=*(en=s.lower_bound(piii(pii(rt,rt),i)));
        s.erase(st,++en);
        if(inside(stp,lt))
        {
            if(stp.ff<lt)
            {
                s.insert(piii(pii(stp.ff,lt-1),stp.second));
            }
        }
        else if(stp.ff>rt)
            s.insert(stp);
        if(inside(enp,rt))
        {
            if(enp.ss>=rt+1)
            {
                s.insert(piii(pii(rt+1,enp.ss),enp.second));
            }
        }
        else
            s.insert(enp);
        s.insert(piii(pii(lt,rt),i));
    }
    memset(vis,false,sizeof vis);
    sum=0;
    for(st=s.begin();st!=s.end();++st)
    {
        if(st->second)
        {
            sum+=!vis[st->second];
            vis[st->second]=true;
        }
    }
    p(sum);
}

return 0;
}



