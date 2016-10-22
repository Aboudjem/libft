/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/05 16:40:29 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/21 20:17:17 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	unsigned	int i;
	unsigned	int j;
	unsigned	int k;

	i = 0;
	while (dst[i] != '\0')
		i++;
	j = 0;
	while (src[j] != '\0' && j < size)
	{
		dst[i + j] = src[j];
		j++;
	}
	dst[i + j] = '\0';
	k = 0;
	while (src[k] != '\0')
		k++;
	return (k + size);
}
