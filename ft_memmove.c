/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memmove.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: anait-il <anait-il@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/18 09:22:57 by anait-il          #+#    #+#             */
/*   Updated: 2025/10/28 21:17:25 by anait-il         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>

void	*ft_memmove(void *dest, const void *src, size_t len)
{
	size_t	i;

	i = 0;
	if (dest < src)
	{
		while (i < len)
		{
			((char *)dest)[i] = ((const char *)src)[i];
			i++;
		}
	}
	else if (dest > src)
	{
		while (len--)
		{
			((char *)dest)[len] = ((char *)src)[len];
		}
	}
	return (dest);
}

#include <string.h>
#include <stdio.h>

int main()
{
	memmove(NULL, "hhhh", 2);
}