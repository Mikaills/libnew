/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_substr.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 19:43:24 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/06 19:43:24 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

size_t	ft_check_len(unsigned int start, size_t len, size_t s_len)
{
	size_t	sub_len;

	sub_len = 0;
	if (s_len - start < len)
		sub_len = s_len - start;
	else
		sub_len = len;
	return (sub_len);
}

char	*ft_substr(char const *s, unsigned int start, size_t len)
{
	size_t	i;
	char	*substr;
	size_t	s_len;
	size_t	sub_len;

	i = 0;
	s_len = ft_strlen(s);
	if (s_len <= start)
	{
		substr = ft_strdup("");
		return (substr);
	}
	sub_len = ft_check_len(start, len, s_len);
	substr = malloc(sizeof(char) * (sub_len + 1));
	if (!substr)
		return (NULL);
	while (i < len)
	{
		substr[i] = s[start];
		start++;
		i++;
	}
	substr[i] = '\0';
	return (substr);
}
