#include<iostream>
#include<string.h>
#include<cstring>
using namespace std;

int main(){
int hasil;
char a[100],b[100],x[100];
cin>>a;
cin>>b;
hasil=strcmp(strupr(a),strupr(b));
cout<<hasil;
}
