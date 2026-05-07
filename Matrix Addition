#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    long long n,m;
    cin >> n >> m;
    vector<vector<long long>> v(n,vector<long long> (m));

    for(int i = 0; i < n; ++i){
    	for(int j = 0; j < m; ++j){
    		cin >> v[i][j];
    	}
    }

    long long t;

    for(int i = 0; i < n; ++i){
    	for(int j = 0; j < m; ++j){
    		cin >> t;
    		v[i][j] += t;
    		cout << v[i][j] << " ";
    	}
    	cout << "\n";
    }

    return 0;
}