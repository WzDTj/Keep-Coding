#include <iostream>
#include <cstring>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    //freopen("in.txt", "r", stdin);
    
    int leftBeds;
    while (cin >> leftBeds && leftBeds != 0) {
        int walkAway = 0;
        string sequence;
        cin >> sequence;
        
        string::iterator it = sequence.begin();
        vector<char> service;

        while (it != sequence.end()) {
            vector<char>::iterator cit;
            string::iterator rit = sequence.end();

            while (*--rit != *it);
            
            if (it != rit) {
                if (!leftBeds) walkAway ++;
                else {
                    service.push_back(*it);
                    --leftBeds;
                }
            }
            else if (it == rit) {
                cit = find(service.begin(), service.end(), *it);
                if (cit != service.end()) {
                    service.erase(cit);
                    ++leftBeds;
                }
            }
            
            it++;
        }
        
        if (walkAway) cout << walkAway << " customer(s) walked away." << endl;
        else cout << "All customers tanned successfully." << endl;
    }
    return 0;
}
