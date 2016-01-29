#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

class bigNumber {
private:
    string value;
    bool symbol;
    bool compareAbsoluteValue (string value);
public:
    bigNumber (string number);
    void displayBigNumber ();
    bool operator< (const bigNumber &other);
    bigNumber operator+ (bigNumber addend);
    bigNumber operator- (bigNumber subtrahend);
};

int main() {
    int cases;
    cin >> cases;
    
    string num_a, num_b, num_c, result;
    for (int i = 0; i < cases; ++i) {
        cin >> num_a >> num_b >> num_c;
        
        bigNumber a = bigNumber(num_a);
        bigNumber b = bigNumber(num_b);
        bigNumber c = bigNumber(num_c);

        if ( c < (a + b)) result = string("true");
        else result = string("false");
        
        cout << "Case #" << i+1 << ": "<< result << endl;
    }
    return 0;
}

bigNumber::bigNumber (string number) {
    string::iterator it = number.begin();
    if (*it >= '0' && *it <= '9') {
        symbol = true;
        value = string(number);
    }
    else {
        if (*it == '-') symbol = false;
        else if (*it == '+') symbol = true;
        value = string(number, 1, number.size());
    }
}

void bigNumber::displayBigNumber () {
    if (!this->symbol) cout << "-";
    cout << this->value << endl;
}

bool bigNumber::operator< (const bigNumber &other) {
    if (this->symbol && !other.symbol) return false;
    else if (!this->symbol && other.symbol) return true;
    else if (this->symbol && other.symbol) return compareAbsoluteValue(other.value);
    else return !compareAbsoluteValue(other.value);
}

bigNumber bigNumber::operator+ (bigNumber addend) {
    if (this->symbol == addend.symbol) {
        string answer = "";
        int carry = 0;
        
        string::reverse_iterator it_a = this->value.rbegin();
        string::reverse_iterator it_b = addend.value.rbegin();
        
        int num_a, num_b, num_c;
        
        while(it_a != this->value.rend() || it_b !=addend.value.rend() || carry) {
            if (it_a == this->value.rend()) num_a = 0;
            else num_a = *it_a ++ - '0';
            if (it_b == addend.value.rend()) num_b = 0;
            else num_b = *it_b ++ - '0';
            
            num_c = num_a + num_b + carry;
            
            answer.push_back(num_c%10 + '0');
            
            carry = num_c / 10;
        }
        
        if (!this->symbol) answer.push_back('-');
        
        string result;
        string::reverse_iterator it_answer = answer.rbegin();
        while (it_answer !=  answer.rend()) {
            result.push_back(*it_answer ++);
        }
        
        return bigNumber(result);
    }
    else {
        addend.symbol = !addend.symbol;
        return this->operator- (addend);
    }
}

bigNumber bigNumber::operator- (bigNumber subtrahend) {
    if (this->symbol == subtrahend.symbol) {
        string answer = "";
        int carry = 0;
        
        string bigger = compareAbsoluteValue(subtrahend.value) ? subtrahend.value : this->value;
        string smaller = compareAbsoluteValue(subtrahend.value) ? this->value : subtrahend.value;
        string::reverse_iterator it_a = bigger.rbegin();
        string::reverse_iterator it_b = smaller.rbegin();
        
        int num_a, num_b, num_c;
        
        while(it_a != bigger.rend() || it_b !=smaller.rend() || carry) {
            if (it_a == bigger.rend()) num_a = 0;
            else num_a = *it_a ++ + 10 - '0';
            if (it_b == smaller.rend()) num_b = 0;
            else num_b = *it_b ++ - '0';
            
            num_c = num_a - num_b - carry;
            
            answer.push_back(num_c%10 + '0');
            
            carry = num_c < 10 ? 1 : 0;
        }
        
        string result;
        string::reverse_iterator it_answer = answer.rbegin();
        
        while (*it_answer ++ == '0') {
            answer.pop_back();
        }
        
        if (*this < subtrahend) answer.push_back('-');

        it_answer = answer.rbegin();
        
        while (it_answer !=  answer.rend()) {
            result.push_back(*it_answer ++);
        }
        
        return bigNumber(result);
    }
    else {
        subtrahend.symbol = !subtrahend.symbol;
        return this->operator+ (subtrahend);
    }
}

bool bigNumber::compareAbsoluteValue (string value) {
    if (this->value.size() != value.size()) return this->value.size() < value.size();
    else return this->value < value;
}
