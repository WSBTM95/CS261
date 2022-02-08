char hwkThree(unsigned int x) {
    char expo;
    unsigned int i = 1;
    unsigned int j = 0;
    int buffer;
    while (x > ((2 * i)-1))
    {
        i *= 2;
    }
    for (i; i > 0; i /= 2) {
        buffer = x - i;
        if (buffer >= 0) {
            x -= i;
            j++;
        }else if (buffer < 0) {
            j++;
        }
    }expo = j + 126;
    return expo;
}
