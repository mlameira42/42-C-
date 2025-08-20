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
	std::cout << "Int constructor called\n";
	this->setRawBits(conv << this->bytewidth);
}

Fixed::Fixed(const float conv){
	std::cout << "Float constructor called\n";
	this->setRawBits(round(conv * (1 << this->bytewidth)));
}


Fixed &Fixed::operator=(const Fixed &src){
	std::cout << "Copy assignment operator called\n";
	if (this != &src)
		this->binary_point = src.binary_point;
	return *this;
}
std::ostream &operator<<(std::ostream &o, const Fixed &src){
	o << src.toFloat();
	return o;
}
int Fixed::getRawBits( void ){
	return this->binary_point;
}

void Fixed::setRawBits( int const toset ){
	this->binary_point = toset;
}

float Fixed::toFloat( void ) const {
	return ((float)this->binary_point / (float)(1 << this->bytewidth));
}

int Fixed::toInt( void ) const {
	return this->binary_point >> this->bytewidth;
}