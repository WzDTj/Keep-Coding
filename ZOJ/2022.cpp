#include <iostream>
#include <cmath>

using namespace std;

int main () {
#ifndef ONLINE_JUDGE
    freopen("in.txt", "r", stdin);
#endif
	
	int t, n;
    cin >> t;
	while (t -- && cin >> n) {
		int remainder, beforProcess, afterProcess, cnt = 0, ans = 0;
        while (pow(5, ++cnt) < n+1) {
            beforProcess = n/pow(5, cnt);
            remainder = beforProcess % 5;
            afterProcess = beforProcess / 5 * 4 + remainder;
            
            ans += cnt * afterProcess;
        }

        cout << ans << endl;
	}
	
	return 0;
}

/*
˼·��
N!ĩβ0�ĸ�������N!�ֽܷ�����ٸ�5��

������ֽܷ��1��5�ĸ�����
������ֽܷ��2��5�ĸ�����
�Դ����ƣ��ٽ�����ӣ��ó����Ĵ𰸡�

����:
5 10 15 20 25 -> 1 1 1 1 2
����Ϊ�ֽܷ��1��5�Ĵ�����������25ʱ���ֽܷ��2��5��
���Ҳ�͵ó����ɣ�ÿ5�����У�ǰ4���ֽ����5�ĸ�������ͬ��
����25Ϊ��ʱ��Ҳ��һ����
25 50 75 100 125 -> 2 2 2 2 3
 */
