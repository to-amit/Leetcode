class Solution {
public:
//     string lowestNumber(string num, int k){
//     if(k==0) return num;
//     int i=0;
//     for(i=0;i<num.length()-1;i++){
//         if(num[i]-'0' >num[i+1]-'0')break;
//     }
//     if(num.length()>0 ) num.erase(num.begin()+i);
    
//     while(num.size()>1 && num[0]=='0')num.erase(num.begin());
//     if(num.size()==0) num="0";
//     return lowestNumber(num,k-1);
// }
    
    string removeKdigits(string num, int k) {
         string res="";
        for(char ch :num){
            while(res.size()>0 && k && ch<res.back()){
                res.pop_back();
                k--;
            }
            
             if(res.size() > 0 || ch != '0')
                res.push_back(ch);
        }
        while(res.size() && k)
        {
            res.pop_back();
                k--;
        }
         if(res.size() == 0) return "0";
        
        return res;
    }
};