extern void print();

static char next(char c)
{
	char d;
	d=c+1;
	print();

	return d;
}

char fn(char c)
{
	return next(c);
}
