/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: marvin <marvin@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 13:32:40 by marvin            #+#    #+#             */
/*   Updated: 2024/10/10 13:32:40 by marvin           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void *ft_calloc(size_t num, size_t size)
{
    void    *memory;
    char    *ptr;
    size_t  i;
    
    memory = malloc(num * size);
    ptr = (char *)memory;
    i = 0;
    if (!memory)
        return (NULL);
    while (i < num * size)
    {
            ptr[i] = 0;
            i++;
    }
    return(memory);
}
