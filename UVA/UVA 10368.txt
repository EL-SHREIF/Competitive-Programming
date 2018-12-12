#include <iostream>
#include <algorithm>
using namespace std;
 
 
#define ul unsigned long
 
int play(ul a,ul b){
	if(!b)
		return 0;
	if(a/b > 1)
		return 1;
	return play(b,a-b)+1;
}
 
int main() {
	ul a,b;
	while(cin >> a >> b ){
		if(!a && !b)
			break;
		if(a < b)
			swap(a,b);
		const int numTurns = play(a,b);
		if(numTurns&1)
			cout << "Stan wins" <<endl;
		else
			cout << "Ollie wins"<<endl;
	}
	return 0;
}