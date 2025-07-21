#include<iostream>
using namespace std;

void reversestring(char name[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(name[start],name[end]);
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
    cout<<"Enter the name :";
    cin>>name;
    int len=getlength(name);
    reversestring(name,len);
    cout<<"Your name is :"<<name<<endl;
} 