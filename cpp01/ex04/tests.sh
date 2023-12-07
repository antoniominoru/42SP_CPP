#!bin/bash

BIN=sedlosers
F1=empty
F2=fileTest
F3=$F2.replace

make

if [ $? -eq 0 ]; then
	echo -e "Create a program that takes three parameters in the following order: a filename and
two strings, s1 and s2.\nIt will open the file\nReplacing every occurrence of s1 with s2." > $F2
	echo -e "\e[32m File created successfully \e[0m"
	echo
	cat $F2

	echo
	echo -e "\e[32mTest 1: Replace character 'a' with 'f'\e[0m \n"
	./$BIN $F2 "a" "f" && cat $F3

	echo
	echo -e "\e[32mTest 2: Replace 'program' with 'good'\e[0m \n"
	./$BIN $F2 "program" "good" && cat $F3

	echo
	echo -e "\e[32mTest 3: Replace 'three parameters' with 'new long phrase that will be replaced - hello Word'\e[0m \n"
	./$BIN $F2 "three parameters" "new long phrase that will be replaced - hello Word" && cat $F3

	echo
	touch $F1
	echo -e "\e[32mTest 4: Empty file\e[0m \n"
	./$BIN $F1 "takes" "leave"

	echo
	echo -e "\e[32mTest 5: Wrong number of arguments.\e[0m \n"
	./$BIN $F2
	./$BIN $F2 "following"

	echo
	echo -e "\e[32mTest 6:Invalid file.\e[0m \n"
	./$BIN invalid "following" "thinking"

	echo
	echo -e "\e[32mTest 7: non-existent string 1.\e[0m \n"
	./$BIN $F2 "hello" "by" && cat $F3

	echo
	echo -e "\e[32mTest 8: s1 empty.\e[0m \n"
	./$BIN $F2 "" "camera"

	echo
	echo -e "\e[32mTest 9: s2 empty.\e[0m \n"
	./$BIN $F2 "every" ""

	echo
	echo -e "\e[32mTest 10: s1 is ' ' an s2 'Now'\e[0m \n"
	./$BIN $F2 " " "Now" && cat $F3

	echo
	echo -e "\e[32mTest 11: s1 and s2 empty.\e[0m \n"
	./$BIN $F2 "" ""

	echo

	rm -rf $F3 $F1 $F2
	make fclean
else
	echo "Compilation error."
fi
