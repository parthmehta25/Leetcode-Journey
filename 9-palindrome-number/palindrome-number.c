bool isPalindrome(int x) {
     int Num=x;
     long long rev=0;
    if(x>0)
    {
       
        while(Num!=0)
        {
            rev=rev*10+Num%10;
            Num=Num/10;
        }
      
    }
      if(rev==x)
        {
            return true;
        }
        else{
            return false;
        }
}