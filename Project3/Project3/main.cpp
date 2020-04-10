 //// deleting elements between [] in constant string ////
#include <iostream>
#include <string>

using namespace std;

int main() 
{
    string words_with_brackets = "butterfly [shark] sparrow [raven, crow]";
    cout << "We have string: " << words_with_brackets << endl;
    cout << "And now we will delete all the elements within our brackets" << endl;
    for (int i = 0; i <= (int) words_with_brackets.length(); i++) 
    {
        if(words_with_brackets[i] == '[')
        {
            while (words_with_brackets[i] != ']')
            {
                words_with_brackets.erase(words_with_brackets.begin() + i);
            }
            words_with_brackets.erase(words_with_brackets.begin() + i);
        }
    }
    cout << "In result we get: " << words_with_brackets << endl;
    system("PAUSE");
    return(0);
}