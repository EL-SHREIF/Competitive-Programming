#include <iostream>
#include <math.h>
#include <cmath>
#include <algorithm>
 
using namespace std;
 
int gcd(int x,int y){
  if(y==0)
    return x;
  return gcd(y,x%y);	
}
 
int main(){
 
	int n;
	cin>>n;
 
	while(n){
 
		int i,a[n],c=0;
 
		for(i=0;i<n && cin>>a[i];i++);
 
		for(i=0;i<n;i++){
		  for(int j=i+1;j<n;j++){
		    if(gcd(max(a[i],a[j]),min(a[i],a[j]))==1) 
			    c++; 	
		  }
	   }
 
	   if(!c)
	     cout<<"No estimate for this data set.\n";
	   else 
	   	 printf("%0.6f\n",sqrt(6.000000*(n*(n-1)/2)/c));
 
 
		cin>>n;
	}
 
	return 0;
}