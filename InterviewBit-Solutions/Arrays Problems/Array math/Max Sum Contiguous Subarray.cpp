
int Solution::maxSubArray(const vector<int> &A) {
    int f=0,ans=INT_MIN;;
    for(int i=0;i<A.size();i++){
        if(A[i]>0) {
            f=1;
            break;
        }
    }
    if(f==1){
    int sum=0;
    for(int i=0;i<A.size();i++){
        if(sum+A[i]>0){
            sum+=A[i];
        }
        else sum=0;
        ans=max(ans,sum);
    }
    }
    else {
        int max=INT_MIN;
        for(int i=0;i<A.size();i++){
            if(A[i]>max) max=A[i];
        }
         ans=max;
    }
    return ans;
}
