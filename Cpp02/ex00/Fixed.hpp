#pragma once

#include <iostream>

class Fixed{
	private:
		int binary_point;
		static const int bytewidth; 
	public:
	Fixed();
	Fixed(const Fixed &copy);
	~Fixed();
	Fixed &operator=(const Fixed &src);
	int getRawBits( void ) const;
	void setRawBits( const int toset );
};