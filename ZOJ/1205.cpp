#include <iostream>
#include <string>
#include <stack>

using namespace std;

stack<int> stringToMartianNumber (string operand);
void martianAddition (stack<int> &lhs, stack<int> &rhs);

int main() {
    string lhs, rhs;
    while (cin >> lhs >> rhs) {
        stack<int> lhs_s = stringToMartianNumber(lhs);
        stack<int> rhs_s = stringToMartianNumber(rhs);
        martianAddition(lhs_s, rhs_s);
    }
    return 0;
}

stack<int> stringToMartianNumber (string operand) {
    int len =  operand.size();
    stack<int> result;

    string::iterator it = operand.begin();
    for (int i = 0; i < len; ++i) {
        if (*it >= '0' && *it <= '9') result.push(*it - '0');
        else if (*it >= 'a' && *it <= 'j') result.push(*it - 'a' + 10);
        ++it;
    } 
    
    return result;
}

void martianAddition (stack<int> &lhs, stack<int> &rhs) {
    char list[20] = {
        '0', '1', '2', '3', '4',
        '5', '6', '7', '8', '9',
        'a', 'b', 'c', 'd', 'e',
        'f', 'g', 'h', 'i', 'j'
    };
    
    stack<int> result;
    int carry = 0, lhs_t, rhs_t;
    while ((!lhs.empty() || !rhs.empty()) || carry) {
        lhs_t = (lhs.empty() ? 0 : lhs.top());
        rhs_t = (rhs.empty() ? 0 : rhs.top());
        
        result.push((lhs_t + rhs_t + carry) % 20);
        carry = (lhs_t + rhs_t + carry) / 20;

        if (!lhs.empty()) lhs.pop();
        if (!rhs.empty()) rhs.pop();
    }

    while(!result.empty()) {
        cout << list[result.top()];
        result.pop();
    }
    cout << endl;
}
