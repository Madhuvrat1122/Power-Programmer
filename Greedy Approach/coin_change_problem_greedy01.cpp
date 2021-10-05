#include<iostream>
#include<vector>
#include<algorithm>
#include<string>
using namespace std;
string CoinChange(vector<int> Coins , int Total)
{
    int coin_selected = 0;
    int Remaining;
    sort(Coins.begin(),Coins.end());
    if (find(Coins.begin(),Coins.end(),Total) != Coins.end())
    {
        return to_string(Total);
    }
    for(auto i : Coins)
    {
        if(Total > i)
        {
            coin_selected = i;
            Remaining = Total - coin_selected;
        }
    }
    return to_string(coin_selected) + "," + CoinChange(Coins,Remaining);
}
int main()
{
    vector<int> Coins = {1,3,5,6};
    int Total = 8;
    string Result = CoinChange(Coins,Total);
    cout << "Result :- " << Result;
    return 0;
}
