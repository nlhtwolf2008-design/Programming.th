#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    long long mi = INT_MAX,mx = INT_MIN;
    cin >> n;

    for(int i = 0; i < n; ++i){
    	long long m;
    	cin >> m;
    	if(m > mx) mx = m;
    	if(m < mi) mi = m;
    }
    cout << mi << "\n" << mx;

    return 0;
}