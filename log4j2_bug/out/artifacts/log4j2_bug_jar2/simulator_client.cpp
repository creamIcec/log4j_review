#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;
int main() {
	string cmd;
	cout << "******mc����������������ģ����******\n";
	while (1) {
		cout << "������������:\n";
		cin >> cmd;
		cmd = "java -jar log4j2_bug.jar " + cmd;
		cin.get();
		char* target = new char[cmd.length()];
		strcpy(target, cmd.c_str());
		system(target);
		//cin.get();
		cin.sync();
		cin.clear();
	}
	return 0;
}
