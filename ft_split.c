/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:56:36 by ourhoutt          #+#    #+#             */
/*   Updated: 2026/10/29 00:56:54 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdlib.h>
#include "libft.h"
#include <stdio.h>

static int	count_words(char const *s, char c)
{
	int	count;

	count = 0;
	while (*s)
	{
		while (*s == c && *s)
			s++;
		if (*s)
			count++;
		while (*s && *s != c)
			s++;
	}
	return (count);
}

static void	*free_p(char **p)
{
	int	i;

	i = 0;
	while (p[i] != NULL)
	{
		free(p[i]);
		i++;
	}
	free(p);
	return (NULL);
}

int	fill_fn(const char *s, const char *ptr, char **p, char c)
{
	int	i;
	int	j;

	j = 0;
	i = 0;
	while (s[i])
	{
		while (s[i] == c && s[i])
			i++;
		if (s[i] == '\0')
			break ;
		ptr = &s[i];
		while (s[i] && s[i] != c)
			i++;
		p[j] = ft_substr(ptr, 0, &s[i] - ptr);
		if (p[j] == NULL)
			return (free_p(p), -1);
		j++;
	}
	return (j);
}

char	**ft_split(char const *s, char c)
{
	char		**p;
	int			i;
	const char	*ptr;

	i = 0;
	if (s == NULL)
		return (NULL);
	p = malloc((count_words(s, c) + 1) * sizeof(char *));
	if (!p)
		return (NULL);
	i = fill_fn(s, ptr, p, c);
	if (i == -1)
		return (NULL);
	p[i] = NULL;
	return (p);
}

// int	main(void)
// {
// 	char const	*s = "hello world from triz";

// 	for (int i = 0; ft_split(s, ' ')[i]; i++)
// 		printf("%s\n", ft_split(s, ' ')[i]);
// }
