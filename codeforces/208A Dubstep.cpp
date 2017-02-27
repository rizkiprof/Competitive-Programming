#include<bits/stdc++.h>
using namespace std;

int main(){
int i,a=0,b=0;
string s;
cin>>s;
for(i=0;i<s.length();i++){
    if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&a==0){
        i+=2; b++;
    }
    else if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&a>0&&b==0){
        i+=2; b++; printf(" ");
    }
    else if(s[i]=='W'&&s[i+1]=='U'&&s[i+2]=='B'&&a>0&&b>0){
        i+=2; b++;
    }
    else {
        b=0; printf("%c",s[i]); a++;
    }
}
}
