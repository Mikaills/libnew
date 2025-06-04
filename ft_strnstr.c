/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:31:09 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/04 13:20:27 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	i = 0;
	size_t j;
	j = 0;
	char *result;
	while(i <= len)
	{
		if(big[i] == little[j])
		{
			while(big[i] == little[j])
			{
				result[j] = little[j];
				j++;
			}
		}
		i++;
	}
	result[i] = '\0';
	return (result);
}
int main()
{
	const char *largestring = "Foo Bar Baz";
    const char *smallstring = "Bar";
	
		   printf("%s", ft_strnstr(largestring, smallstring, 7));
}
