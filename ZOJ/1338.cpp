#include <iostream>
#include <iomanip>

using namespace std;
int up_cnt = 0, up_len = 0, down_cnt = 0, down_len = 0, sequence_len = 0;

bool solve();
void output();

int main() {
//    freopen("in.txt", "r", stdin);
//    freopen("out.txt", "r", stdout);
    while (solve()) output();
    return 0;
}

bool solve() {
    up_cnt = 0, up_len = 0, down_cnt = 0, down_len = 0, sequence_len = 0;
    int buff_len = 0;
    bool up_flag = false, down_flag = false;
    
    int pre = -1, now;
    while (cin >> now && now != 0) {
        if (pre != -1) {    //begin from second number
            if (now > pre) {
                if (down_flag) down_flag = false;
                if (!up_flag) ++up_cnt, up_flag = true;

                if (buff_len) up_len += buff_len, buff_len = 0;
                ++up_len;
            }
            else if (now < pre) {
                if (up_flag) up_flag = false;
                if (!down_flag) ++down_cnt, down_flag = true;

                if (buff_len) down_len += buff_len, buff_len = 0;
                ++down_len;
            }
            else {
                if (up_flag) ++up_len;
                else if (down_flag) ++down_len;
                else ++buff_len;
            }
        }
        //else {}
        pre = now;
        ++sequence_len;
    }
    
    if (pre == -1) return false;
    else return true;
}

void output() {
    cout << "Nr values = " << sequence_len << ":  ";
    cout << setiosflags(ios::fixed) << setprecision(6) << (up_cnt ? (double)up_len/up_cnt : 0) << " ";
    cout << setiosflags(ios::fixed) << setprecision(6) << (down_cnt ? (double)down_len/down_cnt : 0) << endl;
}
