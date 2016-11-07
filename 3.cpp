#include <iostream>
#include <vector>
#include <map>
using namespace std;

struct sobject
{
	string name;
	int cnt;
};



std::vector<sobject> v;

int find_o(string name){
	int res = -1;

	for(int i = 0; i < v.size(); ++i){
		if(v[i].name == name){
			res = i;
			break;
		}
	}

	return res;
}

int main(){

	string name,command;

	while(true){
		cin >> command;
		if(command == "exit"){
			break;
		}else if (command == "in"){
			cin >> name;
			int ind = find_o(name);
			if(ind != -1){
				v[ind].cnt++;
			}else{
				sobject o;
				o.name = name;
				o.cnt = 1;
				v.push_back(o);
			}
		}if (command == "out"){
			cin >> name;
			int ind = find_o(name);
			if(ind != -1){
				v[ind].cnt--;
			}
		}
	}

	for(int i = 0 ; i < v.size();++i){
		cout << v[i].name << " " << v[i].cnt << endl; 
	}

	return 0;
}

