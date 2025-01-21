#include <iostream>

using namespace std;

int main()
{
    string sentence, reversedSentence;

    getline(cin, sentence);

    if (sentence.length() == 0)
    {
        cout << "The sentence is empty";
        return 0;
    }
    for (int i = 0; i < sentence.length(); i++)
    {
        reversedSentence[sentence.length() - i - 1] = sentence[i];
    }

    cout << "Reversed sentence: " << endl;
    for (int i = 0; i < sentence.length(); i++)
        cout << reversedSentence[i];
}