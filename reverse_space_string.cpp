#include<iostream>
using namespace std;

void reverse(char word[],int n)
{
    int start=0;
    int end=n-1;
    while(start<=end)
    {
        swap(word[start],word[end]);
        start++;
        end--;
    }
}

int cont(char word[])
{
    int count =0;
    for(int i=0;word[i] !='\0';i++)
    {
        count++;
    }
    return count;
}

int main()
{
   
    char word[100];
    cout<<"Enter the word :";
    cin.getline(word,100);

    int n=cont(word);
    reverse(word,n);
    cout<<"Reverse sting is :"<<word<<endl;

}