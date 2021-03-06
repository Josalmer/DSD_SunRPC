/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"
#include <math.h>

dresponse * suma_1_svc(double arg1, double arg2,  struct svc_req *rqstp) {
	static dresponse  result;

	xdr_free (xdr_dresponse, &result);
	result.dresponse_u.res = arg1 + arg2;

	printf("server: SUMA(%lf, %lf)=%lf\n", arg1, arg2, result);

	return &result;
}

dresponse * resta_1_svc(double arg1, double arg2,  struct svc_req *rqstp) {
	static dresponse  result;

	xdr_free (xdr_dresponse, &result);
	result.dresponse_u.res = arg1 - arg2;

	printf("server: RESTA(%lf, %lf)=%lf\n", arg1, arg2, result);

	return &result;
}

dresponse * multiplica_1_svc(double arg1, double arg2,  struct svc_req *rqstp) {
	static dresponse  result;

	xdr_free (xdr_dresponse, &result);
	result.dresponse_u.res = arg1 * arg2;

	printf("server: MULTIPLICA(%lf, %lf)=%lf\n", arg1, arg2, result);

	return &result;
}

dresponse * divide_1_svc(double arg1, double arg2,  struct svc_req *rqstp) {
	static dresponse  result;

	xdr_free (xdr_dresponse, &result);

	if (arg2 != 0) {
		result.dresponse_u.res = arg1 / arg2;

		printf("server: DIVIDE(%lf, %lf)=%lf\n", arg1, arg2, result);
	}

	return &result;
}

dresponse * dmanhattan_1_svc(coordenadas arg1, coordenadas arg2,  struct svc_req *rqstp) {
	static dresponse  result;
	double distance;

	xdr_free (xdr_dresponse, &result);

	distance = abs(arg1.x - arg2.x) + abs(arg1.y - arg2.y);

	result.dresponse_u.res = distance;

	printf("server: Distancia manhattan(a=(%lf, %lf) y b=(%lf, %lf)=%lf\n", arg1.x, arg1.y, arg2.x, arg2.y, result);

	return &result;
}

dresponse * deuclides_1_svc(coordenadas arg1, coordenadas arg2,  struct svc_req *rqstp) {
	static dresponse  result;
	double distance;

	xdr_free (xdr_dresponse, &result);

	distance = sqrt(pow(arg1.x - arg2.x, 2.0) + pow(arg1.y - arg2.y, 2.0));

	result.dresponse_u.res = distance;

	printf("server: Distancia euclides(a=(%lf, %lf) y b=(%lf, %lf)=%lf\n", arg1.x, arg1.y, arg2.x, arg2.y, result);

	return &result;
}

vresponse * sumavectores_1_svc(arr arg1, arr arg2,  struct svc_req *rqstp) {
	static vresponse  result;

	xdr_free (xdr_vresponse, &result);

	result.vresponse_u.res.arr_len = arg1.arr_len;
	result.vresponse_u.res.arr_val = malloc(arg1.arr_len * sizeof(double));

	for (int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		result.vresponse_u.res.arr_val[i] = arg1.arr_val[i] + arg2.arr_val[i];
	}

	printf("A[");
	for(int i = 0; i < arg1.arr_len; i++) {
		printf(" %lf ", arg1.arr_val[i]);
	}
	printf("] + [");
	for(int i = 0; i < arg2.arr_len; i++) {
		printf(" %lf ", arg2.arr_val[i]);
	}
	printf("] = [");
	for(int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		printf(" %lf ", result.vresponse_u.res.arr_val[i]);
	}
	printf("]\n");

	return &result;
}

vresponse * restavectores_1_svc(arr arg1, arr arg2,  struct svc_req *rqstp) {
	static vresponse  result;

	xdr_free (xdr_vresponse, &result);

	result.vresponse_u.res.arr_len = arg1.arr_len;
	result.vresponse_u.res.arr_val = malloc(arg1.arr_len * sizeof(double));

	for (int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		result.vresponse_u.res.arr_val[i] = arg1.arr_val[i] - arg2.arr_val[i];
	}

	printf("A[");
	for(int i = 0; i < arg1.arr_len; i++) {
		printf(" %lf ", arg1.arr_val[i]);
	}
	printf("] - [");
	for(int i = 0; i < arg2.arr_len; i++) {
		printf(" %lf ", arg2.arr_val[i]);
	}
	printf("] = [");
	for(int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		printf(" %lf ", result.vresponse_u.res.arr_val[i]);
	}
	printf("]\n");

	return &result;
}

vresponse * multiplicavectores_1_svc(arr arg1, arr arg2,  struct svc_req *rqstp) {
	static vresponse  result;

	xdr_free (xdr_vresponse, &result);

	result.vresponse_u.res.arr_len = arg1.arr_len;
	result.vresponse_u.res.arr_val = malloc(arg1.arr_len * sizeof(double));

	for (int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		result.vresponse_u.res.arr_val[i] = arg1.arr_val[i] * arg2.arr_val[i];
	}

	printf("A[");
	for(int i = 0; i < arg1.arr_len; i++) {
		printf(" %lf ", arg1.arr_val[i]);
	}
	printf("] * [");
	for(int i = 0; i < arg2.arr_len; i++) {
		printf(" %lf ", arg2.arr_val[i]);
	}
	printf("] = [");
	for(int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		printf(" %lf ", result.vresponse_u.res.arr_val[i]);
	}
	printf("]\n");

	return &result;
}

