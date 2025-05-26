riscv-none-elf-gcc -march=rv32im -mabi=ilp32 -O0 ./test/test.c -S -o ./test/test_t.s -fPIC
riscv-none-elf-gcc -march=rv32im -mabi=ilp32 -O0 ./test/test.c -o ./test/test.o -fPIC
echo "obj compiled to machine code!"
