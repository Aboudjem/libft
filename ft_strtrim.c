/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: aboudjem <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2016/10/06 22:54:41 by aboudjem          #+#    #+#             */
/*   Updated: 2016/10/22 22:56:34 by aboudjem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strtrim(char const *s)
{
	int		deb;
	int		j;
	int		fin;
	char	*str;

	deb = 0;
	fin = 0;
	j = 0;
	while (s[deb] && (s[deb] == ' ' || s[deb] == '\t' || s[deb] == '\n'))
		deb++;
	if (s[deb] == '\0')
		return ("");
	while (s[fin] != '\0')
		fin++;
	while ((s[fin] == '\t' | s[fin] == ' ' | s[fin] == '\n' | s[fin] == '\0'))
		fin--;
	fin++;
	str = (char*)malloc(sizeof(char) * (fin - deb) + 1);
	if (!str)
		return (NULL);
	while (deb < fin)
		str[j++] = s[deb++];
	str[j] = '\0';
	return (str);
}
