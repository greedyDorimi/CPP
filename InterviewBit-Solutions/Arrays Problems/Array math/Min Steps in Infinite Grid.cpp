int di(int x1,int y1,int x2,int y2){
    int xx=abs(x1-x2);
    int yy=abs(y1-y2);
    return max(xx,yy);
}
int Solution::coverPoints(vector<int> &A, vector<int> &B) {
    int mv=0;
    for(int i=0;i<A.size()-1;i++){
        mv+=di(A[i],B[i],A[i+1],B[i+1]);
    }
    if(A.size()>1)
    return mv;
    else return 0;
}
