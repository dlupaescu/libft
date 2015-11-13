/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strcat.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/11 18:07:15 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/12 16:59:43 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strcat(char *s1, const char *s2)
{
	char			*s;
	unsigned long	len;

	s = s1;
	len = ft_strlen(s);
	s += len;
	while(*s2)
		*s++ = *s2++;
	*s = '\0';
	return (s1);
}
