class Solution {
public:
    string minWindow(string s, string t) {

        if(t.length() > s.length())
            return "";

        vector<int> freq(128, 0);
        vector<int> window(128, 0);

        int required = 0;

        for(char ch : t) {
            if(freq[ch] == 0)
                required++;

            freq[ch]++;
        }

        int have = 0;
        int left = 0;

        int minLength = INT_MAX;
        int start = 0;

        for(int right = 0; right < s.length(); right++) {

            char ch = s[right];
            window[ch]++;

            if(freq[ch] > 0 && window[ch] == freq[ch]) {
                have++;
            }

            while(have == required) {

                if(right - left + 1 < minLength) {
                    minLength = right - left + 1;
                    start = left;
                }

                char leftChar = s[left];
                window[leftChar]--;

                if(freq[leftChar] > 0 &&
                   window[leftChar] < freq[leftChar]) {
                    have--;
                }

                left++;
            }
        }

        if(minLength == INT_MAX)
            return "";

        return s.substr(start, minLength);
    }
};