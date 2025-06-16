class Solution {
public:
    string reverseWords(string s) {
        vector<string> words;
        string word = "", out = "";

        // Trim leading/trailing spaces and split by space
        for (int i = 0; i < s.length(); ++i) {
            if (s[i] != ' ') {
                word += s[i];
            } else if (!word.empty()) {
                words.push_back(word);
                word = "";
            }
        }
        if (!word.empty()) words.push_back(word);  // Add last word if exists

        // Build output from words in reverse
        for (int i = words.size() - 1; i > 0; --i) {
            out += words[i] + " ";
        }
        if (!words.empty()) out += words[0];  // Add the first word without trailing space

        return out;
    }
};
