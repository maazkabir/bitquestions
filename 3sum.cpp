int Solution::threeSumClosest(vector<int> &A, int B) {
    int r;
    int tmp=INT_MAX;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-2;i++)
    {
        int j=i+1;
        int k=A.size()-1;
        while(j<k)
        {
            int sum=A[i]+A[j]+A[k];
            if(abs(sum-B)<tmp)
            {
                r=sum;
                tmp=abs(sum-B);
            }
            if(sum>B){
                k--;
            }
            else j++;
        }
    }
    return r;
}
