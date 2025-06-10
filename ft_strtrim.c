/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strtrim.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/06 22:56:18 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/06 22:56:18 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
// !!--!!hello!!--!! s1 and the set is "!-"
// How can I remove !! that is in front of the hello. Can think of "!!" which is in the beginning of the string
// 1- s1 goes until '\0'
// 2- s1[0] is seen and it is compared to the set
// 3- if it is matched i++ for s1
// 4- if it doesn't match with any character of the set we get the beginning of the trimmed string
// 5- and vice versa for the end of the string which means starting from the end of the string. Therefore u need to get the lenght of the s1 
static char ft_set_check (char const s1_char, char const *set)
{
	size_t i;
	i = 0;
	while(set[i] != '\0')
	{
		if (set[i] == s1_char)
			return (set[i]);
		i++;
	}
	return (0);
}
static size_t ft_malloc_len_start(char const *s1, char const *set)
{
	size_t i;
	size_t start;
	
	start = 0;
	i = 0;
	
	while(s1[i] == ft_set_check(s1[i], set))
	{
		start++;
		i++;
	}
	return (start);
}
static size_t ft_malloc_len_end(char const *s1, char const *set)
{
	size_t s1_len_x = ft_strlen(s1);
	size_t end;
	end = 0;
	while(s1[s1_len_x - 1] == ft_set_check(s1[s1_len_x - 1], set))
	{
		end++;
		s1_len_x--;
	}
	return (end);
}

char *ft_strtrim(char const *s1, char const *set)
{
	size_t i;
	size_t k;
	k = 0;
	i = 0;
	size_t s1_len_y = ft_strlen(s1) - ft_malloc_len(s1,set);
	char *str_trimmed = malloc(sizeof(char) * (s1_len_y + 1));
	if(!str_trimmed)
		return(NULL);
	while (s1[i] != '\0')
	{
		if(s1[i] != ft_set_check(s1[i], set))
		{
			str_trimmed[k] = s1[i];
			k++;
		}
		i++;
	}
	str_trimmed[i] = '\0';
	return (str_trimmed);
}
int main()
{
	char const *l = "!!!!!!aaaaa----aaaos!aman---aa-a!!!";
	char const *sl = "!-a";
	char const *trim = ft_strtrim(l, sl);
	printf("%s\n", trim);
	printf("%ld", ft_strlen(trim));
}