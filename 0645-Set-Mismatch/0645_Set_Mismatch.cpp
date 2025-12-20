class Solution {
public:
    vector<int> findErrorNums(vector<int>& nums) {
        int n = nums.size() ;
        vector<int> fre(n+1, 0);
        int mis = 0 , dup = 0 ;
        for(int x: nums){
            fre[x]++ ;
        }
        for(int i=1; i<=n; i++){
            if(fre[i]==2){
                dup = i ;
            }
            else if(fre[i]==0){
                mis = i ;
            }
        }
        return {dup,mis};
    }
};