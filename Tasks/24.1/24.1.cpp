#include <iostream>
#include <string>
#include <fstream>

using namespace std;

int main(){
	ifstream F("C:\\Users\\moloc\\OneDrive\\24.txt");
	string s;
	getline(F, s);
	int maxLen = 1, curLen = 1;
	for (int i = 1; i < s.length(); i++) {
		if (s[i] != s[i - 1]) { //(s[i] == 'X')
			curLen++;
			if (curLen > maxLen) {
				maxLen = curLen;
			}
		}
		else {
			curLen = 1;
		}
	}
	cout << maxLen;
}
