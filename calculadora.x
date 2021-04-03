union dresponse switch (int errno) {
	case 0:
		double res;
	default:
		void;
};

program CALCPROG {
	version CALCVERS {
		dresponse SUMA(double, double) = 1;
		dresponse RESTA(double, double) = 2;
		dresponse MULTIPLICA(double, double) = 3;
		dresponse DIVIDE(double, double) = 4;
	} = 1;
} = 0x20000001;
