#include <stdio.h>
#include <Windows.h>

int main()
{
  MessageBox (
    NULL,
    "Hello, Windows",
    "First MessagBox",
    MB_OK | MB_ICONINFORMATION
  );
	return 0;
}
