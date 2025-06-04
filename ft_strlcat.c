/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/30 14:49:46 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/03 16:26:56 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <string.h>

// test_cases (dest 13(+ deneme yazılı yani 6+1 (null termination) ve src "osman"+1(null termination)
// 1- size destin içinde yazılandan küçük ise return (dest)
// 2- size destin içinde yazılan + 1 (null termination)
//	+ 1 (src için yazdıralabilecek alan) ise return (dest + src[i])
// ++ ama null termination var mı bak ?? evet null termination var
// 3- sonda null ekle
size_t	ft_strlcat(char *dst, const char *src, size_t size)
{
	size_t	dst_len;
	size_t	src_len;
	size_t	i;

	dst_len = ft_strlen(dst);
	src_len = ft_strlen(src);
	i = 0;
	if (size <= dst_len)
	{
		return (dst_len);
	}
	while (dst_len < size - 1)
	{
		if (size > dst_len)
		{
			dst[dst_len] = src[i];
		}
		dst_len++;
		i++;
	}
	dst[dst_len] = '\0';
	return (dst_len + src_len);
}
