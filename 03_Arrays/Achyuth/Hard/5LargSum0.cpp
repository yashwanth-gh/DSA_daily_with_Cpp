#include<vector>

int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int count=0;
	for(int i=0;i<arr.size();i++){
		int sum=0;
		int x=0;
		for(int j=i;j<arr.size();j++){
             sum+=arr[j];
			 if(sum==0){
               x=j-i+1;
			 }
       
		}
		count=max(x,count);
	}
	return count;
}

//Optimal Solution
#include<vector>
#include<unordered_map>
int getLongestZeroSumSubarrayLength(vector<int> &arr){
	// Write your code here.
	int count=0;
	unordered_map<int,int> mp;
	int sum=0;
	for(int i=0;i<arr.size();i++){
		sum+=arr[i];
		if(sum==0){
			count=i+1;
		}
		else{
          if(mp.find(sum)!=mp.end()){
			count=max(count,i-mp[sum]);
		    }
		  else{
			mp[sum]=i;
		   }
		} 
		
	}
	return count;
}