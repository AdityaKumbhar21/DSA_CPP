#include<bits/stdc++.h>
using namespace std;

int longestps(string &s) {
    if (s.size() < 2) return 0; // Handle edge case for small strings

    vector<string> pf(s.size() - 1, "");
    vector<string> sf(s.size() - 1, "");
    string prefix, suffix;
    int ans = 0;

    // Build the prefix array
    for (int i = 0; i < s.size() - 1; i++) {
        prefix += s[i];
        pf[i] = prefix;
    }

    // Build the suffix array
    for (int i = s.size() - 1, j = 0; i >= 1; i--, j++) {
        suffix = s[i] + suffix;
        sf[j] = suffix;
    }

    // Debug print the prefix and suffix arrays
    for (const auto &p : pf) cout << p << " ";
    cout << endl;
    for (const auto &s : sf) cout << s << " ";
    cout << endl;

    // Compare prefix and suffix to find the longest common prefix and suffix
    for (int i = 0; i < pf.size(); i++) {
        if (pf[i] == sf[i]) {
            ans = max(ans, (int)pf[i].size());
        }
    }

    return ans;
}


int main()
{
    string s = "ABCDEABCD";
    cout<<longestps(s);
 return 0;
}