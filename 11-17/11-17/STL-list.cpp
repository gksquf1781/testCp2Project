#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

void dump(list<string>&l) {
	list<string>::iterator iter = l.begin();
	
	while (iter != l.end()) {
		cout << *iter << endl;
		iter++;
	}
}//프린트 해주는 함수
/*void main() {
	list<string>names;
	names.insert(names.begin(), "konkuk");
	names.insert(names.end(), "university");
	names.insert(names.end(), "SCLAB");
	names.insert(names.end(), "CSY");
	dump(names);
	cout << "===" << endl;
	names.reverse();
	dump(names);
	while (1);
}*/