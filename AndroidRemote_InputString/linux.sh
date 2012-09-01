#!/bin/bash
# This script will run the program on Linux properly.
# You need to supply an existing Android SDK install, with platform-tools installed as well.
# You can do this either by passing an argument, or inputting it when the script asks you for it.

if ( "$1" == "" ); then
	echo "Where is the android-sdk-linux folder located?"
	read adb_location
else
	adb_location = $1
fi

PATH = $adb_location/platform-tools/:$PATH
./AndroidRemote_InputString
