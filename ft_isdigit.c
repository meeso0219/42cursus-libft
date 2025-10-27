/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_isdigit.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: changpar <changpar@student.42tokyo.jp>     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/10/27 16:25:20 by changpar          #+#    #+#             */
/*   Updated: 2025/10/27 16:42:42 by changpar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/**
 * @brief Checks if the given character is a numeric digit.
 *
 * This function tests whether the integer value passed as @p c corresponds
 * to a digit character ('0'–'9') in the ASCII table.
 * The argument must be representable as an unsigned char or be the value EOF.
 *
 * @param c The character to check, passed as an int. Typically a char value
 *          promoted to int when calling this function.
 *
 * @return Returns 1 if @p c is a digit character ('0'–'9'),
 *         otherwise returns 0.
 *
 * @example
 *     ft_isdigit('5'); // returns 1
 *     ft_isdigit('A'); // returns 0
 *     ft_isdigit('0'); // returns 1
 */
int	ft_isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	return (0);
}