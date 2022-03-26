class Solution {
public:
    string decodeString(string s) {
        
        stack<string> chars;
        stack<int> nums;
        string res;
        int num = 0;
        
        for(char c : s) {

            if(isdigit(c)) 
            {
                num = num*10 + (c-'0'); 
            }
            else if(isalpha(c)) 
            { 
                res.push_back(c);            
            }
            else if(c == '[') 
            { 
                
                chars.push(res); // put the encoded_string to stack
                nums.push(num); // put the number into the stack
                
           
                res = "";
                num = 0;
            }
            else if(c == ']') 
            {
               
                string tmp = res; 
                for(int i=0; i<nums.top()-1; i++) res += tmp;
                
                res = chars.top() + res;
                chars.pop(); 
                nums.pop();
            }
        }
        return res;
    }
};