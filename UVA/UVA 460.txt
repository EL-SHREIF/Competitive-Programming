#include<iostream>
#include<cmath>
using namespace std;
 
 
int main()
{
	int n,x1l,y1l,x1r,y1r,x2l,y2l,x2r,y2r,xlo,ylo,xro,yro;
 
	cin>>n;
 
	for(int i=0;i<n;i++)
	{
		cin>>x1l>>y1l>>x1r>>y1r>>x2l>>y2l>>x2r>>y2r;
 
	xlo=max(x1l,x2l);
	ylo=max(y1l,y2l);
	xro=min(x2r,x1r);
	yro=min(y2r,y1r);
	if(i>0)
   cout<<"\n";
 
 
	if(xlo<xro&&ylo<yro)
		cout<<xlo<<" "<<ylo<<" "<<xro<<" "<<yro<<endl;
	else 
		cout<<"No Overlap\n";
 
	}
	return 0 ;
}