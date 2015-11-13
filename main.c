/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: dlupaesc <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/05 10:19:12 by dlupaesc          #+#    #+#             */
/*   Updated: 2015/11/12 18:00:58 by dlupaesc         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int		main(void)
{
	char str1[] = "abc";
	char str2[] = "";
	char str3[100] = "123";
	char str4[100] = "123";
	
	//printf("\n memmove: \t%s", memmove(str2, str1, 3));
	//printf("\n ft_memmove: \t%s", ft_memmove(str4, str3, 3));

	//printf("\n\n memchr: \t%s", memchr(str2, 'u', 10));
	//printf("\n ft_memchr: \t%s", ft_memchr(str2, 'u', 10));
	
	//printf("\n\n memcmp: \t%d", memcmp(str2, str4, 6));
	//printf("\n ft_memcmp: \t%d\n", ft_memcmp(str2, str4, 6));
	
	//printf("\n strlen: \t%lu", strlen(str1));
	//printf("\n ft_strlen: \t%lu\n", ft_strlen(str1));

	//printf(" strdup: \t%s\n", strdup(str4));
	//printf(" ft_strdup: \t%s\n", ft_strdup(str4));
	
	//printf(" strcpy: \t%s\n", strcpy(str4, str1));
	//printf(" ft_strcpy: \t%s\n", ft_strcpy(str4, str1));
	
	/*printf(" strncpy: \t%s\n", strncpy(str3, str1, 10));
	printf(" ft_strncpy: \t%s\n", ft_strncpy(str4, str1, 10));
	int i; 
	i = 0;
	while (i < 15)
	{
		printf("\n.%c.", str3[i]);
		i++;
	}
	printf("\n\n");
	i = 0;
	while (i < 15)
	{
		printf("\n.%c.", str4[i]);
		i++;
	}
	*/

	//printf(" strcat: \t%s\n", strcat(str4, str1));
	//printf(" ft_strcat: \t%s\n", ft_strcat(str4, str1));
	
	//printf(" strncat: \t%s\n", strncat(str3, str1, 2));
	//printf(" ft_strncat: \t%s\n", ft_strncat(str4, str1, 2));

	//printf(" strlcat: \t%lu\t%s\n", strlcat(str3, str1, 4), str3);
	//printf(" ft_strlcat: \t%lu\t%s\n", ft_strlcat(str4, str1, 4), str4);
	
	return (0);
}
