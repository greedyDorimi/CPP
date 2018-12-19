vector<int> Solution::repeatedNumber(const vector<int> &A) {
    long long n=A.size();
    long long sum1=0,ssum1=0,sum2=0,ssum2=0;
    sum1=((n)*(n+1))/2;
    ssum1=((n)*(n+1)*((2*n)+1))/6;
    for(int i=0;i<n;i++){
        sum2+=A[i];
        ssum2+=A[i]*1LL*A[i];
    }
    vector <int> m;
    long long S=(ssum2-ssum1)/(sum2-sum1);
    int a=(sum2-sum1)+S;
    a/=2;
    int b=a-(sum2-sum1);
    m.push_back(a);
    m.push_back(b);
    return m;
}
