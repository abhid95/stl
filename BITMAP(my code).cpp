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
#define pii pair<ll,ll>
#define piii pair<pii,ll>
#define ff first.first
#define ss first.second
using namespace std;
ll a[200][200],mat[200][200];
queue<piii> q;
int main()
{
ll i,j,l,n,m,t,T,f,p,ans,cnt,par,ele;
char x,s[200];
s(t);
while(t--)
{
    s(n);
    s(m);
    FOR(n){
        scanf("%s",s);
        rep(j,m){
            a[i][j]=s[j]-'0';
            if(a[i][j]){
                q.push(piii(pii(i,j),0));
            }
        }
    }
    while(!q.empty())
    {
        i=q.front().ff;
        j=q.front().ss;
        mat[i][j]=q.front().second;
        q.pop();
        if(i+1<n && a[i+1][j]!=1) q.push(piii(pii(i+1,j),mat[i][j]+1)),a[i+1][j]=1;
        if(j+1<m && a[i][j+1]!=1) q.push(piii(pii(i,j+1),mat[i][j]+1)),a[i][j+1]=1;
        if(i-1>=0 && a[i-1][j]!=1) q.push(piii(pii(i-1,j),mat[i][j]+1)),a[i-1][j]=1;
        if(j-1>=0 && a[i][j-1]!=1) q.push(piii(pii(i,j-1),mat[i][j]+1)),a[i][j-1]=1;
    }
    FOR(n){
        rep(j,m)
            printf("%lld ",mat[i][j]);
        printf("\n");
        }



}

return 0;
}



