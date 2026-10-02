# Divisible Sum Pairs

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Given an array of integers and a positive integer $k$, determine the number of $(i, j)$ pairs where $i \lt j$ and $ar[i]$ + $ar[j]$ is divisible by $k$.  

**Example**  

$ar = [1, 2, 3, 4, 5, 6]$   
$k = 5$   

Three pairs meet the criteria:  $[1, 4], [2, 3],$ and $[4, 6]$.  

**Function Description**

Complete the *divisibleSumPairs* function in the editor below.   

divisibleSumPairs has the following parameter(s):  

- *int n:* the length of array $ar$  
- *int ar[n]:* an array of integers  
- *int k:* the integer divisor   

**Returns**  
-	*int:* the number of pairs  

**Input Format**

The first line contains $2$ space-separated integers, $n$ and $k$.	
The second line contains $n$ space-separated integers, each a value of $arr[i]$.  



**Constraints**

* $2 \leq n \leq 100$
* $1 \leq k \leq 100$
* $1 \leq ar[i] \leq 100$

**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-02T18:47:15.817Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'divisibleSumPairs' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY ar
 */

int divisibleSumPairs(int n, int k, vector<int> ar) {
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=i+1;j<n;j++){
            if((ar[i]+ar[j])%k==0){
                count++;
            }
        }
    }
    return count;

}

int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string first_multiple_input_temp;
    getline(cin, first_multiple_input_temp);

    vector<string> first_multiple_input = split(rtrim(first_multiple_input_temp));

    int n = stoi(first_multiple_input[0]);

    int k = stoi(first_multiple_input[1]);

    string ar_temp_temp;
    getline(cin, ar_temp_temp);

    vector<string> ar_temp = split(rtrim(ar_temp_temp));

    vector<int> ar(n);

    for (int i = 0; i < n; i++) {
        int ar_item = stoi(ar_temp[i]);

        ar[i] = ar_item;
    }

    int result = divisibleSumPairs(n, k, ar);

    fout << result << "\n";

    fout.close();

    return 0;
}

string ltrim(const string &str) {
    string s(str);

    s.erase(
        s.begin(),
        find_if(s.begin(), s.end(), not1(ptr_fun<int, int>(isspace)))
    );

    return s;
}

string rtrim(const string &str) {
    string s(str);

    s.erase(
        find_if(s.rbegin(), s.rend(), not1(ptr_fun<int, int>(isspace))).base(),
        s.end()
    );

    return s;
}

vector<string> split(const string &str) {
    vector<string> tokens;

    string::size_type start = 0;
    string::size_type end = 0;

    while ((end = str.find(" ", start)) != string::npos) {
        tokens.push_back(str.substr(start, end - start));

        start = end + 1;
    }

    tokens.push_back(str.substr(start));

    return tokens;
}

```

---

[View on HackerRank](https://www.hackerrank.com/challenges/divisible-sum-pairs/problem)