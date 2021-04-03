struct coordenadas {
	double x;
	double y;
};

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
		dresponse DMANHATTAN(coordenadas, coordenadas) = 5;
		dresponse DEUCLIDES(coordenadas, coordenadas) = 6;
	} = 1;
} = 0x20000001;
