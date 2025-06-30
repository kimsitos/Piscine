#define SIZE 4

int	*arryval(char *arg, int quar)
{
	int	*values;
	int	i;

	i = 0;
	quar = quar * 2;
	if (!(quar > SIZE || quar <= 1))
		arg = arg + quar;
	values = (int *) malloc (sizeof(int ) * SIZE);
	while (*arg && i < (SIZE + quar))
	{
		if (*arg != ' ')
		{
			values[i] = *arg;
			i++;
		}
		arg++;
	}
	return (values);
}

int main(int argc, char const *argv[])
{

  // Llamamos a la función up para almacenar los caracteres
    int *row_up = arryval(argv[1], 1);
	int *row_down = arryval(argv[1], 2);
	int *col_left = arryval(argv[1], 3);
	int *col_right = arryval(argv[1], 4);

    // Si la memoria se asignó correctamente, imprimimos el contenido
    if (row_up != NULL)
    {
        printf("Los primeros %d caracteres (como valores ASCII) son:\n", SIZE);
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", row_up[i]);
        }
        printf("\n");

		printf("Los segundos %d caracteres (como valores ASCII) son:\n", SIZE);
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", row_down[i]);
        }
        printf("\n");

		printf("Los terceros %d caracteres (como valores ASCII) son:\n", SIZE);
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", col_left[i]);
        }
        printf("\n");

		printf("Los cuartos %d caracteres (como valores ASCII) son:\n", SIZE);
        for (int i = 0; i < SIZE; i++)
        {
            printf("%d ", col_right[i]);
        }
        printf("\n");
	// Liberamos la memoria asignada
        free(row_up);
		free(row_down);
		free(col_left);
		free(col_right);
	}
}