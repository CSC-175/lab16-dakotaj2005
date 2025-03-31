int gcf (int a, int b) {
    if (b==0) {
        return a;
    }else {
        return gcf (b, a %b);
    }
}
