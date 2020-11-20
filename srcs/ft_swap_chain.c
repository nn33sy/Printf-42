void ft_swap_chain(char *chain, int length)
{
        char inter;
        if (length >= 2)
        {
                inter = chain[0];
                chain[0] = chain[length - 1];
                chain[length - 1] = inter;
                ft_swap_chain(&chain[1], length - 2);
        }
}
