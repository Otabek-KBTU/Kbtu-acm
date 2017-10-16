#include <iostream>
#include <cmath>
using namespace std;
int main (){
	string s;
	cin>>s;
	double n=0;
	int cnt =0;
	for(int i=s.size()-1; i>=0; i--){
		if(s[i]-48==4){
			s[i]=49;
		}
		else if(s[i]-48==7){
			s[i]=50;
			
		}
		cnt+=(s[i]-48)*pow(2.0,n);
		n++;
	}
	cout<<cnt;
	
	
	
	
	return 0;
}
