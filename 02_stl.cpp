#include <bits/stdc++.h>

using namespace std;

int main()
{
    
    vector<int>v;
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(1);
    cout<<"capacity->"<<v.capacity()<<endl;
    
     v.push_back(2);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(3);
    cout<<"capacity->"<<v.capacity()<<endl;
    
    v.push_back(4);
    cout<<"capacity->"<<v.capacity()<<endl;
    cout<<"size of vector->"<<v.size()<<endl;
    
    return 0;
}
