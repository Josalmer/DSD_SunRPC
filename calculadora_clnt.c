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
