/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:32:26 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 13:32:26 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_atoi(const char *str)
{
    int number;
    int sign;

    number = 0;
    sign = 1;
    while (*str == ' ')
        str++;
    if (*str == '-')
    {    
        sign = -1;
        str++;
    } else if(*str == '+')
        str++;
    while (*str >= '0' && *str <= '9')
    {
        number = number * 10 + (*str - '0');
        str++;
    }
    return (number * sign);
}
