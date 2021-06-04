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
