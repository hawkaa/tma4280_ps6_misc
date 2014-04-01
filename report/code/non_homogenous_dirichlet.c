x = (Real)(j + 1) / (Real)(n);
y = (Real)(offset + i + 1) / (Real)(n);
b_part[i][j] = h * h * (*f)(x, y);
if (/* top row */)
	b_part[i][j] += (*u)(x, 0);
if (/* bottom row */)
	b_part[i][j] += (*u)(x, 1);
if (/* left column */)
	b_part[i][j] += (*u)(0, y);
if (/* right column */)
	b_part[i][j] += (*u)(1, y));
	
	
