echo "begin compile"
# chmod a+x build.bat #it is necessary in order to make build.bat executable. It should be executed a single time, after the file creation
g++ -g -o cppBasicsProgram main.cpp -lCppUTest -std=c++11
echo "end compile"