#include <bits/stdc++.h> 

int majorityElement(vector<int> v) {
	// Write your code here
	map<int,int>mpp;
	for(int i=0;i<v.size();i++){
		if(mpp.find(v[i]) != mpp.end()){
			mpp[v[i]]++;
		}else{
			mpp[v[i]] = 1;
		}
		if(mpp[v[i]] >= (v.size()/2)+1){
			return v[i];
		}
	}

}