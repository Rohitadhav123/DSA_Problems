#include<iostream>
#include<climits>
using namespace std;

// void printarray(int array[],int size)
// {
//       cout<<"The priniting the array"<<endl;
//         for(int i=0;i<=size;i++)
//         {
//                 cout<<array[i]<<endl;
//         }
// }

// int main ()
// {
//        // int number[3];
        
//       int number[15]={1,4,3};
//       printarray(number,15);
//       cout<<"Size of array  :"<<sizeof(number)/sizeof(int);
      
// }

        int addition(int num[],int n)
        {
                int sum=0;
                for(int i=0;i<n;i++)
                {
                  sum +=num[i];
                }
                return sum;
        }
// int getmin(int num[],int n)
// {
//         int min=INT_MAX;
//         for(int i=0;i<=n;i++)
//         {
//                 if(num[i] <min)
//                 {
//                         min=num[i];
//                 }
//         }
//         return min;
// }
// int getMax(int num[],int n)
// {
//         int max=INT_MIN;
//         for (int i=0;i<=n;i++)

//         {


//                 if(num[i] > max)
//                 {
//                         max=num[i];
//                 }
//         }
//         return max;
// }

int main()
{
       int size;
       cin>>size;
       int num[100];
       for(int i=0;i<size;i++)
       {
        cin>>num[i];
       }
//        cout<<"Maximum element is :"<<getMax(num,size)<<endl;
//        cout<<"Minimum element is :"<<getmin(num,size)<<endl;
cout<<"Addition is :"<<addition(num,size)<<endl;

}