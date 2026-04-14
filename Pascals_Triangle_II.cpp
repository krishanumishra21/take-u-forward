class Solution {
public:

           long long nCr(int n, int r) {
        long long res = 1;
        for(int i = 0; i < r; i++) {
            res = res * (n - i);
            res = res / (i + 1);
        }
        return res;
    }

    vector<int> pascalTriangleII(int r) {
         
                 vector<int> ans;

        for(int c = 1; c <= r; c++) {
            ans.push_back(nCr(r - 1, c - 1));
        }

        return ans;
    }
};