/*
 * This is sample code generated by rpcgen.
 * These are only templates and you can use them
 * as a guideline for developing your own functions.
 */

#include "calculadora.h"


void calc_basica(char *host, double a, double b, char op) {
	CLIENT *clnt;
	dresponse  *result;

	#ifndef	DEBUG
		clnt = clnt_create (host, CALCPROG, CALCVERS, "udp");
		if (clnt == NULL) {
			clnt_pcreateerror (host);
			exit (1);
		}
	#endif	/* DEBUG */


	switch (op) {
		case '+':
			result = suma_1(a, b, clnt);
			break;
		case '-':
			result = resta_1(a, b, clnt);
			break;
		case 'x':
			result = multiplica_1(a, b, clnt);
			break;
		case '/':
			result = divide_1(a, b, clnt);
			break;
		default:
			printf ("op erronea\n");
			break;
	}

	if (result == (dresponse *) NULL) {
		clnt_perror (clnt, "call failed");
	} else {
		printf("%lf %c %lf = %lf\n", a, op, b, result->dresponse_u.res);
	}

	#ifndef	DEBUG
		clnt_destroy (clnt);
	#endif	 /* DEBUG */
}

void calc_distancia(char *host, coordenadas a, coordenadas b, char op) {
	CLIENT *clnt;
	dresponse  *result;

	#ifndef	DEBUG
		clnt = clnt_create (host, CALCPROG, CALCVERS, "udp");
		if (clnt == NULL) {
			clnt_pcreateerror (host);
			exit (1);
		}
	#endif	/* DEBUG */


	switch (op) {
		case 'm':
			result = dmanhattan_1(a, b, clnt);
			break;
		case 'e':
			result = deuclides_1(a, b, clnt);
			break;
		default:
			printf ("op erronea\n");
			break;
	}

	if (result == (dresponse *) NULL) {
		clnt_perror (clnt, "call failed");
	} else {
		printf("distancia %c ((%lf, %lf), (%lf, %lf))= %lf\n", op, a.x, a.y, b.x, b.y, result->dresponse_u.res);
	}

	#ifndef	DEBUG
		clnt_destroy (clnt);
	#endif	 /* DEBUG */
}

void calc_vector(char *host, arr a, arr b, char op) {
	CLIENT *clnt;
	dresponse *result;
	vresponse *vresult;

	#ifndef	DEBUG
		clnt = clnt_create (host, CALCPROG, CALCVERS, "udp");
		if (clnt == NULL) {
			clnt_pcreateerror (host);
			exit (1);
		}
	#endif	/* DEBUG */


	switch (op) {
		case '+':
			vresult = sumavectores_1(a, b, clnt);
			break;
		case '-':
			vresult = restavectores_1(a, b, clnt);
			break;
		case 'x':
			vresult = multiplicavectores_1(a, b, clnt);
			break;
		case '/':
			vresult = dividevectores_1(a, b, clnt);
			break;
		case 'r':
			result = reduce_1(a, clnt);
			break;
		default:
			printf ("op erronea\n");
			break;
	}

	if (op == 'r') {
		if (result == (dresponse *) NULL) {
			clnt_perror (clnt, "call failed");
		} else {
			printf("Reducción A = [");
			for (int i = 0; i < a.arr_len; i++) {
				printf(" %lf ", a.arr_val[i]);
			}
			printf("] = %lf\n", result->dresponse_u.res);
		}
	} else {
		if (vresult == (vresponse *) NULL) {
			clnt_perror (clnt, "call failed");
		} else {
			printf("[");
			for (int i = 0; i < a.arr_len; i++) {
				printf(" %lf ", a.arr_val[i]);
			}
			printf("] %c [", op);
			for (int i = 0; i < b.arr_len; i++) {
				printf(" %lf ", b.arr_val[i]);
			}
			printf("] = [");
			for (int i = 0; i < a.arr_len; i++) {
				printf(" %lf ", vresult->vresponse_u.res.arr_val[i]);
			}
			printf("]\n");
		}
	}

	#ifndef	DEBUG
		clnt_destroy (clnt);
	#endif	 /* DEBUG */
}

