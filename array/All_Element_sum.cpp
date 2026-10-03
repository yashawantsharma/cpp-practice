#include <bits/stdc++.h>
using namespace std;
int main()
{
   vector<int> v={1,2,3,4,5};
   int sum=0;
   for(int i=0;i<v.size();i++){
    sum+=v[i];
   }
   cout<<"sum of all elememt in array = "<<sum;
    return 0;
}