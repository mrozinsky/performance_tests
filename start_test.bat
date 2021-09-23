echo "Compiling C programs"
gcc -Wall -o "sqrt" "sqrt.c" -lm -w
gcc -Wall -o "inc" "inc.c" -lm -w
echo "Starting INC C"
inc
echo "Starting INC Python"
python -m inc
echo "Starting SQRT C"
sqrt
echo "Starting SQRT Python"
python -m sqrt

