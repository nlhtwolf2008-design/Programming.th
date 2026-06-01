#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    bool u = false;
    bool l = false;
    string s;
    cin >> s;

    for(int i = 0; i < s.size(); ++i){
    	if(l && u){
    		break;
    	}

    	if(!l){
    		if(tolower(s[i]) == s[i]){
    			l = true;
    		}
    	}

    	if(!u){
    		if(toupper(s[i]) == s[i]){
    			u = true;
    		}
    	}
    }

    if(u && l){
    	cout << "Mix";
    } else if(u){
    	cout << "All Capital Letter";
    } else {
    	cout << "All Small Letter";
    }

    return 0;
}