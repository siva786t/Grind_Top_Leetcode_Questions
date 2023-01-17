20. Valid Parentheses
Easy
17.6K
965
Companies
Given a string s containing just the characters '(', ')', '{', '}', '[' and ']', determine if the input string is valid.

An input string is valid if:

Open brackets must be closed by the same type of brackets.
Open brackets must be closed in the correct order.
Every close bracket has a corresponding open bracket of the same type.
 

Example 1:

Input: s = "()"
Output: true
Example 2:

Input: s = "()[]{}"
Output: true
Example 3:

Input: s = "(]"
Output: false
 

Constraints:

1 <= s.length <= 104
s consists of parentheses only '()[]{}'.


//Time - O(n)
//Space - O(n)
class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        for(auto a: s){
            if(!stk.empty() && (a==')' || a==']' || a=='}')){
                char temp = stk.top();
                if(temp =='(' && a == ')') stk.pop();
                else if(temp =='{' && a == '}') stk.pop();
                else if(temp =='[' && a == ']') stk.pop();
                else stk.push(a);
            } 
            else{
                stk.push(a);
            }
        }
        return stk.empty();
    }
};
