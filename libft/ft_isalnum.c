/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isalnum.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: saozcan <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/01/03 12:45:27 by saozcan           #+#    #+#             */
/*   Updated: 2022/01/09 01:12:13 by saozcan          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

int	ft_isalnum(int c)
{
	if (!(c >= 'a' && c <= 'z') && !(c >= 'A' && c <= 'Z') && \
			!(c >= '0' && c <= '9'))
	{
		return (0);
	}
	return (1);
}
