#include <bits/stdc++.h>
using namespace std;

int main() {
    int cases;
    cin >> cases;
    while (cases--) {
        int n;
        cin >> n;
        string s;
        cin >> s;
        int arr[2] = {0};
        int count = 0; // Initialize count
        int noof1 = 0;
        int noof2 = 0;
        for (int i = 0; i < n; i++) {
            char ch = s[i];
            if (ch == '1') {
                noof1++;
                if(noof1<=2){
               		arr[count++] = i;
            	}
            } else
                noof2++;
        }

        if (noof1 % 2 == 1) {
            cout << "NO\n";
            
        }
        else{
        if (n == noof2 + 2) {
            if (arr[1] - arr[0] == 1) {
                cout << "NO\n";
                
            }
            else{
            cout << "YES\n";
            
        	}
        }
        else{
        cout << "YES\n";
        
    		}
    	}
    }
}
