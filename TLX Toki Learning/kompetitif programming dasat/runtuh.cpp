#include<bits/stdc++.h>
using namespace std;

#define F(_i,_a,_b) for(_i=_a;_i<=_b;_i++)
int main(){
	char M[30][10];
	vector <int> runtuh;
	int i,j,r,c;
	cin>>r>>c;
	F(i,1,r){
		F(j,1,c){
			cin>>M[i][j];
		}
	}
	bool OK=true;
	while (OK){
		runtuh.clear();
		F(i,1,r){
			j=1;
			bool lanjut=true;
			while(j<=c){
				if(M[i][j]!='1') lanjut=false;
				j++;
			}
			if(lanjut)	runtuh.push_back(i);
		}
		if(runtuh.size==0){
			OK=false; break;
		}
		F(i,0,runtuh.size()){
			F(j,1,c){
				M[ runtuh[i] ][j]='0';
			}
		}
	}
	
	F(i,1,r){
		F(j,1,c){
			cout<<M[i][j];
		}cout<<endl;
	}
}