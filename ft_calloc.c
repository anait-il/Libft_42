/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/21 11:09:38 by anait-il          #+#    #+#             */
/*   Updated: 2025/11/06 15:27:39 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t count, size_t size)
{
	unsigned char	*ptr;
	size_t			i;

	i = 0;
	if (size != 0 && count > 18446744073709551615UL / size)
		return (NULL);
	ptr = malloc(size * count);
	if (ptr == NULL)
		return (NULL);
	while (i < count * size)
	{
		ptr[i] = '\0';
		i++;
	}
	return ((void *)ptr);
}
