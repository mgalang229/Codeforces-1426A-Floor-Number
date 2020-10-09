#include <bits/stdc++.h>
using namespace std;

#define ll long long

int main() {
	ios::sync_with_stdio(0);
	cin.tie(0);
	
	int t;
	cin >> t;
	while(t--) {
		int n, x;
		cin >> n >> x;
		int cnt=0, fl=0;
		while(fl<n) {
			if(cnt==0)
				fl+=2;
			else
				fl+=x;
			cnt++;
		}
		cout << cnt << "\n";
	}
}
