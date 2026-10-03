#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,4,5,6,7};
    int smallest=INT_MAX;
    int second_small=0;
    for(int i=0;i<v.size();i++){
        if(smallest > v[i]){
            second_small=smallest;
            smallest=v[i];
        }
        else if(smallest < v[i]&& second_small >v[i]){
            second_small=v[i];
        }
    }
    cout<<second_small;
}