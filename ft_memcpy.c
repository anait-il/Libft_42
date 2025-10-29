/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memcpy.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/17 10:27:30 by anait-il          #+#    #+#             */
/*   Updated: 2025/10/29 10:56:22 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

void	*ft_memcpy(void *dest, const void *src, size_t n)
{
	size_t				i;
	unsigned char		*dest1;
	const unsigned char	*src1;

	i = 0;
	src1 = src;
	dest1 = dest;
	if (dest == src)
		return (dest);
	while (i < n)
	{
		dest1[i] = src1[i];
		i++;
	}
	return (dest);
}

int main()
{
	char s[5] = "hello";
	printf("std--> %s\n", memcpy(NULL, NULL, 2));
	printf("std--> %s\n", ft_memcpy(NULL, NULL, 2));
	int a = 900;

	
}