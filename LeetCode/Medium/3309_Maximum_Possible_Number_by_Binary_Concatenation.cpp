class Solution {
public:
    int maxGoodNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end(), [](int a, int b) {
            string ba = bitset<32>(a).to_string();
            string bb = bitset<32>(b).to_string();

            ba = ba.substr(ba.find('1') != string::npos ? ba.find('1')
                                                        : ba.size());
            bb = bb.substr(bb.find('1') != string::npos ? bb.find('1')
                                                        : bb.size());

            return (ba + bb) > (bb + ba);
        });

        string comb = "";

        for (int n : nums) {
            string bin = bitset<32>(n).to_string();
            comb += bin.substr(bin.find('1') != string::npos ? bin.find('1')
                                                             : bin.size());
        }

        if (comb.empty())
            return 0;

        long long ans = stoll(comb, nullptr, 2);

        return static_cast<int>(ans);
    }
};
