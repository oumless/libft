/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:58:13 by username          #+#    #+#             */
/*   Updated: 2026/10/29 02:37:39 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <bsd/string.h>

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t	i;
	size_t	j;

	i = 0;
	if (!big && !len)
		return (0);
	if (little[0] == '\0')
		return ((char *) big);
	while (big[i] && i < len)
	{
		j = 0;
		while (big[j + i] == little[j] && little[j] && i + j < len)
		{
			j++;
		}
		if (!little[j])
			return ((char *) & big[i]);
		i++;
	}
	return (NULL);
}

// int main()
// {
// 	strnstr(NULL, "a", 1);
// 	// printf("%p",strnstr(NULL, "a", 0));
// }
