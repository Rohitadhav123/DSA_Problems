 #include <iostream>
 using namespace std;

// // int power()
// // {
// //     int a,b;
// //     cin>>a>>b;

// //     int ans=1;
// //     for(int i=0;i<b;i++)
// //     {
// //         ans=ans*a;
        
// //     }
// //     cout<<"the of the"<<a<<" that :"<<ans<<endl;

// // }
// int factorial(int number)
// {
  
//     int fact=1;
//     for(int i=0;i<=number;i++)
//     {
//         fact=fact*i;
//     }
//     return fact;

// }
// int ncr(int n, int r)
// {
    
//     int num=factorial(n);
//     int denom=factorial(r) * factorial(n-r);
//     return num/denom;
// }
// // bool evenodd()
// // {
// //     int num;
// //     cin>>num;
// //     if(num&1)
// //     {
// //        cout<<"Number is odd"<<endl;
// //     }
// //     else
// //     {
// //         cout<<"Number is even"<<endl;
// //     }
// // }

void fibo()
{
    int n;
    cin>>n;
    int a=0;
    int b=1;
    cout<<a<<endl<<b<<endl;
    int ans=1;
    for(int i=1;i<=n;i++)
    {
      
        ans=a+b;
        cout<<ans<<endl;
        a=b;
        b=ans;

    }
}

 int main()
{
    fibo();
// //     int a;
// //     cout << "Enter frist number:";
// //     cin >> a;
// //     cout << endl;
// //     int b;
// //     cout << "Enter the second number: ";
// //     cin >> b;
// //     char op;
// //     cout << "Select operator (+,-,*,/) :" << endl;
// //     cin >> op;
// //     switch (op)
// //     {
// //     case '+':
// //         cout << "Addition of firstnumber + second number :" << a + b << endl;

// //         break;

// //     case '-':
// //         cout << "Subtraction of firstnumber - second number :" << a - b << endl;
// //         break;

// //     case '*':
// //         cout << "Multiplication of a*b :" << a * b << endl;
// //         break;

// //     case '/':
// //         cout << "Division of a/b:" << a / b << endl;
// //         break;

// //     default:
// //         cout << "Enter the number";
// //     }
// int n,r;
// cin>>n>>r;
// cout<<"Answer is that :"<<ncr(n,r)<<endl;
// // power();
// // evenodd();
}
