name = path

all: 

win7: 
	g++ -D __WIN7__ -D COMMAND_NAME=\"$(name)\" main.cpp -o build/windows/7/$(name).exe

ubuntu1104:
	g++ -D __UBUNTU__ -D COMMAND_NAME=\"$(name)\" main.cpp -o build/ubuntu/11.04/$(name)