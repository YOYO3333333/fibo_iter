unsigned long fibo_iter(unsigned long n)
{
    if (n == 0)
    {
        return 0;
    }
    else if (n == 1)
    {
        return 1;
    }
    unsigned long n1 = 1;
    unsigned long n2 = 0;
    unsigned long i = 0;
    unsigned long fibo;
    while (i < n)
    {
        fibo = n1 + n2;
        n1 = n2;
        n2 = fibo;
        i = i + 1;
    }
    return fibo;
}
