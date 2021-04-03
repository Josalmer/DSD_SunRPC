union dresponse switch (int errno) {
	case 0:
		double res;
	default:
		void;
};

program SUMADOR {
	version SUMADORV {
		dresponse SUMA(double, double) = 1;
	} = 1;
} = 0x20000002;
