#include <iostream>
#include <vector>
#include <map>

using namespace std;

int main(){

	map<string, string> m;

	m["student1"] = "Omarov";
	m["student2"] = "Omarova";
	m["student3"] = "Turarov";

	cout << m["student3"];

	return 0;
}

