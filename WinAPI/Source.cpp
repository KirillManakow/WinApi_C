#include <Windows.h>

int WINAPI WinMain(HINSTANCE hlnstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int message = MessageBox(NULL,  L"Ошибка", L"APP", MB_YESNOCANCEL| MB_ICONQUESTION);

	switch (message)
	{
		case IDYES:
	{
		MessageBox(NULL, L"Вы нажали на ДА", L"APP", NULL);
		break;
	}
	case IDNO:
	{
		MessageBox(NULL, L"Вы нажали на НЕТ", L"APP", NULL);
		break;
	}
	case IDCANCEL:
	{
		MessageBox(NULL, L"Программа закрыта", L"APP", NULL);
		break;
	}
		
	}
	return 0;


}
