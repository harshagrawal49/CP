#include <iostream>
#include <vector>
#include <string>

using namespace std;

void permutations(string s, int idx, int n, string ans) {
    static vector<string> per;

    if (idx==n) {
        cout << ans << " ";
        return; // Return after printing the permutation
    }

    // Including
    ans.push_back(s[idx]);
    permutations(s, idx+1, n , ans);

    ans.pop_back();
    char temp=s[idx];
    s[idx]='\0';
  
    permutations(s, idx+1, n , ans);
    s[idx]=temp;
}

void printSubsequences(string s, string current, int index) {
    // Base case: when all characters are processed
    if (index == s.length()) {
        cout << current << " "; // Print the current subsequence
        return;
    }

    // Include the current character
    printSubsequences(s, current + s[index], index + 1);
    char temp=s[index];
    s[index]='\0';


    // Exclude the current character
    printSubsequences(s, current, index + 1);
    s[index]=temp;
}

int main() {
    string s;
    cin >> s;
    // To print all the permutations of the string
    permutations(s,0, s.length(), "");
    cout<<"\n\n\n\n";
    printSubsequences(s,"",0);
    cout << "\n"; // Add a newline after all permutations are printed
    return 0;
}
