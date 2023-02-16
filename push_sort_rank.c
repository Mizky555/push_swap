int ft_check_min(t_list *num)
{
    int min;
    t_list  *tmp;

    tmp = num;
    min = tmp->value;
    while (tmp)
    {
        if (tmp->value < min)
            min = tmp->value;
        tmp = tmp->value;
    }
    return (min);
}

void    ft_sort_rank(t_list *num)
{
    int min;
    t_list  *tmp;

    min = ft_check_min(num);
    while ()
}