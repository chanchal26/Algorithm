#include <bits/stdc++.h>
using namespace std;


int main()
{
    int n,m;
    cin>>n;
    int arr1[n];
    for (int i = 0; i < n; i++)
    {
        cin>>arr1[i];
    }
    cin>>m;
    int arr2[m];
    for (int i = 0; i < m; i++)
    {
        cin>>arr2[i];
    }
    int size1 = n;
    int size2 = m;


    int mergedSize = size1 + size2;
    int mergedArr[mergedSize];


    int i = 0;
    int j = 0;
    int k = 0;


    while (i < size1 && j < size2)
    {
        if (arr1[i] >= arr2[j])
        {
            mergedArr[k] = arr1[i];
            i++;
        }
        else
        {
            mergedArr[k] = arr2[j];
            j++;
        }
        k++;
    }


    while (i < size1)
    {
        mergedArr[k] = arr1[i];
        i++;
        k++;
    }


    while (j < size2)
    {
        mergedArr[k] = arr2[j];
        j++;
        k++;
    }


    for (int i = 0; i < mergedSize; i++)
    {
        cout << mergedArr[i] << " ";
    }
    cout<<endl;
    return 0;
}
