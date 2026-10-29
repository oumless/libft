/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:53:54 by ourhoutt          #+#    #+#             */
/*   Updated: 2026/10/28 22:05:33 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memmove(void *dest, const void *src, size_t n)
{
	unsigned char		*d_ptr;
	const unsigned char	*s_ptr;
	size_t				i;

	d_ptr = (unsigned char *) dest;
	s_ptr = (const unsigned char *) src;
	i = -1;
	if (!dest && !src)
		return (NULL);
	if (d_ptr <= s_ptr)
	{
		while (++i < n)
			d_ptr[i] = s_ptr[i];
	}
	else
	{
		while (n > 0)
		{
			n--;
			d_ptr[n] = s_ptr[n];
		}
	}
	return (dest);
}
/*int main()
{
char dest[20] = "123456789";
//const char *src = "123456789";
ft_memmove(dest+2 , dest, 5);
printf("%s\n", dest);
memmove(dest+2, dest, 5);
printf("%s", dest);
}*/
