/* Check If String Is a Prefix of Array

Difficulty:Easy
Given a string s and an array of strings words, determine whether s is a prefix string of words.

A string s is a prefix string of words if s can be made by concatenating the first k strings in words for some positive k no larger than words.length.

Return true if s is a prefix string of words, or false otherwise.

Example 1:
Input: s = "iloveleetcode", words = ["i","love","leetcode","apples"]
Output: true
Explanation:
s can be made by concatenating "i", "love", and "leetcode" together.

Example 2:
Input: s = "iloveleetcode", words = ["apples","i","love","leetcode"]
Output: false
Explanation:
It is impossible to make s using a prefix of arr.
*/

#include<string>
class Solution {
public:
    bool isPrefixString(string s, vector<string>& words) {
        string result = "";
        string substring = "";
       int flag = 0;
        bool answer;
        for(int i=0;i<words.size();i++)
        {
            result += words[i];
            substring += s.substr(0,result.length());
            
            if(result == substring)
            {
                if(result == s)
                {
                return true;
                }
                substring = "";
               continue;
             
            }
        }
       
    return false;
    }
};

