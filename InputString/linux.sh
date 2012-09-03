#!/bin/bash
# This script will run the program on Linux properly.
# You need to supply an existing Android SDK install, with platform-tools installed as well.
# You can do this either by passing an argument, or inputting it when the script asks you for it.
# The script needs to be run as root, as the ADB server needs elevated permissions to run properly. 

if test -z "$1"
then
	echo "Where is the android-sdk-linux folder located?"
	read adb_location
else
	adb_location=$1
fi

$adb_location/platform-tools/adb kill-server
$adb_location/platform-tools/adb start-server

PATH=$adb_location/platform-tools/:$PATH

echo "You should see your device here:"
adb devices
echo "Have fun!"
echo "-----------------------"
./InputString
