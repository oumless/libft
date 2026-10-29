/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:58:42 by username          #+#    #+#             */
/*   Updated: 2026/10/27 15:00:02 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	set_check(char s1, char const *set)
{
	int	j;

	j = 0;
	while (set[j])
	{
		if (s1 == set[j])
			return (1);
		j++;
	}
	return (0);
}

char	*ft_strtrim(char const *s1, char const *set)
{
	char	*p;
	int		start;
	int		end;
	int		k;

	if (s1 == NULL || set == NULL)
		return (NULL);
	start = 0;
	k = 0;
	end = ft_strlen(s1) - 1;
	while (s1[start] && set_check(s1[start], set))
		start++;
	while (end >= start && set_check(s1[end], set))
		end--;
	p = malloc(end - start + 2);
	if (!p)
		return (NULL);
	k = 0;
	while (start <= end)
		p[k++] = s1[start++];
	p[k] = '\0';
	return (p);
}

// int main()
// {
//     ft_strtrim(0, "da");
// }
