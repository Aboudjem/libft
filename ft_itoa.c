/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/08 20:27:56 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/21 13:34:30 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int	ft_compteur(int n)
{
	int i;

	i = 1;
	while (n > 10)
	{
		i++;
		n = n / 10;
	}
	return (i);
}

char	*ft_itoa(int n)
{
	char	*str;
	int		neg;
	int		compteur;
	int		i;

	i = 0;
	neg = 0;
	compteur = ft_compteur(n);
	if (n < 0)
		neg = 1;
	str = (char*)malloc(sizeof(char) * (compteur + 1 + neg));
	if (!str)
		return (NULL);
	str[compteur] = '\0';
	compteur--;
	while (i < compteur)
	{
		if (n < 10)
		{
			str[compteur] = '0' + n;
			i++;
		}
		else if (n > 10)
		{
			str[compteur] = (n % 10) + '0';
			n = n / 10;
			compteur--;
			ft_itoa(n);
		}
		i++;
	}
	return (str);
}
