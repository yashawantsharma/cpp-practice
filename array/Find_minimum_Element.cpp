#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={6,1,2,3,4,5};
    int min=INT_MAX;
    for(int i=0;i<v.size();i++){
        if(min > v[i]){
            min=v[i];
        }
    }
    cout<<min;
}