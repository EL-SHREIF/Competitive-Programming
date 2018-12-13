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

//ofstream cout;
//cout.open("out.txt");
#define MAX 2003
int n,s;
int values[MAX];
int place[MAX];
int arr[MAX][MAX];
int dp(int rem , int idx)
{
   if(arr[idx][rem]!=-1)
   {
       return arr[idx][rem];
   }
   else
   {
       if(idx==n)
           return 0;
       int x1=dp(rem,idx+1);
       int x2=0;
       if(rem-place[idx]>=0){
           x2=dp(rem-place[idx],idx+1)+values[idx];
       }
       arr[idx][rem]=max(x1,x2);
       return max(x1,x2);
   }
}

int main() {
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin>>s>>n;
    lp(i,n)
    {
        cin>>place[i]>>values[i];
    }
    clr(arr,(-1));
    int maxo=dp(s,0);
    cout<<maxo<<endl;
    return  0 ;
}

