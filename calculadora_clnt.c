/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include <memory.h> /* for memset */
#include "calculadora.h"

/* Default timeout can be changed using clnt_control() */
static struct timeval TIMEOUT = { 25, 0 };

dresponse *
suma_1(double arg1, double arg2,  CLIENT *clnt)
{
	suma_1_argument arg;
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, SUMA, (xdrproc_t) xdr_suma_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

dresponse *
resta_1(double arg1, double arg2,  CLIENT *clnt)
{
	resta_1_argument arg;
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, RESTA, (xdrproc_t) xdr_resta_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

dresponse *
multiplica_1(double arg1, double arg2,  CLIENT *clnt)
{
	multiplica_1_argument arg;
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, MULTIPLICA, (xdrproc_t) xdr_multiplica_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

dresponse *
divide_1(double arg1, double arg2,  CLIENT *clnt)
{
	divide_1_argument arg;
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, DIVIDE, (xdrproc_t) xdr_divide_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

dresponse *
dmanhattan_1(coordenadas arg1, coordenadas arg2,  CLIENT *clnt)
{
	dmanhattan_1_argument arg;
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, DMANHATTAN, (xdrproc_t) xdr_dmanhattan_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

dresponse *
deuclides_1(coordenadas arg1, coordenadas arg2,  CLIENT *clnt)
{
	deuclides_1_argument arg;
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, DEUCLIDES, (xdrproc_t) xdr_deuclides_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

vresponse *
sumavectores_1(arr arg1, arr arg2,  CLIENT *clnt)
{
	sumavectores_1_argument arg;
	static vresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, SUMAVECTORES, (xdrproc_t) xdr_sumavectores_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_vresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

vresponse *
restavectores_1(arr arg1, arr arg2,  CLIENT *clnt)
{
	restavectores_1_argument arg;
	static vresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, RESTAVECTORES, (xdrproc_t) xdr_restavectores_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_vresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

vresponse *
multiplicavectores_1(arr arg1, arr arg2,  CLIENT *clnt)
{
	multiplicavectores_1_argument arg;
	static vresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, MULTIPLICAVECTORES, (xdrproc_t) xdr_multiplicavectores_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_vresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

vresponse *
dividevectores_1(arr arg1, arr arg2,  CLIENT *clnt)
{
	dividevectores_1_argument arg;
	static vresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, DIVIDEVECTORES, (xdrproc_t) xdr_dividevectores_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_vresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

dresponse *
reduce_1(arr arg1,  CLIENT *clnt)
{
	static dresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	if (clnt_call (clnt, REDUCE,
		(xdrproc_t) xdr_arr, (caddr_t) &arg1,
		(xdrproc_t) xdr_dresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

mresponse *
sumamatrix_1(matrix arg1, matrix arg2,  CLIENT *clnt)
{
	sumamatrix_1_argument arg;
	static mresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, SUMAMATRIX, (xdrproc_t) xdr_sumamatrix_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_mresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}

mresponse *
restamatrix_1(matrix arg1, matrix arg2,  CLIENT *clnt)
{
	restamatrix_1_argument arg;
	static mresponse clnt_res;

	memset((char *)&clnt_res, 0, sizeof(clnt_res));
	arg.arg1 = arg1;
	arg.arg2 = arg2;
	if (clnt_call (clnt, RESTAMATRIX, (xdrproc_t) xdr_restamatrix_1_argument, (caddr_t) &arg,
		(xdrproc_t) xdr_mresponse, (caddr_t) &clnt_res,
		TIMEOUT) != RPC_SUCCESS) {
		return (NULL);
	}
	return (&clnt_res);
}
