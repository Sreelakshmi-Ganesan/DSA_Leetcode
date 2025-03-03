bool isPalindrome(int x) {
    if(x<0 || (x%10 == 0 && x!=0))
    return false;

    int revh=0;
    while(x>revh)
    {
        revh=revh*10+(x%10);
        x=x/10;
    }
    if(x==revh || x==(revh/10))
    return true;
    else return false;
}
    
