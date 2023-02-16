#include <iostream>
using namespace std;

int main()
{
    int number;
    char letter;
    int idx = 0;
    cout << "Enter the number of words : ";
    cin >> number;
    string words[number];
    string words_i;
    cout << "Enter the letter : ";
    cin >> letter;
    cout << "Enter the 5 words : ";

    for (int i = 0; i < number; i++)

    {
        cin >> words[i];
    }

    for (int i = 0; i < number; i++)
    {
        words_i = words[i];
        for (int i = 0 ; words_i[i] != '\0'; i++)
        {
            if (words_i[i] == letter)
            {
                idx = idx + 1;
            }
        
        }
    }
    cout<<idx <<" times repeated letter";
}