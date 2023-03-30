#include<iostream>
#include <set>

using namespace std;

//Write function count() here.
unsigned int count(const int data[],unsigned int i){
	set<int> a;
	for(unsigned int n=0;n<i;n++){
		a.insert(data[n]);
	}
	return	a.size(); 
}
int main(){	
	int data[] = {1,2,4,5,4,8,2,1,2,4,6,1,4,4,4,2,1,0,12}; 
	
	cout << "There are " << count(data,sizeof(data)/sizeof(int)); 
	cout << " different numbers in data.";
	
	return 0;
}