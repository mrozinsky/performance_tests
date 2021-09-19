echo "Compiling C programs"
pwd
gcc -Wall -o "sqrt" "sqrt.c" -lm
gcc -Wall -o "inc" "inc.c" -lm
echo "Starting SQRT C"
./sqrt.exe
echo "Starting SQRT Python"
python -m sqrt.py

