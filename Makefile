CC=clang
CPP=clang++

triangle:triangle.cpp
	$(CC) -otriangle triangle.cpp -lGL -lglut
clean:
	rm triangle

