// Find if substring exist

#include <iostream>
using namespace std;

int isSubstringOptimized(string str, string target)
{
    int t = 0;
    int len = str.length();
    int i;
    for (i = 0; i < len; i++)
    {
        if (t == target.length())
            break;
        if (str[i] == target[t])
            t++;
        else
            t = 0;
    }
    return t < target.length() ? -1 : i - t;
}

int isSubstring(string src, string dest)
{
    int M = src.length();
    int N = dest.length();
    for (int i = 0; i <= N - M; i++)
    {
        int j;
        for (j = 0; j < M; j++)
        {
            if (dest[i + j] != src[j])
                break;
        }
        if (j == M)
            return i;
    }
    return -1;
}

int main()
{
    string src = "nuts";
    string dest = "cppnuts";
    // int res = isSubstring(src, dest);
    int res = isSubstringOptimized(dest, src);
    if (res == -1)
        cout << "Not present";
    else
        cout << "Present at index " << res;
    return 0;
}

// Optimized Approach
