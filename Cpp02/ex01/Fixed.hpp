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
};

std::ostream &operator<<(std::ostream &o, const Fixed &src);