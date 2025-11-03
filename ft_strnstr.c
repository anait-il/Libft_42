/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/20 12:22:14 by anait-il          #+#    #+#             */
/*   Updated: 2025/11/03 21:37:31 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

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
