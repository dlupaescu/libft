/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:17:23 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/11 13:51:54 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dst, const void *src, size_t n)
{
	unsigned long i;
	char *d;
	char *s;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	while (i < n)
	{
		*(d + i) = *(s + i);
		i++;
	}
	return dst;
}
