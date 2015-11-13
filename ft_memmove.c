/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 13:22:25 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/10 19:07:21 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dst, const void *src, size_t len)
{
	char *d;
	char *s;
	
	d = (char*)dst;
	s = (char*)src;
	if (d == s)
		return dst;
	while(len-- && *d)
	{
		*d++ = *s++;
	}
	return dst;
}
