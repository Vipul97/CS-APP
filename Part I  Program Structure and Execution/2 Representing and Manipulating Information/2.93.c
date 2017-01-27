float_bits float_absval(float_bits f)
{
    unsigned exp = f >> 23 && 0xFF;
    unsigned frac = f & 0x7FFFFF;

    if (exp == 0xFF && frac != 0)
        return f;

    return (exp << 23) | frac;
}
