/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: sel-khao <sel-khao <marvin@42.fr>>         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/27 13:53:18 by sel-khao          #+#    #+#             */
/*   Updated: 2024/12/01 20:41:42 by sel-khao         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	count_words(char const *s, char c)
{
	size_t	wordcount;
	size_t	flag;

	if (!s)
		return (0);
	wordcount = 0;
	flag = 0;
	while (*s)
	{
		if (*s != c && flag == 0)
		{
			wordcount++;
			flag = 1;
		}
		else if (*s == c)
			flag = 0;
		s++;
	}
	return (wordcount);
}

static void	ft_freearr(char **words, size_t i)
{
	if (words)
	{
		while (i > 0)
		{
			i--;
			free(words[i]);
		}
		free(words);
	}
}

static void	sub_str(char **words, char const *s, char c, size_t n_words)
{
	size_t		i;
	const char	*start;

	i = 0;
	while (*s && i < n_words)
	{
		while (*s == c)
			s++;
		start = s;
		while (*s != c && *s)
			s++;
		if (s > start)
			words[i] = ft_substr(start, 0, s - start);
		if (!words[i])
		{
			ft_freearr(words, i);
			return ;
		}
		i++;
	}
	words[i] = NULL;
}
/* the function sub_str split (s) into words and
store them in the words array, splitting based on a delimiter,
and storing up to n_words words.
If any allocation fails, it'll free all the prev allocated words */

char	**ft_split(char const *s, char c)
{
	char	**result;
	size_t	word_count;

	if (!s)
		return (NULL);
	word_count = count_words(s, c);
	result = (char **)malloc((word_count + 1) * sizeof(char *));
	if (!result)
		return (NULL);
	sub_str(result, s, c, word_count);
	if (!result[0] && word_count > 0)
		return (NULL);
	return (result);
}

/*int main()
{
    char **result;
    char *str = "buy me kinder bueno..";
	size_t	i;

    result = ft_split(str, ' ');
	i = 0;
    if (result)
    {
        while (result[i])
        {
            printf("substr %zu: %s\n", i, result[i]);
            free(result[i]); 
			i++;
        }
        free(result);
    }
    return (0);
}*/