#include<iostream>
using namespace std;

// in array the array name is address of first value
int main()
{
    int array[10]={2,7,6,8};
    cout<<array<<endl;
    cout<<&array[0]<<endl;
    cout<<*array<<endl;
    cout<<*array+1<<endl;
    cout<<*(array+1)<<endl;
    cout<<(*array)+1<<endl;


    //array[i]= *(array+i)

    cout<<*(array + 2)<<endl;

    int i=3;
    cout<< i[array]<<endl;
    cout<< i[array]<<endl;



    int temp[10];
    cout<<sizeof(temp)<<endl;
    
    int *ptr=&temp[0];
    cout<<sizeof(ptr)<<endl;


    char cha[6]={"abcde"};
    
}