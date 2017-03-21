#include<bits/stdc++.h>
using namespace std;
#define ll                  long long
#define ld                  long double
#define rep(i,n)            for(ll i=0;i<n;i++)
#define hell                1000000007LL
#define vi                  vector<ll>
#define vii                 vector< vi >
#define pb                  push_back
#define mp                  make_pair
#define fi                  first
#define se                  second
#define pii                 pair<ll,ll>
#define all(c)              c.begin(),c.end()
#define sz(c)               c.size()
ll gcd(ll a, ll b) { return b == 0 ? a : gcd(b, a % b); }
ll lcm(ll a, ll b) { return a * (b / gcd(a, b)); }
ll power(ll x, ll y,ll p)
{
    ll res=1;
    x=x%p;
    while(y>0)
    {
        if(y&1)
            res=((res%p)*(x%p))%p;
        y=y>>1;
        x=((x%p)*(x%p))%p;
    }
    return res;
}
bool isprime(ll n)
{
    if(n<2) return false;
    else if(n==2) return true;
    else if(n%2==0) return false;
    else
    {
        ll z=sqrt(n);
        rep(i,z-1) if(n%(i+2)==0) return false;
        return true;
    }
}
int main()
{
    //freopen("input.txt","r",stdin);
    //freopen("output.txt","w",stdout);
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
    ll n=1000000;
    vi sieve(n+1,1);
    sieve[0]=0;
    sieve[1]=0;
    vi ans(n+1,0);
    for(ll i=2;i<=n;i++)
    {
        if(sieve[i]==1)
        {
            for(ll j=i;j<=n;j+=i)
            {
                sieve[j]=0;
                ans[j]++;
            }
        }
    }
    ll k=4;
    for(ll i=2;i<=n-k+1;i++)
    {
        if(ans[i]==k && ans[i+1]==k && ans[i+2]==k && ans[i+3]==k)
        {
            cout<<i;
            break;
        }
    }
    return 0;
}
