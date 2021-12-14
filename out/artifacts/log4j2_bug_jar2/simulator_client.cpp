#include <iostream>
#include <windows.h>
#include <cstring>
using namespace std;
int main() {
	string cmd;
	cout << "******mc聊天栏攻击服务器模拟器******\n";
	while (1) {
		cout << "输入聊天内容:\n";
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
