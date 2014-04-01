x = (Real)(j + 1) / (Real)(n);
y = (Real)(offset + i + 1) / (Real)(n);
b_part[i][j] = h * h * (*f)(x, y);
