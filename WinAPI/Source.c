#include <Windows.h>

int WINAPI WinMain(HINSTANCE hlnstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	int message = MessageBox(NULL,  L"������", L"APP", MB_YESNOCANCEL| MB_ICONQUESTION);

	switch (message)
	{
		case IDYES:
	{
		MessageBox(NULL, L"�� ������ �� ��", L"APP", NULL);
		break;
	}
	case IDNO:
	{
		MessageBox(NULL, L"�� ������ �� ���", L"APP", NULL);
		break;
	}
	case IDCANCEL:
	{
		MessageBox(NULL, L"��������� �������", L"APP", NULL);
		break;
	}
		
	}
	return 0;


}
