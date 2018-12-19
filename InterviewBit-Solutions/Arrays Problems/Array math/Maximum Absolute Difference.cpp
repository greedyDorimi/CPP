int max_element(int b[],int n){
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<b[i]) max=b[i];
    }
    return max;
}
int min_element(int b[],int n){
    int min=INT_MAX;
    for(int i=0;i<n;i++){
        if(min>b[i]) min=b[i];
    }
    return min;
}
int Solution::maxArr(vector<int> &A) {
    int n=A.size();
    int ans=-INT_MAX;
    int b[n],c[n];
    for(int i=0;i<n;i++){
        b[i]=A[i]+i;
        c[i]=A[i]-(i);
    }
    int h[4];
    h[0]=max_element(b,n);
    h[1]=min_element(b,n);
    h[2]=max_element(c,n);
    h[3]=min_element(c,n);
    ans=max(abs(h[0]-h[1]),abs(h[3]-h[2]));
    
    return ans;
}
