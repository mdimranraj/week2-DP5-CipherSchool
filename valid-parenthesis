class Solution {
public:
    bool isValid(string s) {
        int length = s.length();
        vector<char> stack;
        
        int i = 0, j = 0;
        
        while(i<length){
                if(j == 0){
                        stack.push_back(s[i]);
                        j++;
                        i++;
                        continue;
                }
                if((s[i] == ')' && stack[j-1] == '(' ) ||
                        (s[i] == '}' && stack[j-1] == '{') ||
                        (s[i] == ']' && stack[j-1] == '[')){
                        stack.pop_back();
                        j--;
                        i++;
                }
                else{
                        stack.push_back(s[i]);
                        j++;
                        i++;
                }
        
        }
        if(j == 0)
                return true;
        else return false;
            
        
    }
};