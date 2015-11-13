/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:24:58 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/11 10:57:12 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char			*src;
	unsigned char	ch;
	unsigned long	i;

	src = (char*)s;
	ch = (unsigned char)c;
	i = 0;
	while (i < n)
	{
		if (*(src + i) == ch)
			return (src + i);
		i++;
	}
	return (NULL);
}
