/*
Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.

Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000
For example, 2 is written as II in Roman numeral, just two one's added together. 12 is written as XII, which is simply X + II. The number 27 is written as XXVII, which is XX + V + II.

Roman numerals are usually written largest to smallest from left to right. However, the numeral for four is not IIII. Instead, the number four is written as IV. Because the one is before the five we subtract it making four. The same principle applies to the number nine, which is written as IX. There are six instances where subtraction is used:

I can be placed before V (5) and X (10) to make 4 and 9. 
X can be placed before L (50) and C (100) to make 40 and 90. 
C can be placed before D (500) and M (1000) to make 400 and 900.
Given a roman numeral, convert it to an integer.

 

Example 1:

Input: s = "III"
Output: 3
Example 2:

Input: s = "IV"
Output: 4
Example 3:

Input: s = "IX"
Output: 9
Example 4:

Input: s = "LVIII"
Output: 58
Explanation: L = 50, V= 5, III = 3.
*/

class Solution {
public:
    int romanToInt(string s) {
        map<string,int> m;
        int result=0;
        m["I"] = 1;
        m["V"] = 5;
        m["X"] = 10;
        m["L"] = 50;
        m["C"] = 100;
        m["D"] = 500;
        m["M"] = 1000;
        m["IV"] = 4;
        m["IX"] = 9;
        m["XL"] = 40;
        m["XC"] = 90;
        m["CD"] = 400;
        m["CM"] = 900;
        
        int len = s.length();
      for(int i=0;i<len;i++)
      {
          if(s[i] == 'I'){
              if(i+1<len && s[i+1] == 'V')
              {
                  result += 4;
                  i++;
              }
              else if(i+1<len && s[i+1] == 'X')
              {
                  result += 9;
                  i++;
              }
              else {
                  result++;
              }
          }
          
         else if(s[i] == 'X'){
              if(i+1<len && s[i+1] == 'L')
              {
                  result += 40;
                  i++;
              }
              else if(i+1<len && s[i+1] == 'C')
              {
                  result += 90;
                  i++;
              }
              else
              {
                  result += 10;
              }
          }
          
          else if(s[i] == 'C'){
              if(i+1<len && s[i+1] == 'D')
              {
                  result += 400;
                  i++;
              }
              else if(i+1<len && s[i+1] == 'M')
              {
                  result += 900;
                  i++;
              }
              else
              {
                  result += 100;
              }
          }
           else{
                string tmp="";
                tmp+=s[i];
                result+=m[tmp];
            }
          
            
          
      }
     return result;   
        
    }
};