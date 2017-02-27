#include<bits/stdc++.h>
using namespace std;

int main(){
int t,a,i,k,j;
bool OK;
cin>>t;
for(i=1;i<=t;i++){
OK=false;
    cin>>a;
    k=0;
    j=3;
    if(a>=60){
        while(k<=a){
            if(360%j==0)k=180-(360/j);
            if(k==a) {OK=true;break;}
            j++;
        }
    }
if(OK)cout<<"YES"<<endl;
else cout<<"NO"<<endl;
}
}
