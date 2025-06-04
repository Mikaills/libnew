/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rft_memset.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/27 12:54:47 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/03 17:51:12 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_memset(void *s, int c, size_t n)
{
	unsigned char	*ptr;
	size_t	i;

	ptr = s;
	i = 0;
	
	while (i < n)
	{
		ptr[i] = (unsigned char)c;
		i++;
	}
	return (s);
}
int	main(void)
{
	char str[] = "şdddd";
}