char hwkThree(unsigned int x) {
    char expo;
    printf("%i ", x);
//    x = x << 1;
//printf("%i ", x);
    x = x & 2139095040; //7F800000
//printf("%i ", x);
    x = x >> 23;
//printf("%i ", x);
    expo = x - 127;
    return expo;
}
