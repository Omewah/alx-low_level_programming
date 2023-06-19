#!/bin/bash

gcc -c -fPIC *.c

gcc -shared -o liball.so *.c

echo "Dynamic Library liball.so created successfully"
