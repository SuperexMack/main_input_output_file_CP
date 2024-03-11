#include<bits/stdc++.h>
using namespace std;

void init_code(){
#ifndef ONLINE_JUDGE
freopen("input.txt", "r", stdin);
freopen("output.txt", "w", stdout);
#endif // ONLINE_JUDGE
}

int main(){

init_code();

int t;
cin>>t;
while(t--){

int n , m , k;

cin>>n;
cin>>m;
cin>>k;

int a[n];
int b[m];

for(int i = 0 ;i<n ; i++){
	cin>>a[i];
}

for(int i = 0; i<m ; i++){
	cin>>b[i];
}

int count = 0;

for(int  i = 0 ; i<n ; i++){
	for(int j = 0 ;j<m ; j++){
		if(a[i] + b[j] <= k){
         count++;
		}
	}
}

cout<<count<<endl;

}

}

