/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: bahkaya <bahkaya@student.42istanbul.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/06/07 20:44:40 by bahkaya           #+#    #+#             */
/*   Updated: 2025/06/07 20:44:40 by bahkaya          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
static int ft_putnbr_len(int n)
{
	size_t len;
	len = 0;
	while (n / 10 != 0)
	{
		len++;
	}
	return (len);
}
static char *ft_putstrnbr(int n)
{
	size_t i;
	i = 0;
	char *str;
	
	if (n > 0 && n < 10)
	{
		str[i] = ft_putstrnbr(n % 10 + 48);
	}
	return (str);
}
char *ft_itoa(int n)
{
	size_t i;
	i = 0;
	char *str_con = malloc(sizeof(char) * ft_putnbr_len(n) + 1);
	while (str_con[i] != '\0')
	{
		str_con[i] = ft_putstrnbr(n);
		i++;
	}
	str_con[i] = '\0';
	return (str_con);
}
int main()
{
	int x = 9;
	char *str = ft_itoa(x);
	printf("%s", str);
	free(str);
}