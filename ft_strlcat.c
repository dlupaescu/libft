/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 17:16:48 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/12 18:19:12 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	char	*d;
	size_t	len;
	size_t	dst_len;

	d = dst;
	len = size;
	while (len && *d)
	{
		d++;
		len--;
	}
	dst_len = dst - d;
	d[0] = src[0];
	return (0);
}
