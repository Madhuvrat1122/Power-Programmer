#include<iostream>
using namespace std;

// Function To Search
void BSearch(int arr[], int l , int r , int search_ele)
{
    int mid = (l+r) / 2;
    if(mid > r || mid < l)
    {
        cout << "Element Not Found";
        return;
    }
    if (arr[mid] == search_ele)
    {
        cout << "Element Found At:- " << mid;
        return;
    }
    else if(arr[mid] > search_ele)
    {
        BSearch(arr,l,mid - 1,search_ele);
    }
    else
    {
        BSearch(arr,mid + 1,r,search_ele);
    }
}

int main()
{
    int arr0[] = {1,2,3,4,5,6,7};
    int r = sizeof(arr0)/sizeof(arr0[0]);
    int search_ele = 1;
    BSearch(arr0,0,r-1,search_ele);
    return 0;
}
