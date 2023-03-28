#include <bits/stdc++.h>
using namespace std;

int main()
{
    //array declaration
    array<int,4> a={1,2,3,4};
    int size=a.size();
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<endl;
    }
    //print 2nd index element of stl array
    
    cout<<"the second index element of array is->"<<a.at(2)<<endl;
    
    //check your stl array is empty or not
    
    cout<<"print 1 if array is not empty print 0 if array is empty ->"<<a.empty()<<endl;
    
    //print 1st and last element 
    
    cout<<"first element ->"<<a.front()<<endl;
    cout<<"last element ->"<<a.back()<<endl;
    
    return 0;
