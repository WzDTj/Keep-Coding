#include <iostream>

using namespace std;

const int RANGE = 100;
bool biggerIsTrue = false;
bool smallerIsTrue = false;

void DFS(int bigger, int smaller, int range)
{
    //base
    if(smaller == 1) {
        smallerIsTrue = true;
    }

    if(bigger == 1 && smaller == 1) {
        biggerIsTrue = true;
        smallerIsTrue = true;
        return;
    }
    if(range == 1) return;

    if(smaller%range == 0) {
        DFS(bigger, smaller/range, range-1);
        //cout << "S:" << range << endl;
    }
    if(bigger%range == 0) {
        DFS(bigger/range, smaller, range-1);
        //cout << "B:" << range << endl;
    }
    DFS(bigger, smaller, range-1);

}

int main()
{
	int x, y;

	while(cin >> x >> y) {
		// init bigger, smaller, biggerIsTrue, smallerIsTrue
		int bigger, smaller;
		biggerIsTrue = false, smallerIsTrue = false;
		if (x > y) bigger = x, smaller = y;
		else bigger = y, smaller = x;
		//DFS
		DFS(bigger, smaller, RANGE);
		//output
		if(!biggerIsTrue && smallerIsTrue) cout << smaller << endl;
		else cout << bigger << endl;
	}
	return 0;
}
