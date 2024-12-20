// Задача 2. Дан непустой массив A, содержащий n натуральных чисел.
// Назовем «серией» группу подряд идущих одинаковых элементов, 
// а длиной серии – количество этих элементов (длина серии может быть равна 1).
// Найти длину наибольшей серии.
int task2(unsigned A[], size_t n)
{
    int count = 1;
    int mxcount = 1;

    for (int i = 1; i < n; i++) 
    {
        if (A[i - 1] == A[i]) 
        {
            count += 1;
            if (count > mxcount)
                mxcount = count;
        }
        if (A[i - 1] != A[i])
            count = 1;
    }
    return mxcount;
}
