#include <stdio.h>
#include <math.h>
int main ( )
{

		//Háromszög területe(Heron-képlet) és kerülete
		int oldal1;
		int oldal2;
		int oldal3;
		printf("Adja meg a háromszög első oldalát: ");
		scanf("%d", &oldal1);
		printf("\n");
		printf("Adja meg a háromszög második oldalát: ");
		scanf("%d", &oldal2);
		printf("\n");
		printf("Adja meg a háromszög harmadik oldalát: ");
		scanf("%d", &oldal3);
		
		int kerulet = oldal1 + oldal2 + oldal3;
		double felkerulet = kerulet / 2;
		double felkeruleta = felkerulet - oldal1;
		double felkeruletb = felkerulet - oldal2;
		double felkeruletc = felkerulet - oldal3;
	double felkeruletszorzas = felkeruleta * felkeruletb * felkeruletc;
		double felkeruletszorzas2 = (felkerulet * felkeruletszorzas);
		double terulet = sqrt(felkeruletszorzas2);
		printf("\n");
		printf("A háromszög kerülete: %d cm\n", kerulet);
		printf("A háromszög területe: %lf cm^2\n", terulet);
		

		return 0;
}
