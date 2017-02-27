#include<bits/stdc++.h>
using namespace std;

// R23C55 --> BC23
string type1(string s){
	string a="";
	int c=0,i,x=26;
	for(int i=s.find('R')+1;i<s.find('C');i++){
		a+=char(s[i]);
	}
	for(int i=s.find('C')+1;i<s.length();i++){
		c=c*10+s[i]-48;
	}
	while(c>0){
		a=char(((c-1)%x)+65)+a;
		if(c%x==0)c--;
		c=c/x;
	}
	return a;
}
// BC23 -> R23C55
string type2(string s){
	string a="",x="";
	int c=0,i;
	for(i=0;i<s.find_first_of("1234567890");i++){
		c=c*26+s[i]-64;
	}
	for(i=s.find_first_of("1234567890");i<s.length();i++){
		a+=s[i];
	}
	a="R"+a+"C";
	while(c>0){
		x=char(((c-1)%10)+49)+x;
		c=c/10;
	}
	while(x.find(":")!=-1){
		x[x.find(":")]='0';
	}
	a+=x;
	return a;
}
void cek(string s){
	int i,x=9,type=0;
	for(i=0;i<s.length();i++){
		if(x!=0&&s[i]<60){
			x=0;
			type++;
		}
		else if(x!=1&&s[i]>60){
			x=1;
			type++;
		}
	}
	if(type==4)cout<<type1(s)<<endl;
	else if(type==2)cout<<type2(s)<<endl;
}

int main(){
int n,change=0;
string s,output;
cin>>n;
for(int i=1;i<=n;i++){
    cin>>s;
    cek(s);
}
}
