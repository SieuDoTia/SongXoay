CC=clang

danhSach = songXoay.o Mau.o PNG.o

songXoay: $(danhSach)
	$(CC) -o songXoay -lz -lm $(danhSach)

# ====
songXoay.o: songXoay.c
	$(CC) -c songXoay.c

Mau.o: Mau.c Mau.h
	$(CC) -c Mau.c

PNG.o: PNG.c PNG.h
	$(CC) -c PNG.c


# ==== LÀM SẠCH
clean:	
	rm $(danhSach)
