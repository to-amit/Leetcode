class Solution {
    public boolean isAnagram(String s, String t) {
         if(s.length()!=t.length())
             return false;
        int freq[]= new int[26];
        for(int i=0;i<s.length();i++){
            freq[s.charAt(i) - 'a']++;
        }
        int freq1[]= new int[26];
        for(int i=0;i<t.length();i++){
            freq1[t.charAt(i) - 'a']++;
        }
        for(int i=0;i<s.length();i++){
            if(freq1[s.charAt(i)-'a']!=freq[s.charAt(i)-'a'])
                return false;
        }
       return true;
        
    }
}