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
bool is_win(string s)
{
    if(s[0]!='.'&&s[0]==s[1]&&s[1]==s[2])
        return true;
    else if(s[3]!='.'&&s[3]==s[4]&&s[4]==s[5])
        return true;
    else if(s[6]!='.'&&s[6]==s[7]&&s[7]==s[8])
        return true;
    else if(s[0]!='.'&&s[0]==s[3]&&s[3]==s[6])
        return true;
    else if(s[1]!='.'&&s[1]==s[4]&&s[4]==s[7])
        return true;
    else if(s[2]!='.'&&s[2]==s[5]&&s[5]==s[8])
        return true;
    else if(s[0]!='.'&&s[4]==s[0]&&s[4]==s[8])
        return true;
    else if(s[2]!='.'&&s[2]==s[4]&&s[4]==s[6])
        return true;
    return false;
}
 
int main()
{
   int n;
   cin>>n;
   while(n--)
   {
       string start=".........";
       string soln="";
       lp(i,3)
       {
           string s;
           cin>>s;
           soln=soln+s;
       }
       string cur=start;
       queue<pair <string, bool > > q;
       q.push(make_pair(cur,1));
       bool ok=true;
       bool player =1;
       while(!q.empty()&&ok)
       {
           pair<string , bool > p =q.front();
           q.pop();
           cur=p.first;
           player =p.second;
           if(cur==soln)
           {
               cout<<"yes"<<endl;
               ok=false;
           }
           else if(is_win(cur))
                continue;
           else{
            for(int i=0;i<9;i++)
            {
                if(cur[i]=='.'){
                char c=player?'X':'O';
                cur[i]=c;
                if(cur[i]==soln[i])
                {
                    q.push(make_pair(cur,!player));
                }
                cur[i]='.';
            }
            }
           }
       }
       if(ok){
       cout<<"no"<<endl;
   }
   }
}
 
