class Solution {
public:
    vector<vector<int>> findWinners(vector<vector<int>>& matches) {
        unordered_map<int, int> playerLosses;
        unordered_set<int> allPlayers;

        for (const auto& match : matches) {
            int winner = match[0];
            int loser = match[1];
            allPlayers.insert(winner);
            allPlayers.insert(loser);
            playerLosses[loser]++;
        }

        vector<int> noLosses;
        vector<int> oneLoss;

        for (int player : allPlayers) {
            if (playerLosses.find(player) == playerLosses.end()) {
                noLosses.push_back(player);
            } else if (playerLosses[player] == 1) {
                oneLoss.push_back(player);
            }
        }

        sort(noLosses.begin(), noLosses.end());
        sort(oneLoss.begin(), oneLoss.end());

        return {noLosses, oneLoss};
    }
};
