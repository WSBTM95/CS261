char hwkThree(unsigned int x) {
    char expo;
    x = x << 1;
    x = x & 267386880;
    expo = x - 127;
    return expo;
}
