/*
 * Please do not edit this file.
 * It was generated using rpcgen.
 */

#include "calculadora.h"

bool_t
xdr_arr (XDR *xdrs, arr *objp)
{
	register int32_t *buf;

	 if (!xdr_array (xdrs, (char **)&objp->arr_val, (u_int *) &objp->arr_len, ~0,
		sizeof (double), (xdrproc_t) xdr_double))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_coordenadas (XDR *xdrs, coordenadas *objp)
{
	register int32_t *buf;

	 if (!xdr_double (xdrs, &objp->x))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->y))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_dresponse (XDR *xdrs, dresponse *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->errno))
		 return FALSE;
	switch (objp->errno) {
	case 0:
		 if (!xdr_double (xdrs, &objp->dresponse_u.res))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}

bool_t
xdr_vresponse (XDR *xdrs, vresponse *objp)
{
	register int32_t *buf;

	 if (!xdr_int (xdrs, &objp->errno))
		 return FALSE;
	switch (objp->errno) {
	case 0:
		 if (!xdr_arr (xdrs, &objp->vresponse_u.res))
			 return FALSE;
		break;
	default:
		break;
	}
	return TRUE;
}

bool_t
xdr_suma_1_argument (XDR *xdrs, suma_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_resta_1_argument (XDR *xdrs, resta_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_multiplica_1_argument (XDR *xdrs, multiplica_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_divide_1_argument (XDR *xdrs, divide_1_argument *objp)
{
	 if (!xdr_double (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_double (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_dmanhattan_1_argument (XDR *xdrs, dmanhattan_1_argument *objp)
{
	 if (!xdr_coordenadas (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_coordenadas (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_deuclides_1_argument (XDR *xdrs, deuclides_1_argument *objp)
{
	 if (!xdr_coordenadas (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_coordenadas (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_sumavectores_1_argument (XDR *xdrs, sumavectores_1_argument *objp)
{
	 if (!xdr_arr (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_arr (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_restavectores_1_argument (XDR *xdrs, restavectores_1_argument *objp)
{
	 if (!xdr_arr (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_arr (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_multiplicavectores_1_argument (XDR *xdrs, multiplicavectores_1_argument *objp)
{
	 if (!xdr_arr (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_arr (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}

bool_t
xdr_dividevectores_1_argument (XDR *xdrs, dividevectores_1_argument *objp)
{
	 if (!xdr_arr (xdrs, &objp->arg1))
		 return FALSE;
	 if (!xdr_arr (xdrs, &objp->arg2))
		 return FALSE;
	return TRUE;
}
