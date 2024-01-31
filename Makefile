main: main.o readBoard.o genOptions.o
	g++ @flags $^ -o $@

main.o: main.cpp
	g++ -c @flags $^

readBoard.o: src/readBoard.cpp
	g++ -c @flags $^

genOptions.o: src/genOptions.cpp
	g++ -c @flags $^


.PHONY: clean wipe
clean:
	ls | grep -E ".*\.o$\" | xargs -I{} rm {}
wipe: clean
	rm main