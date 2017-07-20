#ifndef INCLUDE_TOKEN_CLASS_HPP_
#define INCLUDE_TOKEN_CLASS_HPP_

enum Type { INT8, INT16, INT32, FLOAT, DOUBLE };

union Data {
	uint8_t			d_int8;
	uint16_t		d_int16;
	uint32_t		d_int32;
	float			d_float;
	double			d_double;
};

class Token {
	Type type;
	Data data;
};

#endif

