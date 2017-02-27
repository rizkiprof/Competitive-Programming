#include<bits/stdc++.h>
using namespace std;

int main(){
long long int n,sum,m,t[20001]={0},maks=-200000000;
cin>>n;
for(int i=0;i<n;i++){
    cin>>t[i];
}
for(int i=1;i<=n/3;i++){
    if(n%i==0){
        m=0;
        while(m<i){
            sum=0;
            for(int j=0;j<n/i;j++){
                sum+=t[j*i+m];
            }
            if(sum>maks) maks=sum;
            m++;
        }
    }
}
cout<<maks;
}
