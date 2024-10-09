/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gabastos <gabastos@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/08 16:07:45 by gabastos          #+#    #+#             */
/*   Updated: 2024/10/09 09:45:10 by gabastos         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	size_t	count;
	char	*d;
	char	*s;

	count = 0;
	d = (char *)dest;
	s = (char *)src;
	if (d < s || d > s + n)
	{
		while (count < n)
		{
			d[count] = s[count];
			count++;
		}
	}
	else
	{
		count = n;
		while (count > 0)
		{
			d[count - 1] = s[count - 1];
			count--;
		}
	}
	return (dest);
}
