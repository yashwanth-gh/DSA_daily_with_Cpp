// -----  O(N^2) ----------
// space comp O(N+M)

#include <bits/stdc++.h> 
vector<vector<int>> zeroMatrix(vector<vector<int>> &matrix, int n, int m) {
	// Write your code here.
	int arrN[n] = {0};
	int arrM[m] = {0};
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(matrix[i][j] == 0){
				arrN[i]=1;
				arrM[j]=1;
			}
		}

	}
	for(int i=0;i<n;i++){
		for(int j=0;j<m;j++){
			if(arrN[i] || arrM[j]){
				matrix[i][j]=0;
			}
		}

	}
	return matrix;

}

// ------------ Better -----------
// involves space comp as O(1)