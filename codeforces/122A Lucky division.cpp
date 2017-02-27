#include<bits/stdc++.h>
using namespace std;

int main(){
bool OK=true;
int i,n,x[15]={4,7,44,47,74,77,444,447,474,477,744,747,774,777,4444};
cin>>n;
i=0;
while(OK&&x[i]<=n){
    if(n%x[i]==0) OK=false;
    i++;
}
if(OK) cout<<"NO";
else cout<<"YES";
}
