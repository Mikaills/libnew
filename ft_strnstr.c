/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strnstr.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/04 11:31:09 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/06 19:41:36 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */


#include <string.h>
#include <stdio.h>
char	*ft_strnstr(const char *big, const char *little, size_t len)
{
	size_t i;
	i = 0;
	size_t k;
	k = 0;
	while(i <= len)
	{
		if(big[i] == little[k])
		{
			while (little[k] != '\0')
			{
				if(little[k] != big[i])
				{
					return(NULL);
				}
				k++;
				i++;
			}
			return ((char *)&big[k + 1]);
		}
		i++;
	}
	return (NULL);
}
int main()
{
	char *largestring = "Foo Baz Bar";
    char *smallstring = "Bar";
	
		   printf("%s\n", ft_strnstr(largestring, smallstring, 12));
}
