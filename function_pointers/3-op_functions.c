/**
 * op_add - suma
 *
 * @a: numero1
 * @b: numero2
 *
 * Return: numeros sumados
 */
int op_add(int a, int b)
{
	int sumados = 0;

	sumados = a + b;
	return (sumados);
}
int op_sub(int a, int b)
{
	int restados = 0;

	restados = a - b;
	return (restados);
}
int op_mul(int a, int b)
{
	int multiplicados = 0;

	multiplicados = a * b;
	return (multiplicados);
}
int op_div(int a, int b)
{
	int divididos = 0;

	divididos = a / b;
	return (divididos);
}
int op_mod(int a, int b)
{
	int modulo = 0;

	modulo = a % b;
	return(modulo);
}
