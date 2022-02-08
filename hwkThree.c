char hwkThree(unsigned int x) {
    char expo;
    char string[33];
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
            string[j] = '1';
            j++;
        }else if (buffer < 0) {
            string[j] = '0';
            j++;
        }
        if (j == 8) {
            string[j] = '\0';
            break;
        }
    }
//printf("%s ", string);
    buffer = 128;
    j = 0;
    for (i = 0; i < 8; i++) {
        if (string[i] == '1') {
            j += buffer;
            buffer /= 2;
        }else {
            buffer /= 2;
        }
    }
//printf("%i ", j);
    j -= 127;
//printf("%i ", j);
    expo = j;
    return expo;
}
