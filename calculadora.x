typedef double arr<>;

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

union vresponse switch (int errno) {
	case 0:
		arr res;
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
		vresponse SUMAVECTORES(arr, arr) = 7;
		dresponse REDUCE(arr) = 8;
	} = 1;
} = 0x20000001;
