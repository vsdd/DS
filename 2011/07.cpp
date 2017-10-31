double fun(int n)
{
	double s;
	if(n == 1)
	return 1;
	s = n + fun(n-1);
	return s;
}

main()
{
	double sum;
	int n;
	printf("Input n:");
	scanf("&d", &n);
	sum = fun(n);
	printf("The result is %lf\n", sum);
}
