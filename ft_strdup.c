/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 12:39:25 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/11 14:00:41 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s1)
{
	unsigned int	len;
	char			*s2;

	len = ft_strlen(s1);
	s2 = (char*)malloc(len + 1);
	if (s2 == NULL)
		return (NULL);
	s2 = (char*)ft_memcpy(s2, s1, len);
	*(s2 + len) = '\0';
	return (s2);
}