vresponse * dividevectores_1_svc(arr arg1, arr arg2,  struct svc_req *rqstp) {
	static vresponse  result;

	xdr_free (xdr_vresponse, &result);

	result.vresponse_u.res.arr_len = arg1.arr_len;
	result.vresponse_u.res.arr_val = malloc(arg1.arr_len * sizeof(double));

	for (int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		if (arg2.arr_val[i] != 0) {
			result.vresponse_u.res.arr_val[i] = arg1.arr_val[i] / arg2.arr_val[i];
		}
	}

	printf("A[");
	for(int i = 0; i < arg1.arr_len; i++) {
		printf(" %lf ", arg1.arr_val[i]);
	}
	printf("] / [");
	for(int i = 0; i < arg2.arr_len; i++) {
		printf(" %lf ", arg2.arr_val[i]);
	}
	printf("] = [");
	for(int i = 0; i < result.vresponse_u.res.arr_len; i++) {
		printf(" %lf ", result.vresponse_u.res.arr_val[i]);
	}
	printf("]\n");

	return &result;
}

dresponse * reduce_1_svc(arr arg1,  struct svc_req *rqstp) {
	static dresponse  result;
	double reduction;

	xdr_free (xdr_dresponse, &result);

	for (int i = 0; i < arg1.arr_len; i++) {
		reduction += arg1.arr_val[i];
	}

	result.dresponse_u.res = reduction;

	printf("Reduce(A[");
	for(int i = 0; i < arg1.arr_len; i++) {
		printf(" %lf ", arg1.arr_val[i]);
	}
	printf("]) = %lf\n", result);

	return &result;
}

mresponse * sumamatrix_1_svc(matrix arg1, matrix arg2,  struct svc_req *rqstp) {
	static mresponse  result;

	xdr_free (xdr_vresponse, &result);

	result.mresponse_u.res.cols = arg1.cols;
	result.mresponse_u.res.rows = arg1.rows;
	result.mresponse_u.res.mat.arr_len = arg1.mat.arr_len;
	result.mresponse_u.res.mat.arr_val = malloc(arg1.mat.arr_len * sizeof(double));

	int i = 0;
	while (i < result.mresponse_u.res.rows) {
		for (int j = 0; j < arg1.cols; j++) {
			result.mresponse_u.res.mat.arr_val[i * result.mresponse_u.res.cols + j] = arg1.mat.arr_val[i * arg1.cols + j] + arg2.mat.arr_val[i * arg2.cols + j];
		}
		i++;
	}

	printf("[\n");
	i = 0;
	while (i < arg1.rows) {
		for (int j = 0; j < arg1.cols; j++) {
			printf(" %lf ", arg1.mat.arr_val[i * arg1.cols + j]);
		}
		i++;
		printf("\n");
	}
	printf("]\n");
	printf("+ [\n");
	i = 0;
	while (i < arg2.rows) {
		for (int j = 0; j < arg2.cols; j++) {
			printf(" %lf ", arg2.mat.arr_val[i * arg2.cols + j]);
		}
		i++;
		printf("\n");
	}
	printf("]\n");
	printf("= [\n");
	i = 0;
	while (i < result.mresponse_u.res.rows) {
		for (int j = 0; j < result.mresponse_u.res.cols; j++) {
			printf(" %lf ", result.mresponse_u.res.mat.arr_val[i * result.mresponse_u.res.cols + j]);
		}
		i++;
		printf("\n");
	}
	printf("]\n");

	return &result;
}

mresponse * restamatrix_1_svc(matrix arg1, matrix arg2,  struct svc_req *rqstp) {
	static mresponse  result;

	xdr_free (xdr_vresponse, &result);

	result.mresponse_u.res.cols = arg1.cols;
	result.mresponse_u.res.rows = arg1.rows;
	result.mresponse_u.res.mat.arr_len = arg1.mat.arr_len;
	result.mresponse_u.res.mat.arr_val = malloc(arg1.mat.arr_len * sizeof(double));

	int i = 0;
	while (i < result.mresponse_u.res.rows) {
		for (int j = 0; j < arg1.cols; j++) {
			result.mresponse_u.res.mat.arr_val[i * result.mresponse_u.res.cols + j] = arg1.mat.arr_val[i * arg1.cols + j] - arg2.mat.arr_val[i * arg2.cols + j];
		}
		i++;
	}

	printf("[\n");
	i = 0;
	while (i < arg1.rows) {
		for (int j = 0; j < arg1.cols; j++) {
			printf(" %lf ", arg1.mat.arr_val[i * arg1.cols + j]);
		}
		i++;
		printf("\n");
	}
	printf("]\n");
	printf("- [\n");
	i = 0;
	while (i < arg2.rows) {
		for (int j = 0; j < arg2.cols; j++) {
			printf(" %lf ", arg2.mat.arr_val[i * arg2.cols + j]);
		}
		i++;
		printf("\n");
	}
	printf("]\n");
	printf("= [\n");
	i = 0;
	while (i < result.mresponse_u.res.rows) {
		for (int j = 0; j < result.mresponse_u.res.cols; j++) {
			printf(" %lf ", result.mresponse_u.res.mat.arr_val[i * result.mresponse_u.res.cols + j]);
		}
		i++;
		printf("\n");
	}
	printf("]\n");

	return &result;
}
