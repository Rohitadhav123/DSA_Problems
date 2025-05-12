#include<iostream>
using namespace std;
int main (){
    // int n;
    // cout<<"Enter the number :";
    // cin>>n;
    // if(n>0)
    // {
    //     cout<<"It is podsitive";
    // }
    // else if (n<0)
    // {
    //     /* code */cout<<"It is negative";
    // }
    // else{
    //     cout<<"It is netural";
    // }
    
    char ch;
    cin>>ch;
    if(ch >= 'a' && ch <= 'z')
    {
        cout<<"It is smaller case letter";

    }
    else if (ch >= 'A' && ch <= 'B'){
        cout<<"It is usepper case";
    }
    else if (ch >= '1' && ch <='9' )
{
    cout<<"It is numeric value";
}
else {
    cout<<"Enter number";
}
}


// g++ index.cpp -o index
//index