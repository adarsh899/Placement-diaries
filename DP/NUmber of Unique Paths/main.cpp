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
#define loops(i,x,n)        for(int i=x;i<n;i++)
#define loopr(i,n)          for(int i=n-1;i>=0;i--)
#define loop1e(i,n)          for(int i=1;i<=n;i++)
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
#define all(x) x.begin(),x.end()
//#define  unordered_map<l,l>  u;
#define MOD1 1000000007
using namespace std;

int main()
{
    st;
    while(t--)
    {
        l m,n;
        cin>>m>>n;
        l a[m][n];
        loop(i,n)
        a[0][i]=1;
        loop(i,m)
        a[i][0]=1;

        loop1(i,m)
        {
            loop1(j,n)
            {
                a[i][j] = a[i-1][j] + a[i][j-1];

            }
        }
cout<<a[m-1][n-1]<<"\n";
    }
    return 0;
}
