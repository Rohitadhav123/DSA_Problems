// it output give in sorted order 
// it contain unique element

#include<iostream>
#include<set>

using namespace std;

int main()
{
    set<int> s;
    s.insert(5);
    s.insert(1);
    s.insert(1);
    s.insert(3);
    s.insert(3);
    s.insert(3);
    s.insert(2);
    for(int i:s)
    {
        cout<<i<<endl;
    }
    cout<<"count is that :"<<s.count(5);

}