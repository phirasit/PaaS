#include <iostream>

using namespace std;

int main(int argc, char *argv[]) {

    if (argc == 2) {
        string str (argv[1]);
        string rev_str (str.rbegin(), str.rend());

        if (str == rev_str) {
            cout << "YES" << endl;
        } else {
            cout << "NO" << endl;
        }
    } else {
        cout << "Number of arguments is not 1" << endl;
    }

	return 0;
}
	

