void ft_putnbr_ope(long n, char *chain)
{
        int     i;

        i = 0;
        if (n < 0)
        {
                chain[i++] = '-';
                n *= -1;
        }
        if (n < 10)
                {
                        chain[i++] = n + '0';
                        chain[i] = '\0';
                }
        else
        {
                chain[i++] = (n % 10) + '0';
                ft_putnbr_ope(n / 10, &chain[i]);
        }
}
