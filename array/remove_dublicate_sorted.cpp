#include <bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v = {1, 2, 2, 3, 3, 4, 5};
    // map<int,int> m;
    // for (auto x:v){
    //     m[x]++;
    // }

    // for(auto x:m){
    //     cout<<x.first;
    // }

    // vector<int> m;
    // int j = 0;
    // int n = v.size();
    // while (j < n)
    // {
    //     bool dublicate = false;
    //     for (int i = j + 1; i < v.size(); i++)
    //     {
    //         if (v[j] == v[i])
    //         {
    //             dublicate = true;
    //             break;
    //         }
    //     }
    //     if (!dublicate)
    //     {
    //         m.push_back(v[j]);
    //     }
    //     j++;
    // }
    // for (auto x : m)
    // {
    //     cout << x;
    // }



    vector<int> m;
    for(int i=0;i<v.size();i++){
        if(i==0||v[i]!=v[i-1]){
            m.push_back(v[i]);
        }
    }
    for(auto x:m){
        cout<<x;
    }
}