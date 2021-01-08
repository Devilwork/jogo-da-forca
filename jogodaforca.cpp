#include <iostream>
#include <stdlib.h>

int main() {

	char palavra[30], letra[1], secreta[30];
	int tam, i, chances, acertos;
	bool acerto;

	chances = 6;
	tam = 0;
	i = 0;
	acerto = false;
	acertos = 0;

	std::cout << "Fale para seu amigo tampar os olhos e digite a palavra secreta: ";
	std::cin >> palavra;
	system("cls");

	while (palavra[i] != '\0') {
		i++;
		tam++;
	}

	for (i = 0; i < 30; i++) {
		secreta[i] = '-';
	}

	while ((chances > 0) && (acertos < tam)) {

		std::cout << "Chances restantes: " << chances << "\n\n";
		std::cout << "Palavra secreta: ";
		for (i = 0; i < tam; i++) {
			std::cout << secreta[i];
		}
		std::cout << "\n\nDigite uma letra: ";
		std::cin >> letra[0];
		for (i = 0; i < tam; i++) {
			if (palavra[i] == letra[0]) {
				acerto = true;
				acertos++;
				secreta[i] = palavra[i];
			}
		}
		if (! acerto) {
			chances--;
		}
		acerto = false;
		system("cls");

		
	}
	if (acertos == tam) {
		std::cout << "Voce venceu!";
	}else{
			std::cout << "Voce perdeu!";
	}

	system("pause");
	return 0;
}
