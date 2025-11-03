/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/19 09:51:09 by anait-il          #+#    #+#             */
/*   Updated: 2025/11/02 22:13:17 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	ld;
	size_t	ls;
	size_t	j;

	i = 0;
	ls = ft_strlen(src);
	if (!dst && dstsize == 0)
		return (ls);
	ld = ft_strlen(dst);
	j = ld;
	if (dstsize <= ld)
		return (ls + dstsize);
	while (j < dstsize - 1 && src[i])
	{
		dst[j] = src[i];
		i++;
		j++;
	}
	dst[j] = '\0';
	return (ld + ls);
}
