#include <bits/stdc++.h>
#include <sstream>
using namespace std;
 
#define all(v)              ((v).begin()), ((v).end())
#define sz(v)               ((int)((v).size()))
#define clr(v, d)           memset(v, d, sizeof(v))
#define rep(i, v)       for(int i=0;i<sz(v);++i)
#define lp(i, n)        for(int i=0;i<(int)(n);++i)
#define lpi(i, j, n)    for(int i=(j);i<(int)(n);++i)
#define lpd(i, j, n)    for(int i=(j);i>=(int)(n);--i)
 
typedef unsigned short	  us;
typedef long long         ll;
const ll OO = 1e8;
 
const double EPS = (1e-7);
int dcmp(double x, double y) { return fabs(x - y) <= EPS ? 0 : x < y ? -1 : 1; }
 
#define pb                  push_back
#define MP                  make_pair
#define P(x)                cout<<#x<<" = { "<<x<<" }\n"
typedef long double       ld;
typedef vector<unsigned short>		    vus;
typedef vector<int>						vi;
typedef vector<double>					vd;
typedef vector< vi >					vvi;
typedef vector< vus >					vvus;
typedef vector< vd >					vvd;
typedef vector<string>					vs;
typedef vector<vs>					vvs;
typedef vector<unsigned long long int > vvv;
unsigned long long int sum_range1(int S, int E, vi & cum_sum) {
  if (S == 0)
    return cum_sum[E];
 
  return cum_sum[E] - cum_sum[S - 1];
}
 
int main()
{
    int n,m;
    cin>>n;
    vi v;
    lp(i,n)
    {
        cin>>m;
        v.pb(m);
    }
    vi sum;
     for (int i = 0; i < (int) v.size(); i++)
            {
               if(i==0)
               {
                   sum.pb(v[0]);
               }
               else{
               sum.pb(v[i]+sum[i-1]);
            }
    }
    cin>>m;
    lp(i,m)
    {
        int a,b;
        cin>>a>>b;
        unsigned long long int c = sum_range1(a,b,sum);
        cout<<c<<endl;
    }
}