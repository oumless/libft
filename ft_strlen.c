/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlen.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ourhoutt <ourhoutt@student.1337.ma>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/24 16:57:42 by ourhoutt          #+#    #+#             */
/*   Updated: 2026/10/28 23:56:37 by ourhoutt         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlen(const char *s)
{
	size_t	i;

	i = 0;
	while (s[i] != '\0')
		i++;
	return (i);
}

// int	main(void)
// {
// 	int	i;

// 	i = 0;
// 	printf("%zu\n", ft_strlen((char *) & i));
// }
/*int main()
{
printf("%zu\n",ft_strlen(""));
printf("%zu\n",ft_strlen("hello 42"));
printf("%zu\n",ft_strlen("f"));
return 0;
}*/
/*#include <stdio.h>
#include <assert.h>
#include <string.h>

size_t ft_strlen(const char *s);

int main(void)
{
// Test normal strings
assert(ft_strlen("Hello") == strlen("Hello"));
assert(ft_strlen("42") == strlen("42"));

// Test empty string
assert(ft_strlen("") == strlen(""));

// Test string with spaces
assert(ft_strlen("Hello, World!") == strlen("Hello, World!"));

printf("All ft_strlen tests passed successfully!\n");
return (0);
} */
