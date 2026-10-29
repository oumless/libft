/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_bzero.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:44:05 by ourhoutt          #+#    #+#             */
/*   Updated: 2026/10/28 21:20:01 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	ft_bzero(void *s, size_t n)
{
	unsigned char	*ptr;
	size_t			i;

	ptr = (unsigned char *) s;
	i = 0;
	while (i < n)
	{
		ptr[i] = 0;
		i++;
	}
}
/*int main()
{
char p[10] = "123456789";
ft_bzero(p, 5);

int i = 0;
while (i < 10)
{
printf("p[%d] = %d (ASCII: %c)\n", i, p[i], p[i]);
i++;
}
return 0;
}*/
