# Stone Removal Game

![Difficulty](https://img.shields.io/badge/Difficulty-Easy-green)

## Problem

Alice and Bob are playing a game where they take turns removing stones from a pile, with  *Alice going first*.

- Alice starts by removing exactly 10 stones on her first turn.
- For each subsequent turn, each player removes exactly 1 fewer stone than the previous opponent.

The player who cannot make a move loses the game.

Given a positive integer `n`, return `true` if Alice wins the game and `false` otherwise.

 

Original
C++
 **Example 1:** 

 **Input:**  n = 12

 **Output:**  true

 **Explanation:** 

- Alice removes 10 stones on her first turn, leaving 2 stones for Bob.
- Bob cannot remove 9 stones, so Alice wins.

 **Example 2:** 

 **Input:**  n = 1

 **Output:**  false

 **Explanation:** 

- Alice cannot remove 10 stones, so Alice loses.

 

 **Constraints:** 

- 1 <= n <= 50

## Solution

**Language:** C++  
**Runtime:** 0 ms  
**Memory:** 7.6 MB  
**Submitted:** 2026-11-26T01:31:44.610Z  

```cpp
class Solution {
public:
    bool canAliceWin(int n) {
        bool alice=true;
        bool bob=true;
        int dec=10;
        int i=1;
        int temp=n;
        while(temp>=0){
            if(i%2!=0){
                if(temp<=0 || temp-dec<0){
                    return false;
                }
                temp=temp-dec;
                dec--;
                i++;
            }
            else{
                if(temp<=0 ||  temp-dec<0){
                    return true;
                }
                temp=temp-dec;
                dec--;
                i++;
            }
        }
        return alice;
    }
};
```

---

[View on LeetCode](https://leetcode.com/problems/stone-removal-game/)