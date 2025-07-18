#include<iostream>
#include<string>
using namespace std;

string removeAllABC(string str) {
    string result = str;
    size_t pos = result.find("abc");

    while (pos != string::npos) {
        result.erase(pos, 3);  // erase "abc"
        pos = result.find("abc");  // check again
    }

    return result;
}

int main()
{
    string s;
    cout<<"Enter the word:";
    cin>>s;
    string output=removeAllABC(s);
    cout<<"Substring remove :"<<output<<endl;
}