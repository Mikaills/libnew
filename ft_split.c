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

#include "libft.h"
// Your string which is given to your function is "Foo Bar Baz"
// Your delimiter which is given to your function is " "
// in conclusion the return that is given by your function would be like "Foo" "Bar" "Baz"

static size_t arr_len (char const *s, char c)
{
	size_t arr_len;
	size_t i;

	i = 0;
	while(s[i] != '\0')
	{
		if (s[i] == c)
		{
			arr_len++;
		}
		i++;
	}
	return (arr_len);
}
static size_t str_len(char const *s, char c)
{
	size_t i;
	size_t str_len;
	i = 0;
	while (s[i] != '\0')
	{
		if (s[i] == c)
		{
			i++;
		}
		str_len++;
		i++;
	}
	return (str_len);
}

char **ft_split(char const *s, char c)
{
	size_t i;
	size_t k;
	size_t x;
	size_t osman;
	char **str;


	osman = arr_len(s, c);
	x = 0;
	k = 0;
	i = 0;
	str = malloc(sizeof(char *) * osman);

	while (i < osman)
	{
		str[i] = malloc(sizeof(char) * (str_len(s, c) + 1));
		i++;
	}
	i = 0;
	while (s[k] != '\0')
	{
		if (s[k] != c)
		{
			str[i][x] = s[k];
			x++;
		}
		k++;
		i++;
	}

}
int main()
{
	char *str = "Foo Bar";
	char c = ' ';

	char **o = ft_split (str, c);
	size_t k;
	size_t i;
	k = 0;
	i = 0;
	while (o[i])
	{
		printf("%s", o[i]);
		i++;
	}
}