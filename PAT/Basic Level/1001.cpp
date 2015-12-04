#include <iostream>

int main(void)
{
    int num, cnt = 0;
    
    std::cin >> num;

    while (num != 1) {
        if (num % 2) num = (3 * num + 1) / 2;
        else num /= 2;

        cnt ++;
    }

    std:: cout << cnt << std::endl;

    return 0;
}
