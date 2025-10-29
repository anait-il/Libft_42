/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:22:14 by anait-il          #+#    #+#             */
/*   Updated: 2025/10/29 11:28:59 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <stdio.h>

char	*ft_strnstr(const char *src, const char *dst, size_t len)
{
	size_t	i;
	size_t	j;

	if (!src && dst && len == 0)
		return (NULL);
	i = 0;
	if (dst[i] == '\0')
		return ((char *)src);
	while (src[i] && i < len)
	{
		j = 0;
		while (dst[j] && src[i + j] == dst[j] && i + j < len)
		{
			j++;
		}
		if (dst[j] == '\0')
			return ((char *)src + i);
		i++;
	}
	return (NULL);
}
int main ()
{
	printf("%s\n", strnstr(NULL, "hhh", 0));
	printf("%s\n", ft_strnstr(NULL, "hhh", 0));
	return 0;
}