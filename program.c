#include <stdio.h>
int binarySearch(int books[], int n, int key) {
int low = 0, high = n - 1, mid;
while (low <= high) {
mid = low + (high - low) / 2;
if (books[mid] == key)
return mid;
else if (books[mid] < key)
low = mid + 1;
else
high = mid - 1;
}
return -1;
}
int main() {
int n, key, i, pos;
printf("Enter number of books: ");
scanf("%d", &n);
int books[n];
printf("Enter Book IDs in ascending order:\n");
for (i = 0; i < n; i++) {
scanf("%d", &books[i]);
}
printf("Enter Book ID to search: ");

scanf("%d", &key);
pos = binarySearch(books, n, key);
if (pos != -1)
printf("Book with ID %d is available at position %d.\n", key, pos + 1);
else
printf("Book with ID %d is not available in the shelf.\n", key);
return 0;
}
