// data are store in key value pair 
// it give output in sorted order
#include<iostream>
#include<map>
using namespace std;
int main()
{
    map<int,string> m;
    m[1]="Rohit";
    m[2]="Mahesh";
    for(auto i:m)
    {
        cout<<i.first<<endl;
    }

}