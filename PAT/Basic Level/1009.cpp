#include <iostream>
#include <stack>
#include <string>

using namespace std;

int main() {
    stack<string> words;
    string temp;

    while (cin >> temp) {
        words.push(temp);
    } 

    while (!words.empty()) {
        cout << words.top();
        words.pop();

        if (!words.empty()) cout << " ";
    }

    return 0;
}
