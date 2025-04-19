#include <bits/stdc++.h>
using namespace std;

void faster()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    cout.tie(0);
}

string minWindow(string s1, string s2)
{
    vector<int> freq_s2(128, 0), freq_window(128, 0);
    for (char c : s2)
        freq_s2[c]++;

    int left = 0, min_len = INT_MAX, min_start = 0, count = 0;
    for (int right = 0; right < s1.size(); ++right)
    {
        char r_char = s1[right];
        freq_window[r_char]++;

        if (freq_s2[r_char] != 0 && freq_window[r_char] <= freq_s2[r_char])
            count++;

        while (count == s2.size())
        {
            if (right - left + 1 < min_len)
            {
                min_len = right - left + 1;
                min_start = left;
            }

            char l_char = s1[left];
            freq_window[l_char]--;
            if (freq_s2[l_char] != 0 && freq_window[l_char] < freq_s2[l_char])
                count--;
            left++;
        }
    }

    if (min_len == INT_MAX)
        return "-1";
    return s1.substr(min_start, min_len);
}

int main()
{
    faster();
    int t;
    cin >> t;
    while (t--)
    {
        string s1, s2;
        cin >> s1 >> s2;
        cout << minWindow(s1, s2) << endl;
    }
    return 0;
}