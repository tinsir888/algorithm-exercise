#include<bits/stdc++.h>
using namespace std;
const int maxn=2e5+5;
typedef long long ll;
ll a[2][maxn],b[2][maxn];
ll c[2][maxn],dc[2][maxn];//,sumc[2][maxn];
ll n,cnt1=0,cnt2=0,res=0;

int main(){
	scanf("%d",&n);
	for(int i=0;i<2;i++)
		for(int j=1;j<=n;j++){
			int tmp;
			scanf("%d",&tmp);
			a[i][j]=tmp;
			cnt1+=tmp;
		}
	for(int i=0;i<2;i++)
		for(int j=1;j<=n;j++){
			int tmp;
			scanf("%d",&tmp);
			b[i][j]=tmp;
			dc[i][j]=a[i][j]-b[i][j];
			cnt2+=tmp;
		}
	if(cnt1!=cnt2){
		puts("-1");
		return 0;
	}
/*
	cout<<"array c:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=1;j<=n;j++){
			cout<<(c[i][j])<<" ";
		}
		cout<<endl;
	}
*/
	for(int i=1;i<=n;i++){
		int sign0=0,sign1=0;
		c[1][i]=dc[1][i]+c[1][i-1];
		c[0][i]=dc[0][i]+c[0][i-1];
		if((c[0][i]<0&&c[1][i]>0)||(c[0][i]>0&&c[1][i]<0)){
			sign0=c[0][i]/abs(c[0][i]);
			sign1=-sign0;
			res++;
		}
		c[0][i]+=sign1;
		c[1][i]+=sign0;
	}
	/*
	cout<<"array c:"<<endl;
	for(int i=0;i<2;i++){
		for(int j=1;j<=n;j++){
			cout<<(c[i][j])<<" ";
		}
		cout<<endl;
	}
	*/
	for(int i=1;i<=n;i++){
		res+=abs(c[1][i]);
		res+=abs(c[0][i]);
	}
	
	cout<<res<<endl;
	return 0;
}
/*
6
1 0 0 0 0 1
1 0 1 0 0 1
1 1 0 0 1 0
0 1 0 0 0 1
*/
