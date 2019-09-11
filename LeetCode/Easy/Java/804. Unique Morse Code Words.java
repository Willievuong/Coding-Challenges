
// Brute Force Method 
// O(n^2) Solution 

class Solution {
    public int uniqueMorseRepresentations(String[] words) {
        ArrayList <String> pattern = new ArrayList(); 
        
        for(int i = 0; i < words.length; i++){
            String encoded = encoder(words[i]);
            Boolean unique = true; 
            
            for(int j = 0; j < pattern.size();j++){
                if(encoded.compareTo(pattern.get(j)) == 0){
                   unique = false;  
                }
            }
        
            if(unique){
                pattern.add(encoded);
            }
        }
        
        return pattern.size(); 
    }
    
    public String encoder(String word){
        String code[] = {".-","-...","-.-.","-..",".","..-.","--.","....","..",".---","-.-",".-..","--","-.","---",".--.","--.-",".-.","...","-","..-","...-",".--","-..-","-.--","--.."};
        
        String morseCode = "";
        
        for(int i = 0; i < word.length(); i++){
            morseCode = morseCode + code[word.charAt(i) - 97];
        }
                
        return morseCode; 
    }
}