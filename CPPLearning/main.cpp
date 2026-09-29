#include <iostream>
#include <Windows.h>
#include <locale>
#include <random>

int main()
{
	const int Row = 50;
	const int Col = 50;

	int Arr[Row][Col];


	for (int i = 0; i < Row; ++i)
	{
		for (int j = 0; j < Col; ++j)
		{
			Arr[i][j] = std::rand() % 10;
			std::cout << Arr[i][j] << " ";
		}

		std::cout << std::endl;
	}



	/*
	int Arr[10];
	int Size = sizeof(Arr) / sizeof(Arr[0]);

	int SumMax = 0;
	int SumMin = 0;
	int Sr = 0;

	for (int i = 0; i < Size; ++i)
	{
		Arr[i] = std::rand() % 21 - 10;
	}

	std::cout << "\n";

	for (int& i : Arr)
	{
		std::cout << i << std::endl;
		if (i < 0)
		{
			SumMin += i;
		}
		else if (i > 0)
		{
			SumMax += i;
		}
	}

	std::cout << std::endl << "SumMax: " << SumMax << std::endl << "SumMin: " << SumMin << std::endl << "Sr: " << (static_cast<float>(SumMin + SumMax)) / static_cast<float>(Size);*/

	/*
	SetConsoleOutputCP(1251);
	SetConsoleCP(1251);

	int choose = 0, randomNum = 0, number = 0;
	int hp = 0, maxHp = 25, maxHpHard = 25;
	int chance = 30;
	while (true)
	{
		system("cls");
		std::cout << "\n\n\nИгра \"Угадай число\"\n\n";
		std::cout << "1 - начать игру\n";
		std::cout << "2 - настройки\n";
		std::cout << "0 - выход\n\n";
		std::cout << "Ввод: ";
		std::cin >> choose;
		if (choose == 1) {
			while (true) {
				system("cls");
				std::cout << "\n\n\nВыберите уровень сложности\"\n\n";
				std::cout << "1 - легкий (1 - 500)\n";
				std::cout << "2 - сложный (1 - 5000)\n";
				std::cout << "0 - выход в главное меню\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				if (choose == 1) {
					randomNum = rand() % 500 + 1;
					hp = maxHp;
					while (true) {
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 500: ";
						std::cin >> number;
						if (randomNum == number) {
							std::cout << "Вы угадали! Поздравляем\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 500)
						{
							std::cout << "Вы вышли за лимиы\n";
							Sleep(1000);
						}
						else {
							hp--;
							std::cout << "Не верно\n\n";
							Sleep(1400);
							system("cls");
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1) {
								hp--;
								if (hp <= 0)
								{
									std::cout << "Вы проиграли!\n";
									std::cout << "Число компьютера было: " << randomNum << "\n";
									system("pause");
									break;
								}
								if (number < randomNum) {
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else {
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else {
								std::cout << "Отказ от подсказки\n";
							}
						}
					}
				}
				else if (choose == 2) {
					randomNum = rand() % 5000 + 1;
					hp = maxHpHard;
					while (true) {
						system("cls");
						std::cout << "Кол-во жизней: " << hp << "\n";
						std::cout << "Введите число от 1 до 5000: ";
						std::cin >> number;

						if (randomNum == number) {
							std::cout << "Вы угадали! Поздравляем\n";
							system("pause");
							break;
						}
						else if (number < 1 || number > 5000)
						{
							std::cout << "Вы вышли за лимиы\n";
							Sleep(1000);
						}
						else {
							hp--;
							std::cout << "Не верно\n\n";
							Sleep(1400);
							system("cls");
							std::cout << "Кол-во жизней: " << hp << "\n";
							std::cout << "Взять подсказку за 1 жизнь?\n";
							std::cout << "1 - Да\nЛюбое число - нет\nВвод: ";
							std::cin >> choose;
							if (choose == 1) {
								if (rand() % 101 <= chance)
								{
									std::cout << "Бесплатная подсказка\n";
									Sleep(1000);
								}
								else {
									hp--;
									if (hp <= 0)
									{
										std::cout << "Вы проиграли!\n";
										std::cout << "Число компьютера было: " << randomNum << "\n";
										system("pause");
										break;
									}
								}

								if (number < randomNum) {
									std::cout << "Ваше число меньше числа компьютера\n";
								}
								else {
									std::cout << "Ваше число больше числа компьютера\n";
								}
								Sleep(1500);
							}
							else {
								std::cout << "Отказ от подсказки\n";
							}
						}
					}
				}
				else if (choose == 0) {
					system("cls");
					std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
					break;
				}
				else {
					std::cout << "\nНекорректный ввод\n";
					Sleep(1500);
				}
			}
		}
		else if (choose == 2) {
			while (true) {
				std::cout << "\n\n\nНастройки игры\"\n\n";
				std::cout << "1 - настройки жизней легкой игры\n";
				std::cout << "2 - настройки жизней сложной игры\n";
				std::cout << "3 - шанс бесплатной подсказки сложной игры\n\n";
				std::cout << "0 - выход\n\n";
				std::cout << "Ввод: ";
				std::cin >> choose;
				if (choose == 1) {
					while (true) {
						std::cout << "Введите количество жизней для легкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 333) {
							std::cout << "Допустимые значения от 1 до 333\n";
							Sleep(1500);
						}
						else {
							std::cout << "Успешно\n";
							maxHp = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 2) {
					while (true) {
						std::cout << "Введите количество жизней для легкой игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 333) {
							std::cout << "Допустимые значения от 1 до 333\n";
							Sleep(1500);
						}
						else {
							std::cout << "Успешно\n";
							maxHpHard = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 3) {
					while (true) {
						std::cout << "Введите шанс бесплатной подсказки для сложной игры: ";
						std::cin >> choose;
						if (choose < 1 || choose > 100) {
							std::cout << "Допустимые значения от 1 до 100\n";
							Sleep(1500);
						}
						else {
							std::cout << "Успешно\n";
							chance = choose;
							Sleep(1500);
							break;
						}
					}
				}
				else if (choose == 0) {
					system("cls");
					std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
					break;
				}
				else {

				}
			}
		}
		else if (choose == 0) {
			system("cls");
			std::cout << "\n\n\n\t\tСпасибо за игру\n\n\n";
			break;
		}
		else {
			std::cout << "\nНекорректный ввод\n";
			Sleep(1500);
		}
	}
	return 0;*/
}