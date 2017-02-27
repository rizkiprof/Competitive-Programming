#include<bits/stdc++.h>
using namespace std;
bool cmp(int a,int b){
    return a>b;
}
int main(){
int n,x[100000]={0};
cin>>n;
for(int i=1;i<=n;i++){
    x[i]=i;
}
if(n%2==0){
    for(int i=1;i<=n/2;i++){
        swap(x[i*2-1],x[i*2]);
    }
for(int i=1;i<=n;i++)cout<<x[i]<<" ";
}
else cout<<"-1";
}
