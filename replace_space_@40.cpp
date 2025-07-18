#include<iostream>
#include<string>
using namespace std;

void replaceSpaces(string word)
{
    string result = ""; // New string to store result

    for (int i = 0; i < word.length(); i++)
    {
        if (word[i] == ' ')
        {
            result.push_back('@');
            result.push_back('4');
            result.push_back('0');
        }
        else
        {
            result.push_back(word[i]); // Add original character
        }
    }

    cout << "Updated word: " << result << endl;
}

int main()
{
    string word;
    cout << "Enter the word: ";
    getline(cin, word);
    replaceSpaces(word); // Calls the function
}
