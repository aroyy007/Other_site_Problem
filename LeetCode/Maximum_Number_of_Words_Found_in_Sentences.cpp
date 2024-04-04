class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int fMax = 0;

        for(int i = 0; i < sentences.size(); i++) {
            int wordCount = 0; 

            for(int j = 0; j < sentences[i].size(); j++) {
                if(sentences[i][j] == ' ') {
                    wordCount++; 
                }
            }
            fMax = max(fMax, wordCount);

        }
        return fMax + 1; 
    }
};
