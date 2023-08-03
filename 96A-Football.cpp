#include <iostream>

using namespace std;

int main()
{
    string word;
    int cont = 1;

    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        if (word[i] == word[i + 1])
        {
            cont++;
            if (cont >= 7)
            {
                cout << "YES";
                return (0);
            }
        }
        else cont = 1;
    }
    cout << "NO";
    return (0);
}