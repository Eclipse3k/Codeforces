#include <iostream>

using namespace std;

int main()
{
    string word;
    int i = 0;

    cin >> word;

    while (word[i])
    {  
         if(word[i] >= 'A' && word[i] <= 'Z')
            word[i] += 32;
        i++;
    }
    i = 0;
    while (word[i])
    {
        if (!(word[i] == 'a' || word[i] == 'e' || word[i] == 'i' || word[i] == 'o' || word[i] == 'u' || word[i] == 'y'))
        {
            cout << '.';
            cout << word[i];
        }
        i++;
    }
}