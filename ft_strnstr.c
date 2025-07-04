/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:31:09 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/16 15:58:08 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t		i;
	size_t		k;
	size_t		little_len;

	i = 0;
	if (!big && len == 0)
		return (NULL);  // standard-compliant special case

	little_len = ft_strlen(little);
	if (little_len == 0)
		return ((char *)big);
	while (i + little_len <= len)
	{
		k = 0;
		while (big[i + k] == little[k] && i + k < len && big[i + k] != '\0')
		{
			if(little[k + 1] == '\0')
				return((char *)&big[i]);
			k++;
			if (k == little_len)
				return ((char *)big + i);
		}
		i++;
	}
	return (NULL);
}
