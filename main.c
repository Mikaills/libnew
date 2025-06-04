/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/05/26 16:27:36 by bahkaya           #+#    #+#             */
/*   Updated: 2025/05/28 16:46:56 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <stdio.h>
#include "libft.h"

int	main()
{
	printf("%d\n", ft_isalnum('0'));
	printf("%d\n", ft_isalpha('A'));
	printf("%d\n", ft_isascii('A'));
	printf("%d\n", ft_isprint('A'));
	printf("%zu\n", ft_strlen("Deneme"));
	printf("%s\n", ft_strchr("Deneme", 'n'));
	printf("%d\n", ft_tolower('A'));
	printf("%d\n", ft_toupper('a'));
	printf("%d\n", ft_tolower('A'));
}
