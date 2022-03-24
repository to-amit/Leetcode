class Solution {
public:
    void permutation(int i,string s,string out,  vector<string>&output)
{
    if(i==s.length())
    {
        output.push_back(out);
        return;
    }
    
    if(isalpha(s[i]))
    {
        string op1 = out;
        string op2 =out;
            
            op1.push_back(tolower(s[i]));
            op2.push_back(toupper(s[i]));
            
        
        permutation(i+1,s,op1,output);
        permutation(i+1,s,op2,output);
    }
    else{
        string op1=out;
        op1.push_back(s[i]);
        permutation(i+1,s,op1,output);
    }
}



vector<string> letterCasePermutation(string s) {
    vector<string>output;
    string out="";
     permutation(0,s,out,output);
    return output;
}
};