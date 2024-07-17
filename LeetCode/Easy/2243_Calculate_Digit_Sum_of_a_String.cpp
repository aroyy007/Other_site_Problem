class Solution {
public:
    int digitSumHelper(string s) {
        int sum = 0;
        for (char c : s) {
            sum += c - '0'; 
        }
        return sum;
    }

    string digitSum(string s, int k) {
        while (s.size() > k) {  
            vector<string> a;

            for (int i = 0; i < s.size(); i += k) {
                a.emplace_back(s.substr(i, k));
            }

            string newS;
            for (int i = 0; i < a.size(); i++) {
                int x = digitSumHelper(a[i]);  
                newS += to_string(x);  
            }

            s = newS;  
        }

        return s;
    }
};
