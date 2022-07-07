#include<bits/stdc++.h>
using namespace std;
int a[51];
int main(){
	int n,k,pos0,res=0;
	bool flag=1;
	cin>>n>>k;
	pos0=100;
	for(int i=1;i<=n;i++){
		cin>>a[i];
		if(!a[i]){
			pos0=i;
			for(int j=i+1;j<=n;j++)cin>>a[i];
			break;
		}
	}
	if(k<pos0){
		for(int i=1;i<=n;i++)
			if(a[i]>=a[k])res++;
		cout<<res<<endl;
		return 0;
	}
	else cout<<pos0-1<<endl;
}
