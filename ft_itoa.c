/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:49:25 by ourhoutt          #+#    #+#             */
/*   Updated: 2026/10/28 21:27:27 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	nbrlen(int n)
{
	int	len;

	len = 0;
	if (n == 0)
		return (1);
	if (n < 0)
	{
		len++;
		n = -n;
	}
	while (n > 0)
	{
		n = n / 10;
		len++;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	int		len;
	char	*p;

	if (n == -2147483648)
		return (ft_strdup("-2147483648"));
	len = nbrlen(n);
	p = malloc(len + 1);
	if (!p)
		return (NULL);
	p[len] = '\0';
	if (n == 0)
		p[0] = '0';
	if (n < 0)
	{
		p[0] = '-';
		n = -n;
	}
	while (n > 0)
	{
		p[--len] = (n % 10) + '0';
		n /= 10;
	}
	return (p);
}
// #include <stdio.h>

// int	main(void)
// {
// 	printf("%s\n", ft_itoa(0));
// 	printf("%s\n", ft_itoa(655444));
// 	printf("%s\n", ft_itoa(-1));
// 	printf("%s\n", ft_itoa(-2147483648));
// }
