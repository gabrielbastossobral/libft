/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 15:46:30 by gabastos          #+#    #+#             */
/*   Updated: 2024/10/08 16:21:02 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*p;
	char	*b;

	count = 0;
	p = (char *)src;
	b = (char *)dest;
	while (count < n)
	{
		b[count] = p[count];
		count++;
	}
	return (dest);
}
