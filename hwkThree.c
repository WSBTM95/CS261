char hwkThree(unsigned int x) {
    char expo;
    x = x << 1;
    x = x & 0FF00000;
    expo = x - 127;
    return expo;
}
