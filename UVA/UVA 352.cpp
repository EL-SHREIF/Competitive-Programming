#include <cmath>
#include <map>
#include<fstream>
#include<algorithm>
#include <iostream>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include <iomanip>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include <cassert>
#include <stack>
#include <ctime>
#include <queue>
#include <vector>
#include <iterator>
#include <math.h>
#include<cstring>
#include <cmath>
#include <sstream>
#include<cstring>
#include <complex>
#include<cstdlib>
#include <set>
#include <cstdio>
#include<map>
#include <cmath>
#include <map>
#include<fstream>
#include<algorithm>
#include <iostream>
#include<numeric>
#include<utility>
#include<functional>
#include<stdio.h>
#include <iomanip>
#include<assert.h>
#include<memory.h>
#include<bitset>
#include<algorithm>
#include <cassert>
#include <stack>
#include<cstring>
#include <cmath>
#include <complex>
#include <sstream>
#include<cstring>
#include <complex>
#include<cstdlib>
#include <set>
#include <ctime>
#include <queue>
#include <vector>
#include <iterator>
#include <math.h>
#include <cstdio>
#include<map>
using namespace std;
#define ll long long
#include <vector>
#include <iostream>
using namespace std;
#define all(v)              ((v).begin()), ((v).end())
#define sz(v)               ((int)((v).size()))
#define clr(v, d)           memset(v, d, sizeof(v))
#define REP(i, v)       for(int i=0;i<sz(v);i++)
#define fast std::ios_base::sync_with_stdio(false);
using namespace std;
 
char grid[30][30];
bool seen[30][30];
int n;
 
bool valid(int i,int j)
{
	return i >= 0 && j >= 0 && i < n && j < n;
}
 
int dx[8] = {0,0,1,-1,1,-1,1,-1};
int dy[8] = {1,-1,0,0,1,-1,-1,1};
void dfs(int i,int j)
{
	if(seen[i][j])
		return;
	seen[i][j] = 1;
	for(int k = 0 ; k < 8 ; ++k)
	{
		int xc = dx[k] + i;
		int yc = dy[k] + j;
		if(valid(xc,yc) && !seen[xc][yc] && grid[xc][yc] == '1')
			dfs(xc,yc);
	}
}
int main()
{
	int tc = 1;
	while(scanf("%d",&n) != EOF)
	{
		for(int i = 0 ; i < n ; ++i)
		{
			scanf("%s",grid[i]);
		}
		memset(seen,0,sizeof(seen));
		int ans = 0;
		for(int i = 0 ; i < n ; ++i)
		{
			for(int j = 0 ; j < n ; ++j)
			{
				if(!seen[i][j] && grid[i][j] == '1')
				{
					dfs(i,j);
					++ans;
				}
			}
		}
		printf("Image number %d contains %d war eagles.\n",tc++,ans);
	}
}
 