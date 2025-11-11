// #include<iostream>
// using namespace std;


// int fibonacchi_recursive(int n)
// {
//     if(n<=1)
//     {
//         return n;
//     }
//     return fibonacchi_recursive(n-1)+fibonacchi_recursive(n-2);
// }

// int main()
// {
//     int n;
//     cout<<"Enter the number of fibonacci series :"<<endl;
//     cin>>n;
//     cout<<"Fibonacchi series :";
//     for(int i=0;i<n;i++)
//     {
//         cout<<fibonacchi_recursive(i);
//         cout<<" ";
//     }
// }

#include<iostream>
using namespace std;

void non_recursive (int n)
{
    int a=0,b=1,c;
    cout<<"Fibonachi series :";
    for(int i=0;i<n;i++)
    {
        cout<<a;
        cout<<" "<<endl;
        c=a+b;
        a=b;
        b=c;
    }
}
int main()
{
    int n;
    cout<<"Ener the fibonacchi number count :"<<endl;
    cin>>n;
    non_recursive(n);

}