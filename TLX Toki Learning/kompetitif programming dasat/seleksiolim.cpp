#include<bits/stdc++.h>
using namespace std;

struct pret {
	int a,b,c;
	string name;
};

bool cmp(pret i, pret j){
	if(i.c!=j.c) return i.c>j.c;
	if(i.b!=j.b) return i.b>j.b;
	return i.a>j.a;
}	

int main(){
	
	int T,n,m,q,e,w,i,j;
	pret nilai[100];
	string id,X;
	cin>>T;
	for( j=1;j<=T;j++){
		cin>>n>>m;
		cin>>id;
		for( i=1;i<=n;i++){
			cin>>X>>q>>w>>e;
			nilai[i].name=X;
			nilai[i].a=q;
			nilai[i].b=w;
			nilai[i].c=e;
		}
		sort(nilai+1,nilai+n+1,cmp);
/*		for(int i=1;i<=n;i++){
			cout<<nilai[i].name<<" "<<nilai[i].a<<" "<<nilai[i].b<<" "<<nilai[i].c<<endl;
		}
		*/
		i=1; 
		bool lanjut=true;
		while(i<=m){
			if(nilai[i].name==id){
				cout<<"YA\n";
				 lanjut=false;
			}
			i++;
		}
		if(lanjut)
		cout<<"TIDAK\n";
	}
}