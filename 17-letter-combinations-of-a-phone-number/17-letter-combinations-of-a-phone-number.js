/**
 * @param {string} digits
 * @return {string[]}
 */

function check(idx,digits,temp,ans,dict)  {
    if(idx === digits.length){
        ans.push(temp)
        return;
    }
    let curr_str=dict[parseInt(digits[idx])];
    for(let i=0;i<curr_str.length;i++){
         temp+=curr_str[i];
         check(idx+1,digits,temp,ans,dict);
         temp = temp.substr(0, temp.length - 1);
    }
};

var letterCombinations = function(digits) {
    if(digits.length===0) return [];
    const dict =["","","abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"];
    let ans=[];
    let temp="";
    check(0,digits,temp,ans,dict);
    return ans;
    
    
};