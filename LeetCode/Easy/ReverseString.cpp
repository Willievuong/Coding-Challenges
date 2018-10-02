class Solution {
public:
    string reverseString(string s) {
        
        if(s.length() == 0){
            return s;
        }
        char * begin = &s.at(0);
        char * end = &s.at(s.length() - 1);
        char * intermediate = new char; 
        
        for(int i = 0; i < s.length()/2; i++){
        *intermediate = *begin;
        *begin = *end;
        *end = *intermediate;
        
        begin++; 
        end--;
        }
        
        return s;
    }
};