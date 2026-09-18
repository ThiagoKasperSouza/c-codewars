#include <stdio.h>
#include <limits.h>

const char *even_bin(int value) {
  unsigned int mask = 1 << sizeof (int) * CHAR_BIT - 1;
  unsigned int sum;
  unsigned int bit;
  while(mask) {
        bit = (value&mask ? 1 : 0);
        sum += bit;
        mask >>= 1;
    }
  if(sum %2 ==0) {
    return "It's Even!";
  }
    return "It's Odd!";
}

int main() {
    printf("The number of 1's in the binary rep: \n");
    printf("%s\n",even_bin(0));
    printf("%s\n",even_bin(1));
    printf("%s\n",even_bin(2));
    printf("%s\n",even_bin(3));
    printf("%s\n",even_bin(4));
    printf("%s\n",even_bin(5));
    printf("%s\n",even_bin(6));
    printf("%s\n",even_bin(7));
    printf("%s\n",even_bin(711829134));
    return 0;

}
