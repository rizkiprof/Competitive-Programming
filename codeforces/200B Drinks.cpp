#include<bits/stdc++.h>
using namespace std;

int main(){
int n;
double p,output,x=0;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>p;
    x+=p;
}
printf("%.12lf",x/n);
}
