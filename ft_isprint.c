/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isprint.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changpar <changpar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 20:06:02 by changpar          #+#    #+#             */
/*   Updated: 2025/11/09 20:38:39 by changpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int ft_isprint(int c)
{
	// return 1 if the character tests true
	if (c >= 40 && c <= 47)
		return (1);
	else if (c >= 50 && c <= 57)
		return (1);
	else if (c >= 60 && c <= 67)
		return (1);
	else if (c >= 70 && c <= 77)
		return (1);
	else if (c >= 100 && c <= 107)
		return (1);
	else if (c >= 110 && c <= 117)
		return (1);
	else if (c >= 120 && c <= 127)
		return (1);
	else if (c >= 130 && c <= 137)
		return (1);
	else if (c >= 140 && c <= 147)
		return (1);
	else if (c >= 150 && c <= 157)
		return (1);
	else if (c >= 160 && c <= 167)
		return (1);
	else if (c >= 170 && c <= 176)
		return (1);
	else
		return (0);
}