#include<bits/stdc++.h>
using namespace std;

int main(){
int n,giveto[101],getfrom[101];
cin>>n;
for(int i=1;i<=n;i++){
    cin>>giveto[i]; getfrom[giveto[i]]=i;
}
for(int i=1;i<=n;i++){
    cout<<getfrom[i]<<" ";
}
}
