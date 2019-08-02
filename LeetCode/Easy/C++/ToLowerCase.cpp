//  #709 To Lower Case 
//  Checking to see if the character is within bound of the ascii value
//  Then make changes accordingly 

class Solution {
public:
    string toLowerCase(string str) {
        int i = 0;
        
        while(str[i] != '\0'){
            if(str[i] < 91 && str[i] > 64)
                str[i] += 32;
            i++;
        }
        
        return str;
    }
    

};