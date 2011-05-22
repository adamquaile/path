name = path

all: win7

win7: 
	g++ -D __WIN7__ -D COMMAND_NAME=\"$(name)\" main.cpp -o build/windows/7/$(name).exe