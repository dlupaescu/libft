/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 16:01:40 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/11 17:11:38 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncpy(char *dst, const char *src, size_t n)
{
	char			*d;
	unsigned long	i;

	d = dst;
	i = 0;
	while (i < n && *src)
	{
		*d++ = *src++;
		i++;
	}
	if (i != n)
		while (i < n)
		{
			*d++ = '\0';
			i++;
		}
	return (dst);
}
