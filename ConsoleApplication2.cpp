#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>

void extremum(int *tab, int *min, int *max) {
	int i = 0;
	*max = *tab;
	*min = *tab;
	for (int i = 0; i < 5; i++) {
		if (*min > tab[i]) {
			*min = tab[i];
		};
		if (*max < tab[i]) {
			*max = tab[i];
		};
	};
};



int main()
{
	int tab[5];
	int min = 0, max = 0;
	std::cout << "Entrer 5 nombre\n";
	for (int i = 0; i < 5; i++) {
		std::cin >> tab[i];
	}
	extremum(tab,&min,&max);
	std::cout << "le maximum est ";
	std::cout << max;
	std::cout << "\n";
	std::cout << "le minimum est ";
	std::cout << min;
}

