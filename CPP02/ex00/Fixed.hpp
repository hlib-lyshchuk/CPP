/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   Fixed.hpp                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: hlyshchu <hlyshchu@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/20 16:07:25 by hlyshchu          #+#    #+#             */
/*   Updated: 2024/12/20 16:30:49 by hlyshchu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#pragma once

class Fixed
{
private:
    static const int fractionalBits = 8;
    int value;
public:
    Fixed();
    ~Fixed();
    Fixed(const Fixed &other);
    Fixed &operator = (const Fixed &other);
    int getRawBits( void ) const;
    void setRawBits( int const raw );
};