void calc_matrix(char *host, matrix a, matrix b, char op) {
	CLIENT *clnt;
	mresponse *mresult;

	#ifndef	DEBUG
		clnt = clnt_create (host, CALCPROG, CALCVERS, "udp");
		if (clnt == NULL) {
			clnt_pcreateerror (host);
			exit (1);
		}
	#endif	/* DEBUG */


	switch (op) {
		case '+':
			mresult = sumamatrix_1(a, b, clnt);
			break;
		case '-':
			mresult = restamatrix_1(a, b, clnt);
			break;
		default:
			printf ("op erronea\n");
			break;
	}

	if (mresult == (mresponse *) NULL) {
		clnt_perror (clnt, "call failed");
	} else {
		printf("[\n");
		int i = 0;
		while (i < a.rows) {
			for (int j = 0; j < a.cols; j++) {
				printf(" %lf ", a.mat.arr_val[i * a.cols + j]);
			}
			i++;
			printf("\n");
		}
		printf("]\n");
		printf("%c [\n", op);
		i = 0;
		while (i < b.rows) {
			for (int j = 0; j < b.cols; j++) {
				printf(" %lf ", b.mat.arr_val[i * b.cols + j]);
			}
			i++;
			printf("\n");
		}
		printf("]\n");
		printf("= [\n");
		i = 0;
		while (i < mresult->mresponse_u.res.rows) {
			for (int j = 0; j < mresult->mresponse_u.res.cols; j++) {
				printf(" %lf ", mresult->mresponse_u.res.mat.arr_val[i * mresult->mresponse_u.res.cols + j]);
			}
			i++;
			printf("\n");
		}
		printf("]\n");
	}

	#ifndef	DEBUG
		clnt_destroy (clnt);
	#endif	 /* DEBUG */
}

int main (int argc, char *argv[]) {
	char *server;

	char type = '0'; // [b, d, v]

	char op; // [+, -, x, /] o [m, e] o [+, -, x, /, r]
	double a;
	double b;
	coordenadas ca;
	coordenadas cb;
	arr va;
	arr vb;
	matrix ma;
	matrix mb;

	if (argc != 2) {
		printf ("usage: %s server_server\n", argv[0]);
		exit (1);
	}

	server = argv[1];

	while (type != 'x') {
		int c;
		if (c != '\n') { printf("Pulse intro para continuar\n"); }
		while ((c = getchar()) != '\n' && c != EOF) { }
		printf ("\nElija tipo de operación:\n\tb (Básica + - x /)\n\td (cálculo de Distancia manhattan o euclidea)\n\tv operaciones con Vectores\n\tm operaciones con matrices\n\tx eXit\n");
		scanf("%c", &type);

		if (type == 'b') {
			printf("Introduzca operación (operandoA operador operandoB, separados por espacios)(operandos disponibles: + - x /): ");
			scanf("%lf %c %lf", &a, &op, &b);
			calc_basica(server, a, b, op);
		} else if (type == 'd') {
			double ax, ay, bx, by;
			printf("Introduzca coordenadas de los puntos y elija tipo de distancia (m (manhattan), e (euclides)) \ncoordenadaAX coordenadaAY coordenadaBX coordenadaBY operacion, separados por espacios: \n");
			scanf("%lf %lf %lf %lf %c", &ax, &ay, &bx, &by, &op);
			ca = (coordenadas){ax, ay};
			cb = (coordenadas){bx, by};
			calc_distancia(server, ca, cb, op);
		} else if (type == 'v') {
			int length;
			printf("Introduzca tamaño de vector y operación:\n\tr reducción con suma de un vector\n\t+ suma dos vectores\n\t- resta dos vectores\n\tx multiplica dos vectores\n\t/ divide dos vectores\n");
			scanf("%d %c", &length, &op);
			va.arr_len = length;
			vb.arr_len = length;

			double auxA[length];
			double auxB[length];
			double aux;
			for (int i = 0; i < length; i++) {
				printf("Introduzca A[%d]: ", i);
				scanf("%lf", &aux);
				auxA[i] = aux;
			}

			va.arr_val = auxA;

			if (op != 'r') {
				for (int i = 0; i < length; i++) {
					printf("Introduzca B[%d]: ", i);
					scanf("%lf", &aux);
					auxB[i] = aux;
				}
				vb.arr_val = auxB;
			}
			calc_vector(server, va, vb, op);
		} else if (type == 'm') {
			int col;
			int row;
			int elems;
			printf("Introduzca numero de filas y columnas de las matrices y operación\n\t+ suma dos matrices\n\t- resta dos matrices\n");
			scanf("%d %d %c", &row, &col, &op);
			elems = col * row;
			ma.cols = col;
			ma.rows = row;
			ma.mat.arr_len = elems;
			mb.cols = col;
			mb.rows = row;
			mb.mat.arr_len = elems;

			double auxA[elems];
			double auxB[elems];
			double aux;

			int i = 0;
			while (i < row) {
				for (int j = 0; j < col; j++) {
					printf("Introduzca A[%d][%d]: ", i, j);
					scanf("%lf", &aux);
					auxA[i * col + j] = aux;
				}
				i++;
			}

			ma.mat.arr_val = auxA;

			i = 0;
			while (i < row) {
				for (int j = 0; j < col; j++) {
					printf("Introduzca B[%d][%d]: ", i, j);
					scanf("%lf", &aux);
					auxB[i * col + j] = aux;
				}
				i++;
			}

			mb.mat.arr_val = auxB;

			calc_matrix(server, ma, mb, op);
		}
		fflush(stdin);
	}

	exit (0);
}
