// vector is dynamic array
#include<iostream>
#include<vector>
using namespace std;
int main()
{
    vector<int> v;
    cout<<"Size-->"<<v.capacity()<<endl;
    v.push_back(3);//adding element
    cout<<"Size-->"<<v.capacity()<<endl;
    v.push_back(2);
    cout<<"Size-->"<<v.capacity()<<endl;
    cout<<"First element :"<<v.front()<<endl;
    for(int i:v)
    {
        cout<<i<<" "<<endl;
    }
        // if size know of vector
        vector<int> a(5,1);
        // 5 is capacity means size
        //1 is the value 5 time 1 is print
        for(int i:a)
        {
            cout<<i<<endl;
        }
}