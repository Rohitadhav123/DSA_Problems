#include<iostream>
using namespace std;

int ispalidrome(char name[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {

       if(name[start] != name[end])
       {
       return false;
       }
       
        start++;
        end--;
    }
}

int getlength(char name[])
{
    int count=0;
    for(int i=0;name[i] != '\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
    char name[20];
    cout<<"Enter the your name :";
    cin>>name;
    int len=getlength(name);
 
    
   if(  ispalidrome(name,len))
   {
        cout<<"It is palidrome";
   }
   else{
    cout<<"It is not paliderome";
   }

}
