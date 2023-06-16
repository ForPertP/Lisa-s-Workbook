#include <bits/stdc++.h>

using namespace std;

string ltrim(const string &);
string rtrim(const string &);
vector<string> split(const string &);

/*
 * Complete the 'workbook' function below.
 *
 * The function is expected to return an INTEGER.
 * The function accepts following parameters:
 *  1. INTEGER n
 *  2. INTEGER k
 *  3. INTEGER_ARRAY arr
 */

int workbook(int n, int k, vector<int> arr)
{
    int count = 0;
    int page = 0;
    
    for (int i = 0; i < n; ++i)
    {
        for (int j = 1; j <= arr[i]; ++j)
        { 
            if (k == 1 || j % k == 1)
                page++;
            
            if (j == page)
                count++;
        }
    }
    
    return count;
}
