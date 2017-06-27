// vector of enum object?

enum Type { INTEGER, LONG, LONG LONG, FLOAT, DOUBLE };

union Data {
	    uint8_t			d_int8;
		uint16_t		d_int16;
	    uint32_t		d_int32;
		float			d_float;
		double			d_double;
};

class Value {
	    Type type;
		Data data;
};

std::vector<Value> &stack;
