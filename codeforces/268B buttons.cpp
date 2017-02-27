#include<bits/stdc++.h>
using namespace std;

int main(){
int n,x=0,i;
i=1;
cin>>n;
while(n-i>0){
    x+=(n-i)*i;
    i++;
}
printf("%d",x+n);
}
