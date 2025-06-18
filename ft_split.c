/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/08 19:12:55 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/08 19:12:55 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static size_t    arr_len(char const *s, char c)
{
    size_t    len;
    size_t    i;

    i = 0;
    len = 0;
    while (s[i] != '\0')
    {
        while (s[i] == c)
            i++;
        while (s[i] != c && s[i] != '\0')
            i++;
        len++;
        if (s[i] == '\0')
          return (len);
        i++;
    }
    return (len);
}

static size_t	ft_str_len(char const *s, size_t start, char c)
{
	size_t	len;

	len = 0;
	while (s[start] != c)
	{
		len++;
		start++;
	}
	return (len);
}
void	*ft_free_str(char **str, size_t k, size_t arr_size)
{
	while (k < arr_size)
	{
		free(str[k]);
		k--;
	}
	free(str);
	return (NULL);
}

char	**ft_put_str(char const *s, char c, char **str)
{
	size_t	i;
	size_t	k;
	size_t	str_len;

	i = 0;
	k = 0;
	str_len = 0;
	while (s[i] != '\0')
	{
		while (s[i] == c)
			i++;
		if (s[i] != c)
		{
			str_len = ft_str_len(s, i, c);
			str[k] = ft_substr(s, i, str_len);
			k++;
			i += str_len;
		}
		i++;
	}
	str[k] = '\0';
	return (str);
}

char	**ft_split(char const *s, char c)
{
	size_t	arr_size;
	char	**str;
	size_t	i;

	if(!s)
		return (NULL);
	arr_size = arr_len(s, c);
	str = malloc(sizeof(char *) * arr_size + 1);
	str = ft_put_str(s, c, str);

	if (!str)
		return(ft_free_str(str, i, arr_size));
	return (str);
}
int main()
{
	size_t i;
	i = 0;
	char *s = "                      Foo        Bar Baz";
	char c = ' ';
	char **str;
	str = ft_split(s, c);
	while(i < 3)
	{
		printf("%s\n", str[i]);
		i++;
		free(str[i]);
	}
	free(str);
}


/*lorem$
 ipsu$
 ipsu$
em $
 ipsu$
 dolor sit $
m dolor si$
 ipsu$
em $
em $
ipsum $
 Sed non risus. Suspendisse$*/