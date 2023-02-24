#include <bits/stdc++.h>
using namespace std;

int a[1000005];
int main(){
	int n, s;
	cin >> n >> s;
	for(int i =0; i<n; ++i) cin >> a[i];
	int l = 0, r = 0;
	int sum = 0;
	int count = 0;
	while(l <= r && l<n){
		sum+=a[r];
		if(sum <= s && r < n){
			++count;
			++r; 
		}
		else {
			sum = 0; 
			l++;
			r = l;
		}
	}
	cout << count;
	return 0;
}