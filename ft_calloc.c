/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:33:39 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/08 19:11:51 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

void	*ft_calloc(size_t nmemb, size_t size)
{
	size_t i;

	size_t *ptr = malloc(sizeof(void *) * (ft_strlen(nmemb) + 1));
	i = 0;
	if (!ptr)
		return (NULL);
	while (ptr[i] != '\0')
	{
		ptr[i] = memset(nmemb, 0, size);
		i++;
	}
	ptr[i] = '\0';
	return (ptr);
}
int	main(void)
{
	;
	printf("%d", ft_calloc(5, 5));
	free(src);
}
