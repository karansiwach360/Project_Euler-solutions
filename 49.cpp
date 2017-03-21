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
ll power(ll x,ll y,ll p)
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
    vi primes;
    for(ll i=1111;i<=9999;i++) if(isprime(i)) primes.pb(i);
    for(ll i=1111;i<=9999;i++)
    {
        if(i+6660<=9999)
        {
            if(isprime(i) && isprime(i+3330) && isprime(i+6660))
            {
                vi s1,s2,s3;
                ll n=i;
                while(n>0)
                {
                    s1.pb(n%10);
                    n/=10;
                }
                n=i+3330;
                while(n>0)
                {
                    s2.pb(n%10);
                    n/=10;
                }
                n=i+6660;
                while(n>0)
                {
                    s3.pb(n%10);
                    n/=10;
                }
                sort(all(s1));
                sort(all(s2));
                sort(all(s3));
                if(s1==s2 && s2==s3)
                {
                    cout<<i<<i+3330<<i+6660<<endl;
                }
            }
        }
        else break;
    }
    return 0;
}
