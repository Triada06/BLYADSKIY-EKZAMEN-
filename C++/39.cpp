#include <iostream>
using namespace std;

int main() {
    int s[5][3] = {
        {2, 5, 7},
        {3, 5, 4}, 
        {8, 0, 0}, 
        {0, 0, 0},
        {0, 0, 0}
    };

    cout << "Reversed third element: "; // etot vopros ya s chat gpt spizdil
    for (int i = 2; i >= 0; i--) {
        cout << s[1][i] << " "; 
    }

    return 0;
}
