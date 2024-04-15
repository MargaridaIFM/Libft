/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strchr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:21 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/14 19:17:37 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the first occurrence (index) of the specified character in a string
Returns a pointer to this occurrence or NULL if not found. */
char	*ft_strchr(const char *s, int c)
{
	while (*s)
	{
		if (*s == (unsigned char)c)
			return ((char *)s);
		s++;
	}
	if ((unsigned char)c == '\0')
		return ((char *)s);
	return (NULL);
}

/* int main (void)
{
	printf("my: %s\n", ft_strchr("teste", 'e'));
	printf("original: %s\n", strchr( "teste",'e'));
} */