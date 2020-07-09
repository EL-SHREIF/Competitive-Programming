#include<bits/stdc++.h>
using namespace std;
int n;
char grid[100][101];
bool vis[100][100];
void dfs(int i,int j){
	if(i<0||j<0||i==n||j==n)return;
	if(grid[i][j]=='.'||vis[i][j])return;
	vis[i][j]=1;
	dfs(i-1,j);
	dfs(i+1,j);
	dfs(i,j-1);
	dfs(i,j+1);
}
int main(){
	int t,ans;
	scanf("%d",&t);
	for(int T=1;T<=t;T++){
		ans=0;
		memset(vis,0,sizeof vis);
		scanf("%d",&n);
		for(int i=0;i<n;i++){
			scanf("\n");
			for(int j=0;j<n;j++)
				scanf("%c",&grid[i][j]);
		}
		for(int i=0;i<n;i++)
			for(int j=0;j<n;j++)
				if(!vis[i][j]&&grid[i][j]=='x'){
					ans++;
					dfs(i,j);
				}
		printf("Case %d: %d\n",T,ans);
	}
}