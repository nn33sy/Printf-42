int ft_putnbr_length(long n)
{
        int count;

        count = 0;
        if (n < 0)
        {
                count++;
                n *= -1;
        }
        if (n < 10)
                count ++;
        else
                count += 1 + ft_putnbr_length(n / 10);
        return (count);
}
