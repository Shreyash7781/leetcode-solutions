# 258. Add Digits

### Difficulty: Easy

## Description
Given an integer num, repeatedly add all its digits until the result has only one digit, and return it.

 
Example 1:


Input: num = 38
Output: 2
Explanation: The process is
38 --> 3 + 8 --> 11
11 --> 1 + 1 --> 2 
Since 2 has only one digit, return it.


Example 2:


Input: num = 0
Output: 0


 
Constraints:


	0 <= num <= 231 - 1


 
Follow up: Could you do it without any loop/recursion in O(1) runtime?

## Submission Details
- **Status**: Accepted
- **Runtime**: 0 ms
- **Memory**: 8548000
- **Language**: cpp

## Code
```cpp
class Solution {
public:
int digitSum(int num){
    if (num<=0) return 0;
    return num%10 + digitSum(num/10);

}
    int addDigits(int num) {
        if(num<=9)
        return num;
        return addDigits(digitSum(num));
    }
};
```
