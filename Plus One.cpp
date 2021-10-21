//question link: https://leetcode.com/problems/plus-one/
//Please consider this under hacktober fest tag




class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        vector<int> ans;
        int k=1;
       int i=digits.size()-1;
       while(i>=0 || k>0){
           
           if(i>=0){
            ans.push_back((digits[i]+k)%10);
            k=(digits[i]+k)/10;
           }
           
           else{
                ans.push_back(k%10);
            k=k/10;
           }
           i--;
        }

        
        reverse(ans.begin(), ans.end());
        return ans;
    }
};
