/*
 * This program sends a string as input to an Android device (not an emulator),
 * over ADB. ADB.EXE should be included, so all the user needs to do is enable
 * USB debugging and install specific phone drivers, if necessary.
 *
 * It loops indefinitely, so there's no need to run it again. One can exit the
 * program using ^C or ^Z on Unix.
 *
 * It SHOULD also work on Mac/Linux, assuming the Android SDK is installed
 * and $PATH has been correctly updated (if it has, typing 'adb' into a terminal
 * emulator should work).
 *
 * Author: omegavesko@gmail.com
 */

#include <stdio.h>

int main()
{
	char runString[100];
	char userInput[100];

	for(;;)
	{
		sprintf(runString, "adb -d shell input text ");
		scanf("%s", &userInput);

		sprintf(runString, "%s%s", runString, userInput);

		system(runString);
	}
} 