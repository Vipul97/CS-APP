long decode2(long x, long y, long z)
{
    long t1 = y - z;
    long t2 = x * t1;
    long t3 = (t1 << 63) >> 63;
    long t4 = t3 ^ t2;

  return t4;
}
