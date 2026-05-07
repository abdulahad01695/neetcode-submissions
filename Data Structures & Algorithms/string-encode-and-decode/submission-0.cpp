#include <bits/stdc++.h>
using namespace std;

class Solution {
public:
    // Encode
    string encode(vector<string>& strs) {
        string result = "";
        for (string s : strs) {
            result += to_string(s.length());
            result += "#";
            result += s;
        }
        return result;
    }

    // Decode
    vector<string> decode(string s) {
        vector<string> result;
        int i = 0;

        while (i < s.size()) {
            int j = i;
            while (s[j] != '#') {
                j++;
            }

            int len = stoi(s.substr(i, j - i));
            string word = s.substr(j + 1, len);
            result.push_back(word);

            i = j + 1 + len;
        }
        return result;
    }
};