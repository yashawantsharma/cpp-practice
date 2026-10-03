#include <bits/stdc++.h>
using namespace std;
int main(){
    vector<int> v={1,2,3,4,5};
    int i=0;
    int j=v.size()-1;
    while(i<j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    for(int x:v){
        cout<<x;
    }
}