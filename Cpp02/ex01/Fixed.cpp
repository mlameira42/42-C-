#include "Fixed.hpp"

const int Fixed::bytewidth = 8;

Fixed::Fixed() : binary_point(0){
	std::cout << "Default constructor called\n";
}

Fixed::~Fixed(){
	std::cout << "Destructor called\n";
}

Fixed::Fixed(const Fixed &copy) {
	std::cout << "Copy constructor called\n";
	*this = copy;
}

Fixed::Fixed(const int conv){
	this->setRawBits(conv << this->bytewidth);
}

Fixed::Fixed(const float conv){
	this->setRawBits(round(conv * (1 << this->bytewidth)));
}


Fixed &Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->binary_point = src.binary_point;
	return *this;
}

int Fixed::getRawBits( void ){
	std::cout << "getRawBits member function called\n";
	return this->binary_point;
}

void Fixed::setRawBits( int const toset ){
	std::cout << "setRawBits member function called\n";
	this->binary_point = toset;
}

float Fixed::toFloat( void ) const {
	return ((float)this->binary_point / (float)(1 << this->bytewidth));
}

int Fixed::toInt( void ) const {
	return this->binary_point >> this->bytewidth;
}