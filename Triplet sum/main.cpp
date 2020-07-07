#include <iostream>
#include <bits/stdc++.h>
using namespace std;
typedef long long int l;
#define fastIO              ios::sync_with_stdio(false), cin.tie(0)
#define pf                  push_front
#define pb                  push_back
#define popb                pop_back()
#define popf                pop_front()
#define loop(i,n)           for(int i=0;i<n;i++)
#define loop1(i,n)           for(int i=1;i<n;i++)
#define loopx(i,x,n)        for(int i=x;i<n;i++)
#define loopr(i,n)          for(int i=n-1;i>=0;i--)
#define loop1e(i,n)          for(int i=1;i<=n;i++)
#define loopxe(i,x,n)          for(int i=x;i<=n;i++)
#define F first
#define S second
#define LB lower_bound
#define UB upper_bound
#define vc vector
#define vll vector<long long>
#define pll pair<long long,long long>
#define eb emplace_back
#define pb push_back
#define mp make_pair
#define INT_BITS 32
#define  st                  l t; cin>>t;
#define  sn                  l n; cin>>n;
//#define  unordered_map<l,l>  u;
#define MOD1 1000000007
int main()
{
    fastIO;
    st;
    while(t--)
    {
      l n,k;
      cin>>n>>k;
      l a[n];
      unordered_set<l>s;
      loop(i,n)
     {
         cin>>a[i];
         s.insert(a[i]);
     }
      sort(a,a+n);
      l ans=0;
      loop(i,n-2)
      {
          l s=i+1;
          l e=n-1;
          while(s<e)
          {
              if(a[i]+a[s]+a[e]==k)
              {
                  ans=1;
                  break;
              }
              if(a[i]+a[s]+a[e]<k)
              s++;
              else
              e--;
          }
      }
      cout<<ans<<"\n";

    }
    return 0;
}
