// Copyright 2021 NNTU-CS

int cbinsearch(int *arr, int size, int value) {
  int Left = 0;
  int Middle;
  int Right = size - 1;
  int CountValue = 0;
  while (Left <= Right) {
    Middle = (Left + Right) / 2;
    if (arr[Middle] < value) {
      Left = Middle + 1;
    } else if (arr[Middle] > value) {
      Right = Middle - 1;
    } else if (arr[Middle] == value) {
      CountValue++;
      int M = Middle - 1;
      while (arr[M] == value && M >= Left) {
        CountValue++;
        M--;
      }
      M = Middle + 1;
      while (arr[M] == value && M <= Right) {
        CountValue++;
        M++;
      }
      return CountValue;
    }
  }
  return 0;
}
