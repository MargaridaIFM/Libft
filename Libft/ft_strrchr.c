/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:57:51 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/17 14:01:36 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

/* Finds the last occurrence of the specified character in a string
Returns a pointer to this occurrence or NULL if not found. */
char	*ft_strrchr(const char *s, int c)
{
	int	idx;

	idx = ft_strlen(s);
	while (idx >= 0)
	{
		if (s[idx] == (char)c)
			return ((char *)s + idx);
		idx--;
	}
	if (c == '\0')
		return ((char *)s + idx);
	return (NULL);
}

/* int main()
{
	printf("Mine: %s\n", ft_strrchr("teste", 't'));
	printf("Mine: %s\n", strrchr("teste", 't'));
} */