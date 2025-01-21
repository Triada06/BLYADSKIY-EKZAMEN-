#include <iostream>
#include <vector>

using namespace std;

vector<int> removeDuplicates(vector<int>& arr) {
    vector<int> result;
    
    for(int i = 0; i < arr.size(); i++) {
        bool isDuplicate = false;
        
        for(int j = 0; j < result.size(); j++) {
            if(arr[i] == result[j]) {
                isDuplicate = true;
                break;
            }
        }
        
        if(!isDuplicate) {
            result.push_back(arr[i]);
        }
    }
    
    return result;
}

int main() {
    vector<int> numbers = {1, 2, 2, 3, 3, 3, 4, 5, 5};
    
    cout << "Исходный массив: ";
    for(int num : numbers) {
        cout << num << " ";
    }
    cout << endl;
    
    vector<int> unique = removeDuplicates(numbers);
    
    cout << "Массив без дубликатов: ";
    for(int num : unique) {
        cout << num << " ";
    }
    cout << endl;
    
    return 0;
}