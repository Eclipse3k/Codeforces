#include <iostream>

using namespace std;

int main()
{
    string word;
    int t = 0;

    cin >> word;
    for (int i = 0; i < word.size(); i++)
    {
        switch (t)
        {
            case 0:
                if (word[i] == 'h')
                    t++;
            break;
            case 1:
                if (word[i] == 'e')
                    t++;
            break;
            case 2:
                if (word[i] == 'l')
                    t++;
            break;
            case 3:
                if (word[i] == 'l')
                    t++;
            break;
            case 4:
                if (word[i] == 'o')
                {
                    cout << "YES";
                    return (0);
                }
            break;
        }
    }
    cout << "NO";
    return (0);
}