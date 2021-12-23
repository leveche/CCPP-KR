/* power: from ch. 1.8 of K&R */

int power (int base, int n) {
  int p;
  for (p=1;n>0;n--) {
    p = p * base;
  }
    return p;
}

int main() {
  power(2,14);
}
