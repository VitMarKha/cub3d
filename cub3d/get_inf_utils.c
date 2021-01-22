/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   get_inf_utils.c                                    :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fngoc <fngoc@student.42.fr>                +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/01/18 12:28:42 by fngoc             #+#    #+#             */
/*   Updated: 2021/01/18 12:41:09 by fngoc            ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "cub3d.h"

/*
** get_floore: получить floore с проверкой.
*/

void	get_floore(char *tmp, t_cub *cub)
{
	if (ft_isdigit(*tmp))
		cub->p.floore_r = ft_atoi(tmp);
	else
		error("ERROR: Not set floore_r");
	tmp += ft_digit_num(cub->p.floore_r) + 1;
	if (ft_isdigit(*tmp))
		cub->p.floore_g = ft_atoi(tmp);
	else
		error("ERROR: Not set floore_g");
	tmp += ft_digit_num(cub->p.floore_g) + 1;
	if (ft_isdigit(*tmp))
		cub->p.floore_b = ft_atoi(tmp);
	else
		error("ERROR: Not set floore_b");
}

/*
** get_ceilling: получить ceilling с проверкой.
*/

void	get_ceilling(char *tmp, t_cub *cub)
{
	if (ft_isdigit(*tmp))
		cub->p.ceilling_r = ft_atoi(tmp);
	else
		error("ERROR: Not set ceilling_r");
	tmp += ft_digit_num(cub->p.ceilling_r) + 1;
	if (ft_isdigit(*tmp))
		cub->p.ceilling_g = ft_atoi(tmp);
	else
		error("ERROR: Not set ceilling_g");
	tmp += ft_digit_num(cub->p.ceilling_g) + 1;
	if (ft_isdigit(*tmp))
		cub->p.ceilling_b = ft_atoi(tmp);
	else
		error("ERROR: Not set ceilling_b");
}
