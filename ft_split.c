/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhadm <ybouhadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:00:00 by ybouhadm          #+#    #+#             */
/*   Updated: 2026/10/15 00:00:00 by ybouhadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_words(char const *s, char c)
{
	size_t	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s != c && *s)
			s++;
	}
	return (count);
}

static void	free_words(char **words, size_t count)
{
	while (count > 0)
		free(words[--count]);
	free(words);
}

char	**ft_split(char const *s, char c)
{
	char	**words;
	size_t	i;
	size_t	len;

	words = (char **)malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!words)
		return (NULL);
	i = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		len = 0;
		while (s[len] && s[len] != c)
			len++;
		if (!len)
			break ;
		words[i] = ft_substr(s, 0, len);
		if (!words[i])
			return (free_words(words, i), NULL);
		i++;
		s += len;
	}
	words[i] = NULL;
	return (words);
}
