#include <iostream>
#include <vector>


using namespace std;


struct my_int{
	int value;
	int place;
};

bool f(my_int l, my_int r){
	if(l.value <= r.value) return true;
	return false;
}

int main(){


	std::vector<my_int> v;

	int n;

	cin >> n;

	for(int i = 0; i < n; ++i){
		cin >> x;
		my_int vv;
		vv.value = x;
		vv.place = i;
		v.push_back(vv);
	}

	sort(v.begin(),v.end(),f);

	for(int i = 0; i < n; ++i){
		cout << v[i].value << " " << v[i].place << endl;
	}
	
	return 0;
}

