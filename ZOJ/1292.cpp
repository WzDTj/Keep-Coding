#include <iostream>
#include <string>

class bigNumber {
private:
    std::string value;
    bool symbol;
    
    bool compareAbsoluteValue (std::string value);
public:
    bigNumber (std::string number);
    void displayBigNumber ();
    bool operator< (const bigNumber &other);
    bigNumber operator+ (bigNumber addend);
    bigNumber operator- (bigNumber subtrahend);
};
using namespace std;

int main() {
    int n;
    cin >> n;
    for (int i = 0; i < n; ++i) {
        bigNumber sum = bigNumber("0");
        string temp;
        while (cin >> temp && temp.compare("0")) {
            bigNumber a = bigNumber(temp);
            sum = sum + a;
        }
        sum.displayBigNumber();
        if (i < n-1) cout << endl;
    }
    return 0;
}

//constructor
bigNumber::bigNumber (std::string number) {
    std::string::iterator it = number.begin();
    if (*it >= '0' && *it <= '9') {
        symbol = true;
        value = std::string(number);
    }
    else {
        if (*it == '-') symbol = false;
        else if (*it == '+') symbol = true;
        value = std::string(number, 1, number.size());
    }
}

//private method
bool bigNumber::compareAbsoluteValue (std::string value) {
    if (this->value.size() != value.size()) return this->value.size() < value.size();
    else return this->value < value;
}


//public method
void bigNumber::displayBigNumber () {
    if (!this->symbol) std::cout << "-";
    std::cout << this->value << std::endl;
}

bool bigNumber::operator< (const bigNumber &other) {
    if (this->symbol && !other.symbol) return false;
    else if (!this->symbol && other.symbol) return true;
    else if (this->symbol && other.symbol) return compareAbsoluteValue(other.value);
    else return !compareAbsoluteValue(other.value);
}

bigNumber bigNumber::operator+ (bigNumber addend) {
    if (this->symbol == addend.symbol) {
        std::string answer = "";
        int carry = 0;
        
        std::string::reverse_iterator it_a = this->value.rbegin();
        std::string::reverse_iterator it_b = addend.value.rbegin();
        
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
        
        std::string result;
        std::string::reverse_iterator it_answer = answer.rbegin();
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
        std::string answer = "";
        int carry = 0;
        
        std::string bigger = compareAbsoluteValue(subtrahend.value) ? subtrahend.value : this->value;
        std::string smaller = compareAbsoluteValue(subtrahend.value) ? this->value : subtrahend.value;
        std::string::reverse_iterator it_a = bigger.rbegin();
        std::string::reverse_iterator it_b = smaller.rbegin();
        
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
        
        std::string result;
        std::string::reverse_iterator it_answer = answer.rbegin();
        
        while (*it_answer ++ == '0') {
            answer.erase(0, 1);
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
