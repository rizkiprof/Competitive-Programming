#include<bits/stdc++.h>
using namespace std;

int main(){
int s,n,x[10001],y[10001],position;
cin>>s>>n;
bool OK=true;
for(int i=1;i<=n;i++){
    scanf("%d%d",&x[i],&y[i]);
}
for(int a=1;a<=n;a++){
    for(int p=1;p<=n-a;p++){
        if(x[p]>x[p+1]){
            swap(x[p],x[p+1]);
            swap(y[p],y[p+1]);
        }
    }
}
for(int i=1;i<=n;i++){
    if(s>x[i]){
        s+=y[i];
    }
    else OK=false;
}
if(OK)cout<<"YES";
else cout<<"NO";
}
