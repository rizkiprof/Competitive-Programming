#include<bits/stdc++.h>
using namespace std;

int main(){
int n,h[31],a[31],i,j,x=0;
cin>>n;
for(i=1;i<=n;i++){
    cin>>h[i]>>a[i];
}
for(i=1;i<=n;i++){
    for(j=1;j<=n;j++){
        if(h[i]==a[j]) x++;
    }
}
cout<<x;
}
