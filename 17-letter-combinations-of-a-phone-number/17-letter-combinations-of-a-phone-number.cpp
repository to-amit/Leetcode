class Solution {
public:
    void check(int idx,string digits,string temp,vector<string> &ans,vector<string>& dict){
        if(idx==digits.size()){ //possible answer
            ans.push_back(temp);
            return;
        }     
        string curr_string=dict[digits[idx]-'0'];  
        for(int i=0;i<curr_string.size();i++){       
            temp+=curr_string[i];
            check(idx+1,digits,temp,ans,dict);  
            temp.pop_back(); 
        }
    }
    vector<string> letterCombinations(string digits) {
        if(digits.size()==0) return {};
        vector<string> dict={"","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"}; 
        vector<string> ans; 
        string temp;
        int idx=0;  
        check(idx,digits,temp,ans,dict); //Time complexity o(n*4^n)
        return ans;
        
    }
};