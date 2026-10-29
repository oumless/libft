/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strrchr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:58:26 by username          #+#    #+#             */
/*   Updated: 2026/10/27 19:05:16 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strrchr(const char *str, int c)
{
	int			i;
	const char	*last_occ;

	i = 0;
	last_occ = 0;
	while (str[i])
	{
		if (str[i] == (unsigned char) c)
		{
			last_occ = &str[i];
		}
		i++;
	}
	if ((unsigned char) c == '\0')
		return ((char *) & str[i]);
	return ((char *) last_occ);
}
