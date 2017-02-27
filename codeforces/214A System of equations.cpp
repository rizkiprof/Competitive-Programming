#include<bits/stdc++.h>
using namespace std;

int main(){
int n,m,output=0;
cin>>n>>m;
for(int i=0;i<=sqrt(n);i++){
    for(int j=0;j<=n;j++){
        if(i*i+j==n&&i+j*j==m)output++;
    }
}
cout<<output;
}
