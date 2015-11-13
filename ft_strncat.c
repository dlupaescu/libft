/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/12 16:40:24 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/12 17:43:19 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strncat(char *s1, const char *s2, size_t n)
{
	char			*s;
	unsigned long	len;
	unsigned long	i;

	s = s1;
	len = ft_strlen(s);
	i = 0;
	s += len;
	while (*s2 && i < n)
	{
		*s++ = *s2++;
		i++;
	}
	*s = '\0';
	return (s1);
}
