/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:19:43 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/10 18:57:04 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned long i;
	char *d;
	char *s;
	unsigned char ch;

	i = 0;
	d = (char*)dst;
	s = (char*)src;
	ch = (unsigned char)c;
	while (i < n)
	{
		*(d + i) = *(s + i);
		if (*(s + i) == ch)
			return (dst + i);
		i++;
	}
	return (NULL);
}
