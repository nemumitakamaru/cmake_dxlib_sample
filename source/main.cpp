#include <DxLib.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);

	if(DxLib_Init() == -1)
	{
		return -1;
	}

	DrawFormatString(0, 0, GetColor(255, 255, 255), "Hello DxLib");

	WaitKey();

	DxLib_End();

	return 0;
}