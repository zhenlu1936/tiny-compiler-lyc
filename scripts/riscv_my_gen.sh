make test
riscv-none-elf-gcc -march=rv32im -mabi=ilp32 -O0 ./test/test.s -o ./test/test.o -fPIC
echo "obj compiled to machine code!"