/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isascii.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ccaldero <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/10/04 11:24:50 by ccaldero          #+#    #+#             */
/*   Updated: 2022/10/04 11:25:02 by ccaldero         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"

int	ft_isascii(int var)
{
	if (!(var >= 0 && var <= 127))
	{
		return (0);
	}
	return (1);
}
