#include <iostream>

using namespace std;

int main()
{
    string sentence;
    int wordCounter = 0;

    getline(cin, sentence);

    if (sentence.length() == 0)
    {
        cout<<"The sentence is empty";
        return 0;
    }
    for (int i = 0; i < sentence.length(); i++)
    {
        if (sentence[i] != ' ' && sentence[i + 1] == ' ')
            wordCounter++;
    }

    if (sentence[sentence.length() - 1] != ' ')
        wordCounter++;

    cout << "Number of the words: " << wordCounter;
}