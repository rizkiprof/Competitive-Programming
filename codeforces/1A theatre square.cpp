#include<iostream>
using namespace std;

int main(){
long long int n,m,a,b,c;
cin>>n>>m>>a;
b=n/a; if(n % a > 0) b++;
c=m/a; if(m % a > 0) c++;
cout<<b*c<<endl;
}
