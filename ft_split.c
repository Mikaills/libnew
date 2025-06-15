// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   ft_split.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2025/06/08 19:12:55 by bahkaya           #+#    #+#             */
// /*   Updated: 2025/06/08 19:12:55 by bahkaya          ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */

// #include "libft.h"


// size_t ft_contword(char const *s, char c)
// {
// 	size_t i;
// 	size_t len;

// 	i = 0;
// 	len = 0;
// 	while(s[i] != '\0')
// 	{
// 		if(s[i] == c)
// 		{
// 			len++;
// 		}
// 		i++;
// 	}

// }

// char **ft_split(char const *s, char c)
// {
// 	size_t i;
// 	size_t k;
// 	size_t x;
	
// 	x = 0;
// 	i = 0;
// 	k = 0;
// 	char **str_arr = malloc(sizeof(char) * ft_strlen(s) + 1);
// 	while(*str_arr[i] != '\0')
// 	{
// 		k = 0;
// 		while(str_arr[i][k] != c)
// 		{
// 			str_arr[i][k] = s[x];
// 			k++;
// 		}
// 		str_arr[i][k] = '\0';
// 		x++;
// 		i++;
// 	}
// 	return (str_arr);
// }
// int main()
// {
// char *str = "Foo Bar Baz";
// char set = ' ';
// char **str_arr = ft_split (str, set);
// size_t i = 0;
// size_t k = 0;
// while (str_arr[i][k] != '\0')
// 	{
	
// 		printf("%c\n", str_arr[i][k] );
// 		k++;
// 	}
// }
