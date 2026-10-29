/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strdup.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:56:48 by username          #+#    #+#             */
/*   Updated: 2026/10/27 14:59:41 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strdup(const char *s)
{
	size_t	i;
	size_t	s_len;
	char	*p;

	s_len = ft_strlen(s) + 1;
	p = malloc(s_len);
	if (!p)
		return (NULL);
	i = 0;
	while (i < s_len)
	{
		p[i] = s[i];
		i++;
	}
	return (p);
}
