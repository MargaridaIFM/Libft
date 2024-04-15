/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mfrancis <mfrancis@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/09 13:55:14 by mfrancis          #+#    #+#             */
/*   Updated: 2024/04/15 17:29:26 by mfrancis         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

// to separete the words
static void	ft_split_words(char **array, char const *s, char c)
{
	char	**word;
	size_t	word_len;
	size_t	i;

	i = 0;
	word_len = 0;
	word = array;
	while (s[i])
	{
		if (s[i] != c)
		{
			word_len++;
			if (s[i + 1] == '\0' || s[i + 1] == c)
			{
				*word = ft_substr(s, i - word_len + 1, word_len);
				word++;
				word_len = 0;
			}
		}
		i++;
	}
	*word = NULL;
}
// To count how many words

static int	ft_count_words(char const *s, char sep)
{
	int	counter;
	int	idx;

	counter = 0;
	idx = 0;
	if (s[idx] != sep)
		counter++;
	while (s[idx])
	{
		if (s[idx] == sep)
		{
			while (s[idx] == sep)
				idx++;
			if (s[idx] != '\0')
				counter++;
			if (s[idx] == '\0')
				return (counter);
		}
		idx++;
	}
	return (counter);
}

char	**ft_split(char const *s, char c)
{
	char	**array;
	int		size;

	if (!s)
		return (NULL);
	size = ft_count_words(s, c);
	array = malloc((size + 1) * sizeof(char *));
	if (!array)
		return (NULL);
	ft_split_words(array, s, c);
	return (array);
}
/* int main()
{
    char const*str_split = "";
    char sep_split = ' ';
    char **result_split =   ft_split(str_split, sep_split);
    for(int i = 0; result_split[i]; i++)
        printf("Print: %s\n", result_split[i]);
    for(int j = 0; result_split[j]; j++)
    {
        free(result_split[j]);
    }
    free(result_split);
} */