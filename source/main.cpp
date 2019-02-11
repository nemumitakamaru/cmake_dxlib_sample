#include <DxLib.h>

#include <Utility/UtilityString.h>

int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nCmdShow)
{
	ChangeWindowMode(TRUE);

	if(DxLib_Init() == -1)
	{
		return -1;
	}

	DrawFormatString(0, 0, GetColor(255, 255, 255), UtilityString::GetHelloString());

	WaitKey();

	DxLib_End();

	return 0;
}
