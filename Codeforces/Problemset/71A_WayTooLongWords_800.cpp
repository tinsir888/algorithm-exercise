#include<bits/stdc++.h>
using namespace std;
void work(){
	string s;
	cin>>s;
	if(s.length()>10)
		cout<<s[0]<<s.length()-2<<s[s.length()-1]<<endl;
	else cout<<s<<endl;
	return;
}
int main(){
	int n;
	cin>>n;
	while(n--){
		work();
	}
}
