int int_shifts_are_arithmetic()
{
    int x = ~0;
    
    return (x >> 1) == x;
}
