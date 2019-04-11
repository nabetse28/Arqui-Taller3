CFLAGS= -msse4 -msse2 
HELLO= hello_simd
MAX= max_number
MUL= multiplication

all: 
	$(CC) $(HELLO).c -o $(HELLO)
	$(CC) $(MAX).c -o $(MAX)
	$(CC) $(MUL).c -o $(MUL) $(CFLAGS)
	@echo "All files compiled"

clean:
	rm $(HELLO) $(MAX) $(MUL)
	@echo "Executables removed"