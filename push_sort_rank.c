// int find_min(t_link *num)
// {
//     int min;
//     t_link  *tmp;

//     tmp = num;
//     min = tmp->value;
//     while (tmp)
//     {
//         if (tmp->value < min)
//             min = tmp->value;
//         tmp = tmp->link;
//     }
//     return (min);
// }

// int find_max(t_link *num)
// {
//     int max;
//     t_link  *tmp;

//     tmp = num;
//     max = tmp->value;
//     while (tmp)
//     {
//         if (tmp->value < max)
//             max = tmp->value;
//         tmp = tmp->link;
//     }
//     return (max);
// }

// int ft_rank_minmax(t_link *num, int mode)
// {
//     int minmax;
//     t_link  *tmp;

//     tmp = num;
//     minmax = tmp->value;
//     while (tmp)
//     {
//         if (tmp->value < minmax && mode == 0)
//             minmax = tmp->value;
//         else if (tmp->value > minmax && mode == 10)
//             minmax = tmp->value;
//         tmp = tmp->link;
//     }
//     return (minmax);
// }
