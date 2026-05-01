class Solution {
public:
    int pascalTriangleI(int r, int c) {
        int k=r-1;
        int n=c-1;

      long long result=1;
        for(int i=0;i<n;i++){
            result=result*(k-i);
            result=result/(i+1);
        }
    return result;
    }
};