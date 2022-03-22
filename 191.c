int hammingWeight(uint32_t n) {
    int m=0;
    while(n)
    {
       if(n%2!=0)
       m+=1;
       n>>=1;
    }
  return m;
}
