#include<bits/stdc++.h>
using namespace std;

int main(){
	int n,i,j,x,k;
	cin>>x;
	x=abs(x);
	for(i=0;i<=1000000;i++){
		if(i*(i+1) >= 2*x )
			if( ( (i*(i+1)/2) - x) %2 == 0 )
			{
				cout<<i<<endl;
				return 0;
			}
	}
}