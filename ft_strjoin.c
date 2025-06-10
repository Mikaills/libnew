/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strjoin.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 21:38:30 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/06 21:38:30 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
char *ft_strjoin(char const *s1, char const *s2)
{
	unsigned int i;
	i = 0;
	unsigned int k;
	k = 0;
	size_t pre_len = ft_strlen(s1);
	size_t suff_len = ft_strlen(s2);
	char *str_new = malloc(sizeof(char) * pre_len + suff_len + 1);
	if (!str_new)
		return(NULL);
	while (s1[i] != '\0')
	{
		str_new[i] = s1[i];
		i++;
	}
	while (s2[k] != '\0')
	{
		str_new[i] = s2[k];
		k++;
		i++;
	}
	str_new[i] = '\0';
	return (str_new);
}
int main()
{
	char *pre = "un";
	char *suff = "help";
	char *new = ft_strjoin(pre, suff);
	printf("%s", new);
	free(new);
}