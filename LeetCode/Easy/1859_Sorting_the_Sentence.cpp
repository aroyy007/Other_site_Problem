class Solution {
public:
    unordered_map<int,string> a;
    string sortSentence(string s) {
        int begin = 0;
        int count = 0;
        string result;
        int i;
        for (i = 0; i < s.size(); i++) {
            if (s[i] == ' ') {
                int num = s[i - 1] - '0';
                a[num] = s.substr(begin, i - begin - 1);
                begin = i + 1;
                count++;
            }
        }
        int num = s[i - 1] - '0';
        a[num] = s.substr(begin, i - begin - 1);
        begin = i + 1;
        count++;
        for (int i = 1; i <= count + 2; i++) {
            result += a[i];
            result += " ";
        }
        result = result.substr(0, result.size() - 3);
        return result;
    }
};
