vector<int> getFrequencies(vector<int>& v) {
    // Write Your Code Here
    map<int,int>mpp;
    for(auto elem:v){
        mpp[elem]+=1;
    }
    int high=0;
    int highElem=v[0];
    int low=INT_MAX;
    int lowElem=v[0];
    for(auto pair:mpp){
        if (pair.second > high) {
          high = pair.second;
          highElem = pair.first;
        }
        if (pair.second < low) {
          low = pair.second;
          lowElem = pair.first;
        }

    }
    return {highElem, lowElem};
}