#include <stdio.h>
#include <windows.h>

void Run_in_Background(int visibility)
{
    HWND window; //defines a handle to a window
    window = FindWindowA("ConsoleWindowClass",NULL); //returns the handle of the current window
    ShowWindow(window, visibility); //if visibility=0, then it runs in the background. If not, then the window shows.
}

int main()
{
    Run_in_Background(0);
    while(1);
    system("pause");
}
MatrixmatrixMatrixmatrix


xxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxxMatrixmatrix