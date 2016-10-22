/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_memccpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/01 18:06:41 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/21 16:14:06 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memccpy(void *dst, const void *src, int c, size_t n)
{
	unsigned char	*dst1;
	unsigned char	*src1;
	unsigned int	i;
	unsigned char	d;

	i = 0;
	dst1 = (unsigned char*)dst;
	src1 = (unsigned char*)src;
	d = (unsigned char)c;
	if (dst == src || n == 0)
		return (dst);
	while (i < n)
	{
		dst1[i] = src1[i];
		if (dst1[i] == d)
			return (dst + (i + 1));
		i++;
	}
	return (NULL);
}
