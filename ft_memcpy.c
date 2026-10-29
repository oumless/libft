/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:53:07 by username          #+#    #+#             */
/*   Updated: 2026/10/27 19:03:34 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	const unsigned char	*s_ptr;
	size_t				i;

	d_ptr = (unsigned char *) dest;
	s_ptr = (const unsigned char *) src;
	i = 0;
	if (!dest && !src)
		return (NULL);
	while (i < n)
	{
		d_ptr[i] = s_ptr[i];
		i++;
	}
	return (dest);
}
/*int main()
{
char dest[] = "123456789";
//ft_memcpy(dest+2, dest, 5);
//printf("%s\n", dest);
//memcpy(dest+2, dest, 5);
//printf("%s", dest);
}*/
