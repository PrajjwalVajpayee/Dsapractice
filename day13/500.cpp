class Solution {
public:
    
vector<string> findWords(vector<string>& words) 
{
    vector<string> result;
    string s_1 = "qwertyuiopQWERTYUIOP";
    string s_2 = "asdfghjklASDFGHJKL";
    string s_3 = "zxcvbnmZXCVBNM";
    int n = words.size();
    for (int i = 0; i < n; i++) {
        if (IsInRow(words[i], s_1) || IsInRow(words[i], s_2) || IsInRow(words[i], s_3)) {
            result.push_back(words[i]);
        }
    }
    return result;
}
bool IsInRow(string word,string row) {
    int n = word.size();
    for (int i = 0; i < n; i++) {
        if (row.find(word[i]) == string::npos) {
            return false;
        }
    }
    return true;
}

};