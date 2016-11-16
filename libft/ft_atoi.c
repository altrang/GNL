/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: atrang <atrang@student.42.fr>              +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2015/11/25 13:02:52 by ataibi            #+#    #+#             */
/*   Updated: 2016/03/02 17:23:38 by atrang           ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

static int		ft_isspacechar(char c)
{
	if (c == '\t' || c == '\n' || c == '\v' || c == '\f' || c == '\r'
	|| c == ' ')
		return (1);
	return (0);
}

int				ft_atoi(const char *str)
{
	int		number;
	int		i;
	int		isneg;
	char	*str_cpy;

	i = 0;
	str_cpy = (char*)str;
	isneg = 1;
	number = 0;
	while (ft_isspacechar(str_cpy[i]))
		i++;
	if (str_cpy[i] == '-')
	{
		i++;
		isneg = -1;
	}
	else if (str_cpy[i] == '+')
		i++;
	while (str_cpy[i] && str_cpy[i] >= '0' && str_cpy[i] <= '9')
	{
		number = number * 10 + (str_cpy[i] - '0');
		i++;
	}
	return (number * isneg);
}
