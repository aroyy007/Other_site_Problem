class Solution {
public:
    int minimumSum(int num) {
        vector <int> v;
        while(num){
            v.push_back(num%10);
            num=num/10;
        }

        sort(v.begin(),v.end());

        int num1=v[0]*10+v[2],num2=v[1]*10+v[3];
        
        return num1+num2;
    }
};
