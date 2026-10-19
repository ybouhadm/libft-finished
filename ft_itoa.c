/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ybouhadm <ybouhadm@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/15 00:00:00 by ybouhadm          #+#    #+#             */
/*   Updated: 2026/10/15 00:00:00 by ybouhadm         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdlib.h>

static size_t	count_digits(long n)
{
	size_t	len;

	len = (n <= 0);
	while (n)
	{
		len++;
		n /= 10;
	}
	return (len);
}

char	*ft_itoa(int n)
{
	char	*result;
	long	value;
	size_t	len;

	value = n;
	len = count_digits(value);
	result = (char *)malloc(len + 1);
	if (!result)
		return (NULL);
	result[len] = '\0';
	if (value < 0)
		value = -value;
	if (value == 0)
		result[0] = '0';
	while (value)
	{
		result[--len] = (char)('0' + value % 10);
		value /= 10;
	}
	if (n < 0)
		result[0] = '-';
	return (result);
}
