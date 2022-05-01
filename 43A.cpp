#include<bits/stdc++.h>
using namespace std;
int main() {
	int t;
	cin >> t;
	int c1(0), c2(0); // creating count of win of teams
	string arr[t];
	set<string> st; 
	for (int i = 0 ; i < t; i++) {
		cin >> arr[i];
		st.insert(arr[i]);
	}
	string win = *st.begin(); //first element ;
	for (auto it : arr) {
		if (win == it) c1++;  
		else c2++; // since there are only 2 teams so if first element of set is not the wining team  , so definitely last element of set will be ans ; 
	}
	if (c1 > c2) cout << win;
	else cout << *(st.rbegin()); //print last element ;
}
