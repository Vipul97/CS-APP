unsigned replace_byte (unsigned x, int i, unsigned char b)
{
    int bytenum = i << 3;

    return (x & ~(0xFF << bytenum)) | (b << bytenum);
}
