vector < int > merge(vector < int > &a, vector < int > &b){
    vector <int>s;
    int ap =0;
    int bp =0;
    while(ap<a.size() && bp<b.size()){
        if(a[ap]<b[bp]){
            if(s.size() == 0 || s.back() != a[ap])
                s.push_back(a[ap]);
            ap++;
        }else{
            if(s.size() == 0 || s.back() != b[bp])
                s.push_back(b[bp]);
            bp++;
        }
    }
    while(ap<a.size()){
        if(s.size() == 0 || s.back() != a[ap])
                s.push_back(a[ap]);
            ap++;
    }
    while(bp<b.size()){
        if(s.size() == 0 || s.back() != b[bp])
                s.push_back(b[bp]);
            bp++;
    }
    return s;
}

vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    return merge(a, b);
   
}