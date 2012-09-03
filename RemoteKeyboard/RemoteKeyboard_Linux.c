/*
 * This is a real-time Android remote program, written in C.
 * Real-time meaning that you don't need to press RETURN to enter individual
 * characters. Just select the terminal window and type away!
 *
 * This is a port of the Windows version to Unix, using curses/ncurses as a replacement for conio.
 *
 * As always, you'll need ADB accessible from the terminal. Already installed
 * or packaged with the executable, it shouldn't matter.
 *
 * Author: omegavesko@gmail.com
 */

 #include <stdio.h>
 #include <curses.h>

 void adb(int input);

 int main()
 {
 	char keyboard_input;
 	char keyboard_input_2;

 	for(;;)
 	{
 		if(kbhit())
 		{
 			keyboard_input = getch();

 			
 				switch(keyboard_input)
 				{
 					case '0':
 						adb(7);
 						break;
 					case '1':
 						adb(8);
 						break;
 					case '2':
 						adb(9);
 						break;
 					case '3':
 						adb(10);
 						break;
 					case '4':
 						adb(11);
 						break;
 					case '5':
 						adb(12);
 						break;
 					case '6':
 						adb(13);
 						break;
 					case '7':
 						adb(14);
 						break;
 					case '8':
 						adb(15);
 						break;
 					case '9':
 						adb(16);
 						break;
 					case 'a':
 						adb(29);
 						break;
 					case 'b':
 						adb(30);
 						break;
 					case 'c':
 						adb(31);
 						break;
 					case 'd':
 						adb(32);
 						break;
 					case 'e':
 						adb(33);
 						break;
 					case 'f':
 						adb(34);
 						break;
 					case 'g':
 						adb(35);
 						break;
 					case 'h':
 						adb(36);
 						break;
 					case 'i':
 						adb(37);
 						break;
 					case 'j':
 						adb(38);
 						break;
 					case 'k':
 						adb(39);
 						break;
 					case 'l':
 						adb(40);
 						break;
 					case 'm':
 						adb(41);
 						break;
 					case 'n':
 						adb(42);
 						break;
 					case 'o':
 						adb(43);
 						break;
 					case 'p':
 						adb(44);
 						break;
 					case 'q':
 						adb(45);
 						break;
 					case 'r':
 						adb(46);
 						break;
 					case 's':
 						adb(47);
 						break;
 					case 't':
 						adb(48);
 						break;
 					case 'u':
 						adb(49);
 						break;
 					case 'v':
 						adb(50);
 						break;
 					case 'w':
 						adb(51);
 						break;
 					case 'x':
 						adb(52);
 						break;
 					case 'y':
 						adb(53);
 						break;
 					case 'z':
 						adb(54);
 						break;
 					case ',':
 						adb(55);
 						break;
 					case '.':
 						adb(56);
 						break;
 					case ' ':
 						adb(62);
 						break;
 					case '-':
 						adb(69);
 						break;
 					case '=':
 						adb(70);
 						break;
 					case '(':
 						adb(71);
 						break;
 					case ')':
						adb(72);
						break;
					case '\\':
						adb(73);
						break;
					case ';':
						adb(74);
						break;
					case '\'':
						adb(75);
						break;
					case '/':
						adb(76);
						break;
					case '+':
						adb(81);
						break;
 				}
 			
 		}
 	}

 	return 0;
 }

 void adb(int input)
 {
 	char command[50];

 	sprintf(command, "adb shell input keyevent %d", input);
 	system(command);
 }
