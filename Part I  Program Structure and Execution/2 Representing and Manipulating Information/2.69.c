unsigned rotate_left(unsigned x, int n)
{
    int w = sizeof(int) << 3;

    return (x << n) | (x >> (w - n) & ((1 << n) - 1));
}
