/*Código feito durante o curso técnico de Equipamentos Biomédicos em 2020 para a disciplina sistemas embarcados.
Primeiro projeto maior em C*/

#include <stdio.h>
int main()
{
	int bit, cont, n, vetor7[7], vetor15[15], vetor7neg[7], vetor15neg[15], x = 0, y = 0, deci, g;
	signed int num, t;

	printf("Digite um numero inteiro: ");
	scanf("%d", &num);

	if (num > 0)
	{
		while (y == 0)
		{
			do
			{
				printf("Digite o numero de bits desejado (8 ou 16): ");
				scanf("%d", &bit);
				switch (bit)
				{

				case 8:
					if (num <= 127 && num >= 0)
					{
						y = 1;
						n = num;
						for (cont = 7; cont >= 0; cont--)
						{
							if (n % 2 == 0)
							{
								vetor7[cont] = 0;
								n = n / 2;
							}
							else
							{
								vetor7[cont] = 1;
								n = n / 2;
							}
						}
						printf("O numero em binario eh:\n");
						for (cont = 0; cont <= 7; cont++)
						{
							printf("%d", vetor7[cont]);
						}
						x = 1;
					}
					else
					{
						printf("Seu numero eh incompativel, tente novamente!\n");
						printf("Digite um numero inteiro: ");
						scanf("%d", &num);
					}
					break;

				case 16:
					if (num >= 0 && num <= 32767)
					{
						y = 1;
						n = num;
						for (cont = 15; cont >= 0; cont--)
						{
							if (n % 2 == 0)
							{
								vetor15[cont] = 0;
								n = n / 2;
							}
							else
							{
								vetor15[cont] = 1;
								n = n / 2;
							}
						}
						printf("O numero em binario eh:\n");
						for (cont = 0; cont <= 15; cont++)
						{
							printf("%d", vetor15[cont]);
						}
						x = 1;
					}
					else
					{
						printf("Seu numero eh incompativel, tente novamente!\n");
						printf("Digite um numero inteiro: ");
						scanf("%d", &num);
					}
					break;

				default:
					printf("O numero de bits eh invalido! Tente novamente!\n");
					break;
				}
			} while (x == 0);
		}
	}
	else
	{
		while (y == 0)
		{
			do
			{
				printf("Digite o numero de bits desejado (8 ou 16): ");
				scanf("%d", &bit);
				switch (bit)
				{

				case 8:
					if (num < 0)
					{
						y = 1;
						n = num;
						for (cont = 7; cont >= 0; cont--)
						{
							if (n % 2 == 0)
							{
								vetor7[cont] = 0;
								n = n / 2;
							}
							else
							{
								vetor7[cont] = 1;
								n = n / 2;
							}
						}
						x = 1;
					}
					else
					{
						printf("Seu numero eh incompativel, tente novamente!\n");
						printf("Digite um numero inteiro: ");
						scanf("%d", &num);
					}

					for (cont = 0; cont <= 7; cont++)
					{
						if (vetor7[cont] == 0)
						{
							vetor7[cont] = 1;
						}
						else
						{
							vetor7[cont] = 0;
						}
					}

					deci =
						(vetor7[7] * 1) + (vetor7[6] * 2) + (vetor7[5] * 4) +
						(vetor7[4] * 8) + (vetor7[3] * 16) + (vetor7[2] * 32) +
						(vetor7[1] * 64) + (vetor7[0] * 128);
					++deci;
					g = deci;
					for (cont = 7; cont >= 0; cont--)
					{
						if (g % 2 == 0)
						{
							vetor7neg[cont] = 0;
							g = g / 2;
						}
						else
						{
							vetor7neg[cont] = 1;
							g = g / 2;
						}
					}
					printf("O numero em binario eh:\n");
					for (cont = 0; cont <= 7; cont++)
					{
						printf("%d", vetor7neg[cont]);
					}

					break;

				case 16:
					if (num < -127)
					{
						y = 1;
						n = num;
						for (cont = 15; cont >= 0; cont--)
						{
							if (n % 2 == 0)
							{
								vetor15[cont] = 0;
								n = n / 2;
							}
							else
							{
								vetor15[cont] = 1;
								n = n / 2;
							}
						}
						x = 1;
					}
					else
					{
						printf("Seu numero eh incompativel, tente novamente!\n");
						printf("Digite um numero inteiro: ");
						scanf("%d", &num);
					}

					for (cont = 0; cont <= 15; cont++)
					{
						if (vetor15[cont] == 0)
						{
							vetor15[cont] = 1;
						}
						else
						{
							vetor15[cont] = 0;
						}
					}

					deci =
						(vetor15[15] * 1) + (vetor15[14] * 2) +
						(vetor15[13] * 4) + (vetor15[12] * 8) +
						(vetor15[11] * 16) + (vetor15[10] * 32) +
						(vetor15[9] * 64) + (vetor15[8] * 128) +
						(vetor15[7] * 256) + (vetor15[6] * 512) +
						(vetor15[5] * 1024) + (vetor15[4] * 2048) +
						(vetor15[3] * 4096) + (vetor15[2] * 8192) +
						(vetor15[1] * 16384) + (vetor15[0] * 32768);
					++deci;

					g = deci;

					for (cont = 15; cont >= 0; cont--)
					{
						if (g % 2 == 0)
						{
							vetor15neg[cont] = 0;
							g = g / 2;
						}
						else
						{
							vetor15neg[cont] = 1;
							g = g / 2;
						}
					}
					if (x != 0)
					{
						printf("O numero em binario eh:\n");
						for (cont = 0; cont <= 15; cont++)
						{
							printf("%d", vetor15neg[cont]);
						}
					}

					break;

				default:
					printf("O numero de bits eh invalido! Tente novamente!\n");
					break;
				}
			} while (x == 0);
		}
	}
	return 0;
}
