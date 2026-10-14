# Sansa and XOR

![Difficulty](https://img.shields.io/badge/Difficulty-Medium-yellow)

## Problem

Sansa has an array. She wants to find the value obtained by [XOR](http://en.wikipedia.org/wiki/XOR#Bitwise_operation)-ing the contiguous subarrays, followed by [XOR](http://en.wikipedia.org/wiki/XOR#Bitwise_operation)-ing the values thus obtained. Determine this value.  

**Example**   
$arr=[3,4,5]$   
```
Subarray	Operation	Result
3		None		3
4		None		4
5		None		5
3,4		3 XOR 4		7
4,5		4 XOR 5		1
3,4,5		3 XOR 4 XOR 5	2
```

Now we take the resultant values and XOR them together:

$3\oplus 4\oplus 5\oplus 7\oplus 1\oplus 2=6$.  Return $6$.   

**Function Description**  

Complete the *sansaXor* function in the editor below.  

sansaXor has the following parameter(s):  

- *int arr[n]:*  an array of integers  

**Returns**   

- *int:* the result of calculations  

**Input Format**

The first line contains an integer $t$, the number of the test cases.   

Each of the next $t$ pairs of lines is as follows:  
- The first line of each test case contains an integer $n$, the number of elements in $arr$.  
- The second line of each test case contains $n$ space-separated integers $arr[i]$.    


**Constraints**

$1 \le t \le 5$  
$2 \le n \le 10^5$  
$1 \le arr[i] \le 10^8 $  


**Output Format**

## Solution

**Language:** C++  
**Runtime:** N/A  
**Memory:** N/A  
**Submitted:** 2026-10-14T16:32:29.296Z  

```cpp
#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'sansaXor' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts INTEGER_ARRAY arr as parameter.
 */

int sansaXor(vector<int> arr) {
    int n=arr.size();
    
    if(n%2==0)return 0;
    
    int result=0;
    
    for(int i=0;i<n;i+=2){
        result^=arr[i];
    }
    
    return result;
}
int main()
{
    ofstream fout(getenv("OUTPUT_PATH"));

    string t_temp;
    getline(cin, t_temp);

    int t = stoi(ltrim(rtrim(t_temp)));

    for (int t_itr = 0; t_itr < t; t_itr++) {
        string n_temp;
        getline(cin, n_temp);

        int n = stoi(ltrim(rtrim(n_temp)));

        string arr_temp_temp;
        getline(cin, arr_temp_temp);

        vector<string> arr_temp = split(rtrim(arr_temp_temp));

        vector<int> arr(n);

        for (int i = 0; i < n; i++) {
            int arr_item = stoi(arr_temp[i]);

            arr[i] = arr_item;
        }

        int result = sansaXor(arr);

        fout << result << "\n";
    }

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

[View on HackerRank](https://www.hackerrank.com/challenges/sansa-and-xor/problem)