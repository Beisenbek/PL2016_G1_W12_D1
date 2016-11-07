#include <iostream>
#include <vector>
#include <map>
using namespace std;

int main(){

	string name,command;
	map<string, int> m;

	while(true){
		cin >> command;
		if(command == "exit"){
			break;
		}else if (command == "in"){
			cin >> name;
			m[name]++;
		}if (command == "out"){
			cin >> name;
			if(m[name] >0) m[name]--;
		}
	}

	map<string,int>::iterator it;

	for(it = m.begin();it!=m.end();++it){
		cout << (*it).first << " " << (*it).second << endl;
	}

	return 0;
}

