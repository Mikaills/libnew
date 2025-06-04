/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_calloc.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/31 18:33:39 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/02 14:04:36 by bahkaya          ###   ########.fr       */
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
		ptr[i] = 0;
		i++;
	}
	return (ptr);
}
int	main(void)
{
	int *src = calloc(2,2);
	printf("%ls", src);
	free(src);
}
