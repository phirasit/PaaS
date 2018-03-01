#include <iostream>
#include <fstream>
#include <string>
#include <locale>

using namespace std;

int main(int argc, char *argv[]) {

    wstring str;
	getline(wcin, str);

    wstring rev_str (str.rbegin(), str.rend());

    if (str == rev_str) {
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }

	return 0;
}
	

