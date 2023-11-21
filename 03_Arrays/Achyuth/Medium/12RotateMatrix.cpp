#include<vector>

void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	int n=mat.size();
	vector<vector<int>> v(n, vector<int>(n, 0));
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
           v[j][n-1-i]=mat[i][j];
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){
           mat[i][j]=v[i][j];
		}
	}
}
//Slitely Optimal Solution
void rotateMatrix(vector<vector<int>> &mat){
	// Write your code here.
	for(int i=0;i<n-1;i++){
		for(int j=i+1;j<n;j++){
			swap(mat[i][j],mat[j][i]);
		}
	}
	for(int i=0;i<n;i++){
		for(int j=0;j<n/2;j++){
			swap(mat[i][j],mat[i][n-1-j]);
		}
	}
}
