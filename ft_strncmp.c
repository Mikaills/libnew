/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncmp.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/03 16:34:05 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/03 18:22:16 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int ft_strncmp (const char *s1, const char *s2, size_t n)
{
	int result;
	int i;
	result = 0;
	i = 0;
	while(i < n)
	{
		result = s1[i] - s2[i];
		i++;
	}
	return(result);
}
int main()
{
	char x[] = "AAAAme";
	char y[] = "AAAan";
	
	printf("%d\n", ft_strncmp(x, y, 4));
}
