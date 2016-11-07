#include <iostream>
#include <set>
#include <ctype.h>
       
using namespace std;


int main(){


	set<char> used;
	set<char> ans;

	string str;
	getline(cin,str);

	for(int i = 0; i < str.length(); ++i){
		if(isdigit(str[i])){
			if(used.find(str[i]) != used.end()){
				ans.insert(str[i]);
			}else{
				used.insert(str[i]);
			}	
		}
	}

	if(!ans.empty()){
		for(set<char>::iterator i = ans.begin(); i != ans.end();++i){
			cout << *i;
		}
	}else{
		cout << "NO";
	}


	return 0;
}