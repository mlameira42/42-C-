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

Fixed &Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->binary_point = src.getRawBits();
	return *this;
}

int Fixed::getRawBits( void )const{
	std::cout << "getRawBits member function called\n";
	return this->binary_point;
}

void Fixed::setRawBits( const int toset ){
	std::cout << "setRawBits member function called\n";
	this->binary_point = toset;
}