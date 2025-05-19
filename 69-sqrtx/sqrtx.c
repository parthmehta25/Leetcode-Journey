int mySqrt(int x) {
   int ans=0; 
   if(x<2)
   {
    return x;
   } 
   int left=1,right=x,mid;
   while(left<=right)
   {
    mid=left+(right-left)/2;
    if(mid<=x/mid)
    {
        ans=mid;
        left=mid+1;
    }
    else
    {
        right=mid-1;
    }
   }
   return ans;
}