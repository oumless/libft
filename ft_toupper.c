/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_toupper.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:59:56 by username          #+#    #+#             */
/*   Updated: 2026/10/27 15:00:08 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

int	ft_toupper(int c)
{
	if (c >= 'a' && c <= 'z')
	{
		c -= 32;
	}
	return (c);
}
/*int main()
{
printf("%c\n",ft_toupper('i'));
printf("%c\n",ft_toupper('D'));
printf("%c\n",ft_toupper('@'));
return  0;
}*/
