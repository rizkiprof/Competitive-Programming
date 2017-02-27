#include<bits/stdc++.h>
using namespace std;

int main(){
int n,a,b,position;
cin>>n>>a>>b;
position=n-a;
if(b<position)position=b+1;
printf("%d",position);
}
