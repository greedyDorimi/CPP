vector<int> Solution::plusOne(vector<int> &A) {
    int n=A.size();
    
    int c=1;
    vector <int> B;
    for(int i=n-1;i>=0;i--){
        int d=A[i]+c;
        if(d>=10) {
            B.push_back(d%10);
            c=d/10;
        }
        else {
            B.push_back(A[i]+c);
            c=0;
        }
    }
    if(c!=0) {B.push_back(1);
    }
    reverse(B.begin(),B.end());
    int ind = -1; 
    for (int i = 0; i <B.size(); i++) { 
        if (B[i] != 0) { 
            ind = i; 
            break; 
        } 
    } 
    if (ind == -1) { 
        return B; 
    } 
    vector <int> b; 
  
    for (int i = 0; i < B.size() - ind; i++) 
        b.push_back(B[ind + i]); 
    
    return b;
}
