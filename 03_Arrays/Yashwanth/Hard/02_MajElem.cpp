//! ----------------- TC: O(N)+O(N)+O(N*logN)

#include <bits/stdc++.h>
vector<int> majorityElement(vector<int> v) {
	// Write your code here
	map<int,int>mpp;
	vector<int>sol;
	int maj = round(v.size()/3);

	for(auto ele:v){
		if(mpp.find(ele) == mpp.end()){
			mpp[ele] = 1;
		}else{
			mpp[ele]++;
		}
	}

	for(auto elm:mpp){
		if(elm.second > maj){
			sol.push_back(elm.first);
		}
	}
	return sol;
}