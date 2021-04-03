/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"

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
