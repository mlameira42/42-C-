#pragma once

#include <iostream>
#include <cmath>

class Fixed{
	private:
		int binary_point;
		static const int bytewidth; 
	public:
		Fixed();
		Fixed(const Fixed &copy);
		Fixed(const int conv);
		Fixed(const float conv);
		~Fixed();
		Fixed &operator=(const Fixed &src);
		int getRawBits( void );
		void setRawBits( int const toset );
		float toFloat( void ) const;
		int toInt( void ) const;
		bool	operator<(const Fixed &b ) const;
		bool	operator>(const Fixed &b) const;
		bool	operator<=(const Fixed &b) const;
		bool	operator>=(const Fixed &b) const;
		bool	operator==(const Fixed &b) const;
		bool	operator!=(const Fixed &b) const;
		float	operator+(const Fixed &b) const;		
		float	operator-(const Fixed &b) const;		
		float	operator*(const Fixed &b) const;
		float	operator/(const Fixed &b) const;
		Fixed	operator++();
		Fixed	operator--();
		Fixed	operator++(int);
		Fixed	operator--(int);
		static	Fixed &min(Fixed &a, Fixed &b);
		static	const Fixed &min(const Fixed &a, const Fixed &b);
		static	Fixed &max(Fixed &a, Fixed &b);
		static	const Fixed &max(const Fixed &a, const Fixed &b);
};

std::ostream &operator<<(std::ostream &o, const Fixed &src);