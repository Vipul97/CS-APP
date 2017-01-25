int mask(int x, int y)
{
    return (x & 0xFF) | (y & ~0xFF);
}
