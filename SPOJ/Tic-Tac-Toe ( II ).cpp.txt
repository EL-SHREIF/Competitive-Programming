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
bool is_win (string str) {
	bool is_full = true;
	for (int i=0;i<str.size();i++) {
		if (str[i] == '.') {
			is_full = false;
			break;
		}
	}
	if (is_full) {
		return true;
	}
 
	if (str[0] != '.' && str[0] == str[4] && str[4] == str[8]) {
		return true;
	} else if (str[2] != '.' && str[2] == str[4] && str[4] == str[6]) {
		return true;
	} else {
		for (int i=0;i<3;i++) {
			if (str[i*3 + 0] != '.' && str[i*3 + 0] == str[i*3 + 1] && str[i*3 + 1] == str[i*3 + 2]) {
				return true;
			}
		}
		for (int i=0;i<3;i++) {
			if (str[0*3 + i] != '.' && str[0*3 + i] == str[1*3 + i] && str[1*3 + i] == str[2*3 + i]) {
				return true;
			}
		}
	}
	return false;
}
 
int main()
{
   string soln="";
   while(cin>>soln)
   {
       int w=0;
       string start=".........";
       if(soln=="end")
       {
           return 0;
       }
       if(soln.length()<9)
       {
           printf ("invalid\n");
           continue;
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
               if(is_win(cur)){
               printf ("valid\n");
               ok=false;
               }
               else{
                      printf ("invalid\n");
                      ok=false;
                    }
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
       printf ("invalid\n");
   }
   }
}